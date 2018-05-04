/*������� �3

    �������� ���������� ����������, �������������� �������� ������� � ���� ������� XML.

    ��������, �� ���� �������� ������ ����
    "C:\WINDOWS\".
    ��������� ������, ������� � ����� ��������, ������� ����������� ���������
    ���� ������������ � ��������� ���� ������� XML. �������� ������ � XML �� ��������, ������ ��������.
    ��������� XML - �� ���� ����������, �� ��� ������ ���� ��������.

  ������� :
    1) ���������������� ������� ��������� - Windows.
    2) ����� ������������ ����� �������� ����������� ���������� C/C++, WINAPI, Shlwapi.dll � ShFolder.dll, STL.
    3) XML ������� �� ��������� ������, ������� ����� ��������������� � ����.
    4) ����������� XML ������ ��������������� ���������.

  �������: 	                                               */

#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <windows.h>

//---------------------------------------------------------------------------------
// ��������� ������ �� ������ ������ ������� ����������� ����������
int parsePath(char *ptr, int N){
  char path[N];
  strcpy(path, ptr);
  int count = 0;
  char *p = strtok (path," \\");
  while (p != NULL){
    p = strtok (NULL, " \\");
    count++;
  }
  return count;
}

//-------------------------------------------------------------------------------
// �������� ������� � ����������� ���
struct Tag{
  std::string tagName;
  std::string space;
  Tag(std::string tName, int n){
    tagName = tName;
    for(int i = 0; i < n; ++i)
       space += " ";
  }
  std::string fprint(){
    return space + tagName + "\n";
  }
};

//--------------------------------------------------------------------------------
void directories(const char * dir_name, std::ofstream &file)
{
    // ���� ��������� ������������� ����
    static std::stack<Tag> st;

    int deep = 0;
    char dir_name_path[1024];
    sprintf(dir_name_path, "%s\\*", dir_name);
    WIN32_FIND_DATA find_data;
    HANDLE handle = FindFirstFile(dir_name_path, &find_data);
    if (handle == INVALID_HANDLE_VALUE) { return; }

    do{
        const char *name = find_data.cFileName;
        if (strcmp(name, ".") == 0 || strcmp(name, "..") == 0) { continue; }
        char file_path[1024];
        sprintf(file_path, "%s%s%s", dir_name, "\\", name);

        if (find_data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY){

            // ������� ���������� ��������/�������
            int N = sizeof(file_path);
            deep = parsePath(file_path, N)-2;
            if(deep > 0){
              for(int i=0; i < deep; ++i){
                file << " ";
              }
            }

            char *pch = strrchr(file_path, '\\');

            // ������� ������� ��� � ���� (���� ����� ��������������� ��������� �����)
            st.push(  Tag( "<\/" + std::string(file_path + (pch - file_path + 1)) + ">", deep)  );
            // ����������� ���
            file << "<" << file_path + (pch - file_path + 1) << ">";
            // �������� �����
            file << file_path + (pch - file_path + 1) << "\n";
            // ��������
            directories(file_path, file);
            // ��������� ����������� ��� �� �����
            file << st.top().fprint();
            st.pop();
        }
    } while (FindNextFile(handle, &find_data));
    FindClose(handle);

    deep = 0;
}

//--------------------------------------------------------------------------------
int main()
{
  std::cout << "Start program" << std::endl;
  std::ofstream file("output.XML");

  file      << "<?xml version=\"1.0\"?>\n";
  file      << "<Directory>freeglut\n";
  directories("C:\\Windows\\", file);
  file      << "</Directory>\n";
  file.close();

  std::cout << "Finish program" << std::endl;

  return 0;
}

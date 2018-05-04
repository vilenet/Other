
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <windows.h>

//---------------------------------------------------------------------------------
// Разделяет строку на токены считая глубину вложенности директории
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
// Содержит отступы и закрывающий тег
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
    // Сюда заносятся закрывающиеся теги
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

            // Считаем количество отступов/глубину
            int N = sizeof(file_path);
            deep = parsePath(file_path, N)-2;
            if(deep > 0){
              for(int i=0; i < deep; ++i){
                file << " ";
              }
            }

            char *pch = strrchr(file_path, '\\');

            // Заносим текущий тег в стек (теги будут соответствовать названиям папок)
            st.push(  Tag( "<\/" + std::string(file_path + (pch - file_path + 1)) + ">", deep)  );
            // Открывающий тег
            file << "<" << file_path + (pch - file_path + 1) << ">";
            // Название папки
            file << file_path + (pch - file_path + 1) << "\n";
            // Ðåêóðñèÿ
            directories(file_path, file);
            // Извлекаем закрывающий тег из стека
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

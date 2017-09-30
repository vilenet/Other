// Need input.txt file
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
 
int main()
{
    system("chcp 1251");
   
    int findnum;
    int findpos;
    string text; 
    string line;
    ofstream ofs;
    ifstream ifs("input.txt");
    if(!ifs)
        cout<<"Error opening! input.txt\n";
    else
    {
        while(getline(ifs,line))
            text += line;
        ifs.clear();
        ifs.close();
        cout<<"File text input.txt :\n";
        cout<<text.c_str()<<endl;
        cout<<"Enter a phrase to delete : ";
        getline(cin,line);
        findnum = 0;
        while((findpos = text.find(line,0)) != string::npos)
        {
            text.erase(findpos,line.length());
            text.insert(findpos, " ");
            findnum++;
        }
 
        ofs.open("outp.txt");
        ofs<<text;
        ofs.close();
 
        if(findnum == 0)
            cout<<"The search phrase is not found in the text\n";
        else
            cout<<"Done : "<<findnum<<" deletion from the text\n";
        cout<<"Text saved in outp.txt\n";
    }
    
    return 0;
}

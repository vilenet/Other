                                                                      */
#include <iostream>
#include <windows.h>

BOOL createDirectory(const char *Path, LPSECURITY_ATTRIBUTES LP_AT)
{
    const char Slash[] = "\\";
    BOOL res = TRUE;

    if(!strstr(Path, Slash))
    {
        return CreateDirectoryA(Path, LP_AT);
    }
    char* dblPath  = new char[strlen(Path)+1];
    strcpy(dblPath, Path);
    char* p_dbl_Path = dblPath;

    while(p_dbl_Path!=NULL && res==TRUE)
    {
        p_dbl_Path = strstr(p_dbl_Path, Slash);

        if(p_dbl_Path != NULL)
        {
            if(*(p_dbl_Path - 1) == ':' && strstr(p_dbl_Path + 1, Slash ) == 0)
            {
                res = CreateDirectoryA(p_dbl_Path, LP_AT);
                break;
            }
            if(*(p_dbl_Path - 1) == ':')
            {
                p_dbl_Path = strstr(p_dbl_Path + 1, Slash);
            }
            *p_dbl_Path = 0;
            if(!::CreateDirectoryA(dblPath, LP_AT))
            {
                if(::GetLastError()!=ERROR_ALREADY_EXISTS)
                {
                    res = FALSE;
                    break;
                }
            }
            if(p_dbl_Path)
            {
                *p_dbl_Path = Slash[0];
                ++p_dbl_Path;
            }
        }
    }
    delete dblPath;
    return res;
}

int main()
{
    char str[] = "C:\\MyDocuments\\NewDocuments\\Data\\Home\\Source\\hello world\\";
    if(!createDirectory( str, NULL ))
        std::cout<<"failed\n";
    else
        std::cout<<"OK\n";

    return 0;
}

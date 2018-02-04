#include <iostream>
using namespace std;

void test1(){ cout<<"тест 1"<<endl;}
void test2(){ cout<<"тест 2"<<endl;}
void test3(){ cout<<"тест 3"<<endl;}

// Массив указателей на функции
void(*tests[])(void) = {test1, test2, test3};

int main()
{
    setlocale(LC_ALL, "");

    for(int i=0; i<sizeof(tests)/sizeof(tests[0]); ++i)
       tests[i]();


}


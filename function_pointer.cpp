#include <iostream>
using namespace std;

void test1(){ cout<<"���� 1"<<endl;}
void test2(){ cout<<"���� 2"<<endl;}
void test3(){ cout<<"���� 3"<<endl;}

// ������ ���������� �� �������
void(*tests[])(void) = {test1, test2, test3};

int main()
{
    setlocale(LC_ALL, "");

    for(int i=0; i<sizeof(tests)/sizeof(tests[0]); ++i)
       tests[i]();


}


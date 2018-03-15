//программу, которая вычисляет процентное содержание символов G (гуанин) и C (цитозин) в введенной строке
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s = "aCgGtgtTat";

  for ( size_t i = 0; i < s.length(); ++i)
    s[i] = tolower(s[i]);

  float g = count(s.begin(), s.end(), 'g');
  float c = count(s.begin(), s.end(), 'c');

  cout << ((c+g) / s.size() * 100);

}

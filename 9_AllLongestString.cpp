#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <algorithm>
using namespace std;

std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
   
  std::sort(inputArray.begin(), inputArray.end(), 
            [](std::string i, std::string j)->bool {  return ( i.size() < j.size());  } 
           );
  int sz = inputArray.rbegin()->size();
  std::vector<std::string> res;
  
  for (std::vector<std::string>::iterator it = inputArray.begin(); it != inputArray.end(); it++)
    if(it->size() == sz)
      res.push_back( *it );
     
  return res;
}

int main()
{
   std::vector<std::string> matrix = { "a", "abc", "cbd", "zzzzzz", "a", "abcdef", "asasa", "aaaaaa" };
   
   std::vector<std::string> res = allLongestStrings(matrix);
   
   for(int i = 0; i < res.size(); ++i){
      cout << res[i];
     
      cout << " "; 
   }
    
   getch(); 
}

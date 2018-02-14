// Least common multiple
#include <iostream>

int main()
{
    int a,b,i = 1;
    
    std::cin>>a;
    std::cin>>b;

    if (a==b){
      std::cout << a;
    }
    else{
      while( i < a*b){
        if (i%a==0 and i%b==0)
          break;
        i++;
      }
      std::cout <<i;
    }
}
 // Example program
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <map>
#include <conio.h>


int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    
    int sum = 0;
    std::map<int, bool> m;
    
   for(int X = 0; X < matrix[0].size(); ++X)
     for(int Y = 0; Y < matrix.size(); ++Y)  
       if((matrix[Y][X] != 0) && (matrix[Y][X] != 10) && ( !m[X] ) )
         sum += matrix[Y][X];
       else
         m[X] = true;   
        
    return sum;
}

int main()
{
  std::vector<std::vector<int> > matrix = {{1, 0, 3}, 
                                           {0, 2, 1}, 
                                           {1, 2, 0}};
  
  std::cout << "\nSum: " << matrixElementsSum(matrix) << std::endl;
  
  
  getch();
}


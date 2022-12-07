#include <iostream>
#include <cmath>
int main() {
  int sum{};
  int i{};
  int z{};
  int sumtotalfor3{};
  int sumtotalfor5{};
  while(i + 3 < 1000)
    {
      i += 3;
      if(i%5 == 0)
      {
        sumtotalfor3 += 0;
      }
      else
      {
        sumtotalfor3 += i;
      }
      
      
    }
 while(z + 5 < 1000)
   {
      z += 5;
        sumtotalfor5 += z;
    }
  
  sum = sumtotalfor3 + sumtotalfor5;
  std::cout << sum;
  return 0;
}

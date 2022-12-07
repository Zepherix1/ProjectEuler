#include <iostream>
#include <cmath>

bool is_even(int num)
{
  if(num%2 == 0)
    return true;
  else if(num%2 != 0)
    return false;
}

int fib(int x) {
   if((x==1)||(x==0)) 
   {
      return(x);
   }
   else {
      return(fib(x-1)+fib(x-2));
     }
  }

int main() 
  {
    int i{};
    int x{};
    int array[1000];
      int sum{};
   while(fib(i) < 4000000) {
      array[i] = fib(i);
      i++;
     }
for(int z = 0; z < i; ++z)
  {
   if(is_even(array[z]) == 1)
   {
     sum += array[z];
   }
    else
     sum += 0;
  }
    std::cout << sum;
    return 0;
  }



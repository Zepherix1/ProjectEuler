#include <iostream>
#include <cmath>

int main() {
  int a{1}, b{2}, c{3}, value{};
  while(a + b + c != 1000 && ((a<b) && (b<c)) && pow(a, 2) + pow(b, 2) != pow(c,2))
    {
      c+= 1;
      for(int b =2; b < c-1; b++)
        {
          for(int a = 1; a < b-1; a++)
            {
              if(pow(a, 2) + pow(b, 2) == pow(c,2) && (a + b + c) ==1000)
              {
               value = a*b*c;
              }
            }
        }
    }
  std::cout << value;
}

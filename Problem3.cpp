#include <iostream>
#include <cmath>

std::uint64_t rip_in_half(std::uint64_t x)
{
  std::uint64_t i{2};
 while(x%i != 0)
 {
   ++i;
 }
if(x%i == 0)
  {
    x = x/i;
    return x;
  }
  else if(i == x)
  {
    return i;
  }
}

int main(){
  
std::uint64_t x = 600851475143;
while(x > 0)
  {
    x = rip_in_half(x);
    std::cout << x << "\n";
    if(rip_in_half(x) == x){break;}
  }
std::cout << x;
return 0;
}

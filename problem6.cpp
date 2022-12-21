#include <iostream> 
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  n -= 1;
  std::cout << 4*n + 14*(n *(n-1)/2) + 16*(n*(n-1)*(n-2)/6) + 6*(n*(n-1)*(n-2)*(n-3)/24);
}

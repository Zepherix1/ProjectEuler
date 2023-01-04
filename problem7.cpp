#include <iostream>
#include <vector>

bool is_prime(std::vector<int>& known_primes, int num)
{
  for(const auto& a:known_primes)
    {
      if(num%a == 0)
      {
        break;
      }
      else if(num%a != 0 && a == known_primes.back())
      {
        known_primes.push_back(num);
        return true;

      }
    }
  return false;
}

int main() {
  std::vector<int> known_primes{2, 3};
  int count =2;
  for(int i = 3; known_primes.size() <= 10000; i+=2)
    {
      is_prime(known_primes, i);
    }
  std::cout << known_primes.back();
}

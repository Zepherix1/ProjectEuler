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
  long long result{5};
  for(int i = 3; i < 2000000; i+=2)
    {
      if(is_prime(known_primes, i) == 1)
      {
        result += i;
      }
    }
  std::cout <<result;
}

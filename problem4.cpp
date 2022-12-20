#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <time.h>

bool factor(int num)
{
  for(int i = 100; i < 1000; ++i)
    {
      if(num%i == 0 && num/i <1000)
      {
        std::cout << i << "\n";
        return true;
      }

    }
  return false;
}

int main() {
  clock_t start_time = clock();
  for (int initial = 997; initial > 100; --initial)
    {
      std::string reversed = std::to_string (initial);
      std::reverse(reversed.begin(), reversed.end());
      std::string temp = std::to_string(initial) + reversed;
      int num = stoi(temp);
      if(factor(num) == true)
      {
        std::cout << num << "\n";
        break;
      } 
    }
  clock_t end_time = clock();
  std::cout << end_time - start_time << "ms?";
  return 0;
}

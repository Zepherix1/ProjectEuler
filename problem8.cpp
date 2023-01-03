#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

int main() {
  std::ifstream open("num.txt");
  std::string medium;
  std::getline(open,medium);
  long long max{};
  for(int i = 0; i < medium.length() - 12; i++)
    {
      std::string temp = medium.substr(i, 13);
      long long current{1};
      for(int j = 0; j < 13; j++)
        {
          std::string t = temp.substr(j, 1);
          int f = stoi(t);
          current = current * f;
        }
      if(current > max) {max = current;}
    }
  std::cout << max;
    }

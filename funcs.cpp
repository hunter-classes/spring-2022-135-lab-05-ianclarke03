#include <iostream>
//#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d)
{
    int remainder = n % d;

    if(remainder == 0) {
        return true;
    } else {
        return false;
    }
}

bool isPrime(int n)
{
  for (int i = 2; i <= n-1; i++)
  {
    if (n % i != 0)
      return false;
    else if (n % i == 0)
      return true;
  }
  std::cout << "\n";
}


int main()
{
  std::cout << isDivisibleBy(10,5) << "\n";
  std::cout << isPrime (10) << "\n";

  return 0;
}

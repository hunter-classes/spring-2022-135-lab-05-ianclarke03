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

bool isPrime(int n) {
  int x = 0;
  for (int i = 2; i <= n-1; i++)
  {
    int remainder = n % i;
    if (remainder != 0) // is a prime
      x++;
    }
  return x == (n-2);
}

/*
int nextPrime(int n)
{
  int result;
  for (int i = 2; i <= n-1; i++)
  {
    //n++;
    int remainder = n % i;
    if (remainder != 0) // is a prime
      result = n;
    else if (remainder == 0)
      n++;
    }
  return result;
}
*/

int countPrimes(int a, int b)
{
  //for(int q; a <= q <= b; q++)
  while (a <= b)
    {
      int x = 0;
      for (int i = 2; i <= a-1; i++)
      {
        int remainder = a % i;
        if (remainder != 0) // is a prime
        x++;
      }
      if (x == (a-2) && (a < b))
      {
        std::cout << a << ", ";
      }
      a++;
    }
}



int main()
{
  std::cout << "Task A:\n";
  std::cout << isDivisibleBy(10,5) << "\n"; //test 10,5 and 11,4
  std::cout << isDivisibleBy(11,4) << "\n";

  std::cout << "Task B:\n";
  std::cout << isPrime(8) << "\n"; // test 2,8,15,17
  std::cout << isPrime(15) << "\n";
  std::cout << isPrime(17) << "\n";
  std::cout << isPrime(2) << "\n";
/*
  std::cout << "Task C:\n";
  
  std::cout << nextPrime(2) << "\n"; // test 2, 14, and 17
  std::cout << nextPrime(14) << "\n";
  std::cout << nextPrime(17) << "\n";
*/

  std::cout << "Task D:\n";
  std::cout << countPrimes(7, 21) <<"\n";

  
  return 0;
}

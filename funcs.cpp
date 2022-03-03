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
    if (remainder != 0)
      x++;
    }
  return x == (n-2); // prime
}


int nextPrime(int n)
{
  n++;
  while (!(isPrime(n))) //not prime
  {
    n++;
  }
  return n;
}


int countPrimes(int a, int b)
{
  int count = 0;
  while (a <= b)
    {
      if((isPrime(a)))
      {
        count++;
        a++;
        }
      else
      a++;
    }
  return count;
}

bool isTwinPrime(int n)
{
  if(isPrime(n) && (isPrime(n + 2) || isPrime(n-2)))
    return true;
  else
    return false;
}

int nextTwinPrime(int n)
{
  n++;
  while (!(isTwinPrime(n)))
    n++;
  return n;
}

int largestTwinPrime(int a, int b)
{
  
}



/*
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

  std::cout << "Task C:\n";
  
  std::cout << nextPrime(0) << "\n"; // test 2, 14, and 17
  std::cout << nextPrime(3) << "\n";
  std::cout << nextPrime(14) << "\n";
  std::cout << nextPrime(17) << "\n";


  std::cout << "Task D:\n";
  std::cout << countPrimes(2, 20) << "\n";
  std::cout << countPrimes(3, 7) << "\n";
  std::cout << countPrimes(8, 10) << "\n";


  std::cout << "Task E:\n";
  std::cout << isTwinPrime(17) << "\n"; //true (1)
  std::cout << isTwinPrime(2) << "\n"; //false
  std::cout << isTwinPrime(15) << "\n"; //false (0)
  std::cout << isTwinPrime(19) << "\n"; //true

  std::cout << "Task F:\n";
  std::cout << nextTwinPrime(17) << "\n"; 

  
  return 0;
}
*/
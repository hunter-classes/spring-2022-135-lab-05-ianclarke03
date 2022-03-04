#include <iostream>
#include "funcs.h"

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
  while (!isTwinPrime(b))
    b--;
  if (b < a)
    b = -1;
  return b;
}

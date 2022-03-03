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

/*
int nextPrime(int n)
{
  while !(isPrime(int n))
{
n++;
if isPrime(int n)
return n;
}
  }
*/

//add 1 to inout, if that number isnt a prime, add one to number, if it is, print that number.
int nextPrime(int n)
{
  n++;
  int nextprime = 0;
  while (nextprime = 0)
  {
  int x = 0;
  for (int i = 2; i <= n-1; i++)
    {
    int remainder = n % i;
    if (remainder != 0)
      x++;
    }
  if (x == (n-2)) //prime
    nextprime = n;
  else if (x != (n-2))
    n++;
  }
  return nextprime;
}

/*
//doesnt work for single digit primes
int nextPrime(int n) {
	n++;
	while (n % 2 == 0 || n % 3 == 0 || n % 4 == 0 || n % 5 == 0 || n % 6 == 0 || n % 7 == 0 || n % 8 == 0 || n % 9 == 0) {
		n++;
	}
	return n;
*/

/*
int countPrimes(int a, int b)
{
  int place = a;
  while (a <= place <= b)
    {
      int x = 0;
      for (int i = 2; i <= place-1; i++)
      {
        int remainder = place % i;
        if (remainder != 0) // is a prime
        x++;
      }
      if (x == (place-2) )
      {
        std::cout << place << ", ";
      }
      place++;
    }
}
*/
//&& (a < b)

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
  
  std::cout << nextPrime(2) << "\n"; // test 2, 14, and 17
  std::cout << nextPrime(3) << "\n";
  std::cout << nextPrime(14) << "\n";
  std::cout << nextPrime(17) << "\n";

/*
  std::cout << "Task D:\n";
  std::cout << countPrimes(2, 7) <<"\n";
*/
  
  return 0;
}

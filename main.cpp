#include <iostream>
#include "funcs.h"

int main()
{
  
  std::cout << "Task A:\n";
  std::cout << "10 is divisible by 5: " << isDivisibleBy(10,5) << "\n";
  std::cout << "11 is divisible by 4: " << isDivisibleBy(11,4) << "\n";
  std::cout << "\n";

  std::cout << "Task B:\n";
  std::cout << "8 is a prime number: " << isPrime(8) << "\n";
  std::cout << "15 is a prime number: " << isPrime(15) << "\n";
  std::cout << "17 is a prime number: " << isPrime(17) << "\n";
  std::cout << "2 is a prime number: " << isPrime(2) << "\n";
  std::cout << "\n";

  std::cout << "Task C:\n";
  
  std::cout << "The smallest prime number greater than 0 is " << nextPrime(0) << "\n";
  std::cout << "The smallest prime number greater than 3 is " << nextPrime(3) << "\n";
  std::cout << "The smallest prime number greater than 14 is " << nextPrime(14) << "\n";
  std::cout << "The smallest prime number greater than 17 is " << nextPrime(17) << "\n";
  std::cout << "\n";


  std::cout << "Task D:\n";
  std::cout << "The number of prime numbers in the interval (2 <= n <= 20) is " << countPrimes(2, 20) << "\n";
  std::cout << "The number of prime numbers in the interval (3 <= n <= 7) is " << countPrimes(3, 7) << "\n";
  std::cout << "The number of prime numbers in the interval (8 <= n <= 10) is " << countPrimes(8, 10) << "\n";
  std::cout << "\n";


  std::cout << "Task E:\n";
  std::cout << "17 a twin prime number: " << isTwinPrime(17) << "\n"; //true (1)
  std::cout << "2 a twin prime number: " << isTwinPrime(2) << "\n"; //false
  std::cout << "15 a twin prime number: " << isTwinPrime(15) << "\n"; //false (0)
  std::cout << "19 a twin prime number: " << isTwinPrime(19) << "\n"; //true
  std::cout << "\n";

  std::cout << "Task F:\n";
  std::cout << "The smallest twin prime greater than 17 is " << nextTwinPrime(17) << "\n";
  std::cout << "The smallest twin prime greater than 19 is " << nextTwinPrime(19) << "\n";
  std::cout << "The smallest twin prime greater than 0 is " << nextTwinPrime(0) << "\n";
  std::cout << "\n";

  std::cout << "Task G:\n";
  std::cout << "Returns -1 if there are no twin prime numbers in the specified interval.\n";
  std::cout << "The largest twin prime number in the interval (5 <= n <= 18) is " << largestTwinPrime(5,18) << "\n";
  std::cout << "The largest twin prime number in the interval (1 <= n <= 31) is " << largestTwinPrime(1,31) << "\n";
  std::cout << "The largest twin prime number in the interval (14 <= n <= 16) is " << largestTwinPrime(14,16) << "\n";
  std::cout << "The largest twin prime number in the interval (0 <= n <= 2) is " << largestTwinPrime(0,2) << "\n";
  std::cout << "\n";
  
  return 0;
}
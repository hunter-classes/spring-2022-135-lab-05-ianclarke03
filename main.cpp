#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Task A\n";
  std::cout << isDivisibleBy(10,5) << "\n"; //test 10,5 and 11,4
  std::cout << isDivisibleBy(11,4) << "\n";

  std::cout << "Task B\n";
  std::cout << isPrime(8) << "\n"; // test 2,8,15,17
  std::cout << isPrime(15) << "\n";
  std::cout << isPrime(17) << "\n";
  std::cout << isPrime(2) << "\n";

  std::cout << "Task C\n";
  /*
  std::cout << nextPrime(2) << "\n"; // test 2, 14, and 17
  std::cout << nextPrime(14) << "\n";
  std::cout << nextPrime(17) << "\n";
*/
  return 0;
}

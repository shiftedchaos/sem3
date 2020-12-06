#include <iostream>

long double factorial(int n)
{
  if (n < 0)
    return 0;
  if (n == 0)
    return 1;
  else (n > 0);
    return (n * factorial(n - 1));
}

int main()
{
  int n;
  std::cout << "Of which number do you wanna calculate factorial?";
  std::cin >> n;
  std::cout << "Result" << ' ' << factorial(n);
  return 0;
}

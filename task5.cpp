#include <iostream>
#include <cmath>

int main()
{
  double a, b, c, d, x;

  std::cout << "Input the value of a: ";
  std::cin >> a;
  std::cout << "Input the value of b: ";
  std::cin >> b;
  std::cout << "Input the value of c: ";
  std::cin >> c;
  if (a == 0)
  {
    std::cout << "Not a quadratic equation.";
    return 0;
  }
  d = b * b - 4 * a * c;
  if (d >= 0)
    std::cout << "Roots: " << ((-b + sqrt(d)) / (2 * a)) << ", "
     ((-b - sqrt(d)) / (2 * a));
  else
    std::cout << "No Real roots! Think about it, man!!!";
  return 0;
}

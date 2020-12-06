#include <iostream>

int main()
{
  double x, y;

  std::cout << "Input the value of x and y" << "\n";
  std::cin >> x >> y;
  x = x + y;
  y = x - y;
  x = x - y;
  std::cout << x << ' ' << y;
  return 0;
}

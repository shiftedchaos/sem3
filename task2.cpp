#include <iostream>
#define F 0.00001
#define E 0.0000001
#define L 0.01

int main()
{
  double f;
  double e;
  double l;

  std::cout << "Input the value of Force, Energy, Length" << '\n';
  std::cin >> f >> e >> l;
  std::cout << "Value of Force: " << f * F << '\n' << "Value of Energy: " << e * E << '\n' << "Value of Length: " << l * L;
  return 0;
}

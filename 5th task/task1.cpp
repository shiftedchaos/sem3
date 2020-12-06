#include <iostream>
#include <cmath>

class Complex
{
private:
  double re;
  double im;
public:
  Complex (double re1, double im1)
  {
    re = re1;
    im = im1;
  }
  void modul ()
  {
    std::cout << "Module of complex number equals to  " << sqrt(re*re + im*im)
     << std::endl;
  }
};

int main()
{
  double a;
  double b;
  std::cout << "Input Resolutional part of your complex number" << std::endl;
  std::cin >> a;
  std::cout << "Input Imaginary part of your complex number" << std::endl;
  std::cin >> b;
  Complex z(a, b);
  z.modul();
  return 0;
}

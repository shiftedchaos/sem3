#include <iostream>
#include <cmath>
template <typename T>

class Complex
{
public:
  T re;
  T im;

  Complex (T re1, T im1)
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
  //double a;
  //double b;
  //std::cout << "Input Resolutional part of your complex number" << std::endl;
  //std::cin >> a;
  //std::cout << "Input Imaginary part of your complex number" << std::endl;
  //std::cin >> b;
  Complex <float> z_1(2.0, 4.3);
  Complex <double> z_2(1.5, 2.7);
  //Complex z(a, b);
  z_1.modul();
  z_2.modul();
  return 0;
}

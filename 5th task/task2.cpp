#include <iostream>

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
  };
  double getre() const { return re; }
  double getim() const { return im; }
};

Complex operator + (const Complex &a, const Complex &b)
  {
    return Complex (a.getre() + b.getre(), a.getim() + b.getim());
  }
Complex operator - (const Complex &a, const Complex &b)
{
  return Complex (a.getre() - b.getre(), a.getim() - b.getim());
}
Complex operator * (const Complex &a, const Complex &b)
{
  return Complex (a.getre() * b.getre() - a.getim() * b.getim(),
  a.getre() * b.getre() + a.getim() * b.getim());
}



int main ()
{
  double r1, i1, r2, i2, prod;
  std::cout << "Inpur real part of your first complex number and then " <<
   "Imaginary part of your first complex number" << std::endl;
  std::cin >> r1;
  std::cin >> i1;
  std::cout << "Inpur real part of your second complex number and then " <<
   "Imaginary part of your second complex number" << std::endl;
  std::cin >> r2;
  std::cin >> i2;
  Complex x (r1, i1);
  Complex y (r2, i2);
  Complex z (0, 0);
  z = x + y;
  std::cout << "Sum:" << z.getre() << ' ' << z.getim() << "i" << std::endl;
  Complex z1 (0, 0);
  z1 = x - y;
  std::cout << "Difference: " << z1.getre() << ' ' << z1.getim()
  << "i" << std::endl;
  Complex z2 (0, 0);
  z2 = x * y;
  std::cout << "Product: " << z2.getre() << ' ' << z2.getim()
  << "i" << std::endl;
  return 0;
}

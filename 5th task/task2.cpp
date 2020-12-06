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

  


int main ()
{
double r1, i1, r2, i2;
double prod;
std::cin >> r1;
std::cin >> i1;
std::cin >> r2;
std::cin >> i2;
Complex x (r1, i1);
Complex y (r2, i2);
Complex z (0, 0);
z = x + y;
std::cout << z.getre() << ' ' << z.getim();


}

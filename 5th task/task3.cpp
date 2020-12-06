#include <iostream>

class Complex
{
private:
  double re;
  double im;
public:
  Complex (double re1 = 0.0, double im1 = 0.0)//: re(), im()
  {
    re = re1;
    im = im1;
  }
  friend std::ostream& operator<< (std::ostream &out, const Complex &complex);
  friend std::istream& operator>> (std::istream &in, Complex &complex);
};

std::ostream& operator<< (std::ostream &out, const Complex &complex)
{
  out << "z = " << complex.re << " + " << complex.im << "i";
  return out;
}

std::istream& operator>> (std::istream &in, Complex &complex)
{
  in >> complex.re;
  in >> complex.im;
}

int main()
{
  std::cout << "Input Re'n'Im prts of cmplx num: \n";

  Complex complex;
  std::cin >> complex;
  std::cout << "Output: " << complex << '\n';
}

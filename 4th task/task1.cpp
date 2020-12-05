#include <iostream>

class Cond {
private:
  float c, u;
  float energy;
public:
  Cond(float valueC, float valueU)
  {
    c = valueC;
    u = valueU;
  }
  void Print ()
  {
    std::cout << "C = " << c << "\t U = " << u << std::endl;
  }

  float calc_en()
  {
    std::cout << "W = " << (c * u * u)/2;
  }

};

int main()
{
  float z, f;
  std::cout << "input c" << std::endl;
  std::cin >> z;
  std::cout << "input u" << std::endl;
  std::cin >> f;
  Cond a(z, f);
  a.Print();
  a.calc_en();
  return 0;
}

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
    std::cout << (c * u * u)/2;
  }

};

int main()
{
  Cond a(6, 1);
  a.Print();
  a.calc_en();
  return 0;
}
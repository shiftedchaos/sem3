#include <iostream>
#include <string>

class Goods
{
private:
  std::string n;
  float p;
  float a;
public:
  Goods (std::string name, float price, float amount)
  {
    n = name;
    p = price;
    a = amount;
  }

  void Print ()
  {
    std::cout << "name = " << n << "\t price = " << p << "\t amount = " << a <<
    std::endl;
  }

  double cost()
   {
      return a*p;
   }
};

int main()
{
  std::string na;
  float pr;
  float am;
  std::cout << "input the name of good" << std::endl;
  getline(std::cin, na);
  //std::cin >> na;
  std::cout << "input price of the good" << std::endl;
  std::cin >> pr;
  std::cout << "input the amount of the good" << std::endl;
  std::cin >> am;
  Goods a(na, pr, am);
  double d;
  a.Print();
  d = a.cost();
  std::cout << "Final price is - " << d;

  return 0;
}

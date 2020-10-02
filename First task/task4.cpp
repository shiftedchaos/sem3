#include <iostream>
#include <cmath>

int main()
{
  double  a;

  std::cout << "Введите значение: ";
  std::cin >> a;
  std::cout << "Округление по правилам арифметики: " << round(a) << '\n'
   << "Округление вниз: " << floor(a) << '\n' << "Округление вверх: "
    << ceil(a) << '\n' << "Отбрасывание дробной части: " << trunc(a) << '\n'
    << "Корень квадратный: " << sqrt(a);
  return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

//Using function from seminar getRandomNumber()

double getRandomNumber(double minimum, double maximum)
{
  double randZeroOne = rand()/static_cast<double>(RAND_MAX); //getting random number from 0 to 1
  double randInterval = randZeroOne * (maximum - minimum); //getting rand numb from 0 to max-min
  double randMinMax = randInterval + minimum;
  return randMinMax;
}

int main()
{
  srand(time(0));
  double r, x, y, pi, p_ttl = 0;
  double p_in = 0;
  std::cout << "Input R - " << std::endl;
  std::cin >> r;
  std::cout << "Input amount of points - " << std::endl;
  std::cin >> p_ttl;
  for (size_t i = 0; i < p_ttl; i++)
  {
    x = getRandomNumber(-r, r);
    y = getRandomNumber(-r, r);
    if (x * x + y * y <= r * r)
    {
      p_in++;
    };
  };
  pi = (4 * p_in) / p_ttl;
  std::cout << "Calculated by Monte-Carlo method number pi - " << pi << std::endl;
  return 0;
}

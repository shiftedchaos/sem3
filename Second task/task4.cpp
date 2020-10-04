#include <iostream>
#include <cmath>

int main()
{
  __int64 n_1, n_2, a, b, c, d, x;
  int n = 0;
  int count_1 = n_1;
  int count_2 = n_2;
  __int64 multipl;
  //int middle_1 = round(n / 2);

  std::cout << "Input 1 number: ";
  std::cin >> n_1;
  std::cout << std::endl << "Input 2 number: ";
  std::cin >> n_2;

   while (count_1)
   {
     count_1 /= 10;
     n++;
   }

   int middle_1 = round(n / 2);

   if (n <= 2)
   {
     multipl = n_1 * n_2;
     std::cout << "Result: " << multipl;
   }
   else
   {
     x = pow(10, middle_1);
     a = n_1 / x;
     b = n_1 % x;
     c = n_2 / x;
     d = n_2 % x;
     multipl = a * b * pow(x, 2) + x * ((a + b) * (c + d) - a * c - b * d) + b * d;
     std::cout << "Result: " << multipl;
   }



  return 0;
}

##include <iostream>

int main()
{
  bool  a;
  bool  b;
  bool  c;

  std::cin >> a, b;

  c = !(a && b) && (a || b);

  std::cout << c; 
  return 0;
}

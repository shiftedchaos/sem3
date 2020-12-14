#include <iostream>

template <int n>
struct fib
{
  static constexpr int x = fib<n - 1>::x + fib<n - 2>::x;
};

template<>
struct fib<0>
{
  static constexpr int x = 0;
};

template<>
struct fib<1>
{
  static constexpr int x = 1;
};

int main()
{
  std::cout<<fib<3>::x;
  return 0;
}

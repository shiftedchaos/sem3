#include <iostream>
#include <cmath>

template <typename T, typename... Type>
auto py_wrapped_func(T (*func)(Type...), Type... args)
{
  return func(args...);
}

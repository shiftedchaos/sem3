#include <iostream>
#include <string>

template <typename T>
int size_of(T arg)
{
  return sizeof(arg);
}

template <typename T, typename... Types>
int size_of(T firstArg, Types... args)
{
  return sizeof(firstArg) + size_of(args...);
}

int main()
{
  std::cout << size_of("something", "342", 434, 12) << std::endl;
  return 0;
}

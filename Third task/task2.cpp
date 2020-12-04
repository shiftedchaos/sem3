#include <iostream>

void printArray(int *array, int n)
{
  for (int i = 0; i < n; ++i)
  {
    std::cout << array[i] << ' ';
  std::cout << '\n';
  }
}

int main()
{
  int n;
  int *array;

  std::cin >> n;
  array = new int[n];
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> array[i];
  }
  printArray(array, n);
  return 0;
}

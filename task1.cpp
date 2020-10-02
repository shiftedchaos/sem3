#include <iostream>

void Sort(int *array,int n)
{
	for (size_t i = 1; i < n; i++)
    {
		for (size_t j = i; j > 0 && array[j - 1] > array[j]; j--)
    {
			int tmp = array[j-1];
			array[j-1] = array[j];
			array[j] = tmp;
		}
	}
}
int main ()
{
  int n;
  int *array;

  std::cin >> n;
  array = new int[n];
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> array[i];
  }
  Sort(array, n);
  for (size_t i = 0; i < n; i++)
  {
    std::cout << array[i] << ' ';
  }
  return 0;
}

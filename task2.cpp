#include <iostream>

int main ()
{
  int n;
  int *array;
  int key;

  std::cout << "Number of elements in array: " << std::endl;
  std::cin >> n;
  array = new int[n];
  std::cout << std::endl << "Insert array: ";
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> array[i];
  }
  std::cout << std::endl << "Insert key: ";

  std::cin >> key; // считываем ключ

  bool flag = false;
  int l = 0; // левая граница
  int r = (n - 1); // правая граница
  int mid;

  while ((l <= r) && (flag != true))
  {
    mid = (l + r) / 2; // считываем срединный индекс отрезка [l,r]

    if (array[mid] == key) flag = true; //проверяем ключ со серединным элементом
    if (array[mid] > key) r = mid - 1; // проверяем, какую часть нужно отбросить
    else l = mid + 1;
  }

    if (flag) std::cout << "elem index " << key << " in array equals: " << mid;
    else std::cout << "sorry, no element in array";
  return 0;
}

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

  std::cin >> key;

  bool flag = false;
  int l = 0;
  int r = (n - 1);
  int mid;

  while ((l <= r) && (flag != true))
  {
    mid = (l + r) / 2;

    if (array[mid] == key) flag = true; 
    if (array[mid] > key) r = mid - 1;
    else l = mid + 1;
  }

    if (flag) std::cout << "elem index " << key << " in array equals: " << mid;
    else std::cout << "sorry, no element in array";
  return 0;
}

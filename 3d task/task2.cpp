#include <iostream>

const int nmax = 1000;

void Merg(int arr[], int begin, int end)
{
	int i = begin,
		t = 0,
		mid = begin + (end - begin) / 2,
		j = mid + 1,
		d[nmax];

	while (i <= mid && j <= end){

		if (arr[i] <= arr[j]) {
			d[t] = arr[i]; i++;
		}
		else {
			d[t] = arr[j]; j++;
		}
		t++;
	}

	while (i <= mid){
		d[t] = arr[i]; i++; t++;
	}

	while (j <= end){
		d[t] = arr[j]; j++; t++;
	}

	for (i = 0; i < t; i++)
        arr[begin + i] = d[i];
}






void printArray(int *arr, int n)
{
  for (int i = 0; i < n; ++i)
  {
    std::cout << arr[i] << ' ';
  std::cout << '\n';
  }
}

void merge_sort(int *arr, int left, int right)
{
    int temp = 0;
    if (left < right)
      if (right - left == 1)
      {
        if (arr[left] > arr[right]){
          temp = arr[left];
          arr[left] = arr[right];
          arr[right] = temp;
        }
      }
      else {
        merge_sort(arr, left, left + (right - left) / 2);
        merge_sort(arr, left + (right - left) / 2 + 1, right);
        Merg(arr, left, right);
      }
}

int main()
{
  int n;
  int *arr;

  std::cin >> n;
  arr = new int[n];
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }
  merge_sort(arr, 0, n - 1);
  std::cout << "Sorted array" << std::endl;
  printArray(arr, n);
  return 0;
}

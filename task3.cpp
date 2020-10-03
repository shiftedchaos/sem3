#include <iostream>

int main()
{
  int const n=4;
  int const m=3;
  int *arr_2;
  int *arr_1;
  int step;
  int g = 0, k = 0;
  int tarr_1, tarr_2;
  int p = 1, t = 1;

  arr_1 = new int[n];
  std::cout << std::endl << "Insert array 1: ";
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> arr_1[i];
  }

  arr_2 = new int[m];
  std::cout << std::endl << "Insert array 2: ";
  for (size_t j = 0; j < m; j++)
  {
    std::cin >> arr_2[j];
  }
  std::cout << std::endl << "Insert step: ";
  std::cin >> step;

//  for (size_t i = 0; i < n; i++) {
//    std::cout << arr_1[i];
//  }for (size_t i = 0; i < m; i++) {
  //  std::cout << arr_2[i];
  //}

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if ((arr_1[i] == arr_2[j]) && (arr_1[i] + step == arr_1[i + 1])
      && (arr_2[j] + step == arr_2[j + 1]))
      {
        k = j;
        break;
      }
    }
    if ((arr_1[i] == arr_2[k]) && (arr_1[i] + step == arr_1[i + 1])
     && (arr_2[k] + step == arr_2[k + 1]))
    {
      g = i;
      break;
    }
  }
  //std::cout << g << ' ' << k;
  tarr_1 = arr_1[g];
  tarr_2 = arr_2[k];
  //std::cout << tarr_1 << ' ' << tarr_2;
  for (size_t i = g; i < n; i++) {
    if (arr_1[i] + step == arr_1[i + 1])
    {
      p++;
    }
  }
  for (size_t i = k; i < m; i++) {
    if (arr_2[i] + step == arr_2[i + 1])
    {
      t++;
    }
  }
//std::cout << "p, t" << p << ' ' << t;

  if (t >= p)
  {
    for (size_t i = g; i < g + p; i++)
    {
      std::cout << arr_1[i] << ' ';
    }
  }
  else if (t < p)
  {
    for (size_t i = k; i < k + t; i++)
    {
      std::cout << arr_2[i] << ' ';
    }
  }

  return 0;
}

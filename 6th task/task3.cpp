#include <iostream>

class ArrayInt
{
public:
  int arr_len;
  int *arr;
  ArrayInt () //default constructor
  {
    int arr_len = 0;
    int *arr = nullptr;
  }
  ArrayInt (int len) // constructor with 1 param.
  {
    arr_len = len; //инициализация длины массива переданным в конструктор значением
    arr = new int[len]; //динамическое выделение памяти под массив соответствующей длины.
  }
  ~ArrayInt ()
  {
    delete[] arr;
  }

  void reallocate(int newlength)
  {
    delete[] arr; //удаление уже существующего массива
    int *newarr = new int[newlen]; //выделение памяти под массив новой длины
  }

  void insertBefore(int value, int index)
  {
    int *newarr = new int[arr_len + 1];
    for (size_t i = 0; i < index; i++)
    {
      newarr[i] = arr[i];
    }
    newarr[index] = value;
    for (size_t i = (index + 1); i < (arr_len + 1) ; i++)
    {
      newarr[i] = arr[i];
    }
    *arr = *newarr;
    delete[] newarr;
  }
};

int main()
{
ArrayInt arr





  return 0;
}

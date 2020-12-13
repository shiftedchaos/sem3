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
};



int main()
{
  return 0;
}

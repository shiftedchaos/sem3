#include <iostream>
using namespace std;

class ArrayInt
{
private:
  int arr_len;
  int *arr;
public:
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

  void reallocate(int newlen)
  {
    delete[] arr; //удаление уже существующего массива
    int *newarr = new int[newlen]; //выделение памяти под массив новой длины
  }

  void insertBefore(int value, int index)
  {
    int *newarr = new int[arr_len + 11]; //новый массив длины на 1 больше
    for (size_t i = 0; i < index; i++) // скопировать в новый массив элементы из старого до index
    {
      newarr[i] = arr[i];
    }
    newarr[index] = value; //вставить в новый массив value по индексу index
    for (size_t i = (index + 1); i < (arr_len + 1) ; i++) //скопировать в новый массив элементы из старого от index до конца
    {
      newarr[i] = arr[i];
    }
    *arr = *newarr; // удаляем старый массив и присваиваем указателю на старый массив указатель на новый массив
    delete[] newarr;
  }
};

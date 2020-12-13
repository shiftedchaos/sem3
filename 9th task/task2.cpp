#include <iostream>
#include <iomanip>

template <typename T>
class  Queue
{
private:
  T* queue;
  T tail, head;
  int len;
public:
  Queue(int len1)
  {
    len = len1;
    queue = new T[len];
    head = -1;
    tail = 0;
  }
  ~Queue()
  {
    delete[]queue;
  }

  bool push(const T);
  bool pop();
  void print_queue();
};

template <typename T>
bool Queue<T>::push(const T value)
{
  if (head == len - 1)
  {
    return false;
  }
  head++;
  queue[head] = value;
  return true;
}

template <typename T>
bool Queue<T>::pop()
{
  if (head == -1)
  {
    return false;
  }
  for (int i = 0; i < head; i++)
  {
    queue[tail + i] = queue[tail + i + 1];
  }
  head--;
  for (int i = head + 1; i < len; i++ )
    {
      queue[i] = 0;
    }
    return true;
}

template <typename T>
void Queue<T>::print_queue()
{
  for (int i = 0; i < len; i++)
  {
    std::cout <<  queue[i] << std::endl;
  }
}

int main()
{
  Queue <int> queue1(5);
  int counter = 0;
  while (counter++ != 5)
  {
    int temp;
    std::cin >> temp;
    queue1.push(temp);
  }
  queue1.print_queue();
  queue1.pop();
  queue1.pop();
  queue1.print_queue();
  return 0;
}

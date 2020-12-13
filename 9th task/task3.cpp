#include <iostream>
#include <deque>
using namespace std;

template <class T>

class Queue
{
private:
  deque<T> queue;
public:
  void push(const T  );
  void pop();
  T first();
  void print_queue();
};

template <class T>
void Queue<T>::push(const T value)
{
  queue.push_back(value);
}

template <class T>
void Queue<T>::pop()
{
  queue.pop_front();
}

template <class T>
T Queue<T>::first()
{
  return queue.front();
}

template <class T>
void Queue<T>::print_queue()
{
  for (int i = 0; i < queue.size(); i++)
    cout << queue[i] << endl;
}

template <>
class Queue<string>
{
private:
  deque<string> queue_str;
public:
  void push(const string &value)
  {
    string v = value;
  }

  void pop()
  {
    queue_str.pop_front();
  }

  string first()
  {
    string f = queue_str.front();
    return f;
  }

  void print_queue()
  {
    for (int i = 0; i < queue_str.size(); i++)
      cout << queue_str[i] << endl;
    }
};

int main()
{
  Queue<string> queue1;
  int counter = 0;
  while(counter++ != 4)
  {
    string temp;
    cin >> temp;
    queue1.push(temp);
  }
  queue1.print_queue();
  return 0; //
}

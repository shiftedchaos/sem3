#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  string path = "C:\\Users\\shiftedchaos\\Desktop\\input.txt.txt";
  ifstream fin;
  fin.open(path);

  if (!fin.is_open())
  {
    cout << "Error" << endl;
  }
  else
  {
    cout << "opened" << endl;

    //int 2;
    double arr[4];
    for (size_t i = 0; i < 4; ++i)
    {
      fin >> arr[i];
    }
    for (size_t i = 0; i < 4; i++)
    {
      std::cout << arr[i] << ' ';
    }
    double r, i;
    r = arr[0] + arr[2];
    i = arr[1] + arr[4];
    cout << endl << r << endl;
    cout << i << endl;

    }
  return 0;
}

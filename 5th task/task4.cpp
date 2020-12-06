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
  }

}

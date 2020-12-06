#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  string path = "input.txt";
  ifstream fin;
  fin.open(path);

    double arr[4];
    double r, i;
    for (size_t i = 0; i < 4; ++i)
    {
      fin >> arr[i];
    }

    r = arr[0] + arr[2];
    i = arr[1] + arr[3];

  ofstream fout;

  fout.open(path, ofstream::app);
    fout << "\n";
    fout << r << "\n";
    fout << i;

  fout.close();
  fin.close();

  return 0;
}

/*
example of input.txt Input

1.3 3.2
4.1 9.6

*/

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  string path = "C:\\Users\\shiftedchaos\\Desktop\\input.txt.txt";
  ifstream fin;
  fin.open(path);

    double arr[4];
    double r, i;
    for (size_t i = 0; i < 4; ++i)
    {
      fin >> arr[i];
    }
    for (size_t i = 0; i < 4; i++)
    {
      std::cout << arr[i] << ' ';
    }

    r = arr[0] + arr[2];
    i = arr[1] + arr[3];
    cout << endl << r << endl;
    cout << i << endl;

  ofstream fout;

  fout.open(path, ofstream::app);
    fout << "\n";
    fout << r << "\n";
    fout << i;

  fout.close();
  fin.close();

  return 0;
}

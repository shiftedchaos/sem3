#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double getRandom(double min, double max) {
    double RandZero = rand() / static_cast<double>(RAND_MAX);
    double RandInterval = RandZero * (max - min);
    double RandMinMax = RandInterval + min;
    return RandMinMax;
}
int main()
{
    double R;
    double pi;
    double n = 0, k = 0;
    double x, y;
    cin >> R;
    cin >> n;
    //x = new double[n];
    //y = new double[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        x = getRandom(-R, R);
        y = getRandom(-R, R);
        //cout << x << ' ' << y << "\n";
        if (x * x + y * y <= R * R)
            k++;
    }
    //cout.precision(4);
    cout << n << ' ' << k << endl;
    pi = 4 * k / n;
    cout << pi << endl;
}

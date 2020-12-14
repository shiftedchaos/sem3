#include<iostream>

constexpr double e(int x)
{
	double e = 1;
	int f = 1;
	for (int i=1; i <= x; ++i)
	{
		f = f * i;
		e = e + (1.0 / f);
	}
	return e;
}

int main()
{
	std::cout << e(10) << std::endl;
  return 0;
}

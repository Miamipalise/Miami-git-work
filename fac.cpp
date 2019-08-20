#include <iostream>

using namespace std;

int fac(int a)
{
	int fac = 1;

	for (int i = 1; i <= a;++i)
	{
		fac *= i;
	}

	return fac;
}

int main()
{
	int a, factor;

	cin >> a;
	factor = fac(a);

	cout << "Factorial " << a << " = " << factor << endl;

	return 0;
}

//VAR 6
#include <iostream>
using namespace std;
int main()
{
	float x, a = 0, b = 1;
	int n = 5;

	for (int m = 1; m < n; m += 1)
	{
		cout << "x = "; cin >> x; cout << endl;
		if (x > 0)
			a += x;
		else
			b = b * x;
	}
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
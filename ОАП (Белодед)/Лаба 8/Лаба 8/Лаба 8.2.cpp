//VAR 3.2
#include <iostream>
using namespace std;
int main()
{
	double a, b, e, x;
	for (int n = 0; n < 3; n++)
	{
		cout << "a = "; cin >> a; cout << endl;
		cout << "b = "; cin >> b; cout << endl;
		cout << "e = "; cin >> e; cout << endl;
		p2: x = (a + b) / 2;
		if (((pow(a, 3) + 2 * a - 1) * (pow(x, 3) + 2 * x - 1)) <= 0)
			b = x;
		else
			a = x;
		if (abs(a - b) > (2 * e))
			goto p2;
		else
			cout << "x = " << x << endl;
	}
}
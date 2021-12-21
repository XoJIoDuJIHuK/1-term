//VAR 3.1 trapersia
#include <iostream>
using namespace std;
int main()
{
	double a, b, n, h, x, sl, s2, i, S;
	for (int n = 0; n < 3; n++)
	{
		cout << "a = "; cin >> a; cout << endl;
		cout << "b = "; cin >> b; cout << endl;
		cout << "n = "; cin >> n; cout << endl;
		h = (b - a) / n; x = a; S = 0;
	p3: {S = S + h * ((1 + pow(x, 3)) + (1 + pow((x + h), 3)) / 2); x += h;}
		if (x <= (b - h))
			goto p3;
		else
			cout << "S = " << S << endl;
	}
}
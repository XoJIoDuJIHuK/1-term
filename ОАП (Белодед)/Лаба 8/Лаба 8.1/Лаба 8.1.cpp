//VAR 3.1 parabola
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
		h = (b - a) / 2 / n;
		x = a + 2 * h;
		sl = 0; s2 = 0; i = 1;
	p3: {s2 = s2 + (1 + pow(x, 3)); x = x + h; sl = sl + (1 + pow(x, 3)); i++; }
		if (i < n)
			goto p3;
		else
			S = (h / 3) * ((1 + pow(a, 3)) + 4 * (1 + pow((a + h), 3)) + 4 * sl + 2 * sl + (1 + pow(b, 3)));
		cout << "S = " << S << endl;
	}
}
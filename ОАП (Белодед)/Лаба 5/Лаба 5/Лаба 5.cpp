//VAR 9.1
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double s = 5.9, m = 6, f = 0.0012, c, y = 0, h = 0;
	for (int n = 1; n <= 3; n++)
	{
		cout << "c = "; cin >> c;
		y = (s + c) / log(f) / exp(-s);
		h = (y - m) / log(-y);
		cout << "y = "; cout << y << endl;
		cout << "h = "; cout << h << endl;
	}
}

#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, x1, x2, d;
	cout << ("������� a "); scanf_s("%fd", &a);
	cout << ("������� b "); scanf_s("%fd", &b);
	cout << ("������� c "); scanf_s("%fd", &c);
	d = pow(b, 2) - 4 * a * c;
	if (d < 0)
		cout << ("NET KORNEY");
	else
		x1 = (-b + sqrt(d)) / (2 * a);
	    x2 = (-b - sqrt(d)) / (2 * a);
		cout << ("x1 = "); cout << x1;
		cout << ("x2 = "); cout << x2;
}

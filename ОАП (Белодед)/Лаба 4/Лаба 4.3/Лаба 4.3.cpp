#include <iostream>
int main()
{
	using namespace std;
	double a, b, c, d, x1, x2;
	cout << "VVEDITE a "; cin >> a;
	cout << "VVEDITE b "; cin >> b;
	cout << "VVEDITE c "; cin >> c;
	d = pow(b, 2) - 4 * a * c;
	cout << d << endl;
	if (d < 0)
		cout << "NET KORNEY" << endl;
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1 = "; cout << x1 << endl;
		cout << "x2 = "; cout << x2;
	}
}
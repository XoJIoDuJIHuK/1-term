#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float x, y, z, mn, mx;
	cout << ("¬ведите x "); scanf_s("%f", &x);
	cout << ("¬ведите y "); scanf_s("%f", &y);
	cout << ("¬ведите z "); scanf_s("%f", &z);
	if ((x + y + z) < (x * y * z))
		mx = (x * y * z);
	else
		mx = (x + y + z);
	mn = x;
	if (mn > y) mn = y;
	if (mn > z) mn = z;
	cout << ("max(x + y + z, xyz) * min(x, y, z) = %f \n", mn * mx);
}

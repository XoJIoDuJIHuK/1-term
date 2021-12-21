#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float b, z, x = 4e-3, s = 1.1, j;
	cout << ("¬ведите j ") << endl;
	scanf_s("%f", &j);
	b = s + (5 * x + j);

	if (b < 1.5)
		z = sqrt(x + 0.3 * j) + b;
	else
		z = abs(x * j + b);

	cout << ("j=%f\t", j);
	cout << ("z=%f\n", z);
}

#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int A, B; int i, n = 0, p = 0, m = 0, q = 0;
	const unsigned int mask = 1 << 31;
	cout << "¬ведите целое число A" << endl;
	cin >> A;
	cout << "¬ведите целое число B" << endl;
	cin >> B;
	cout << "¬ведите целое число n" << endl;
	cin >> n;
	cout << "¬ведите целое число q" << endl;
	cin >> q;
	m = n;
	cout << "¬ведите целое число p" << endl;
	cin >> p;
	cout << "„исло A =  " << A << endl;
	cout << "„исло B =  " << B << endl;
	for (i = 1; i <= 32 - q - m; i++)
	{
			if (mask & B)
				printf("1");
			else
				printf("0");
			B <<= 1;
	}
	for (i = 33 - p - n; i <= 32 - p; i++)
	{
			if (mask & A)
				printf("0");
			else
				printf("1");
			A <<= 1;
			B <<= 1;
	}
	for (i = 33 - q; i <= 32; i++)
	{
			if (mask & B)
				printf("1");
			else
				printf("0");
			B <<= 1;
	}
	cout << " = B" << endl;
	for (i = 1; i <= 32; i++)
	{
		if ((32 - p >= i) and (i >= 32 - p - n + 1))
		{
			if (mask & A)
				printf("0");
			else
				printf("1");
			A <<= 1;
		}
		else
		{
			if (mask & A)
				printf("1");
			else
				printf("0");
			A <<= 1;
		}
	}
	cout << " = A" << endl;
}
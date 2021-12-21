#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int A; int i, n = 0;
	const unsigned int mask = 1 << 2;
	cout << "Введите целое число " << endl;
	cin >> A;
	cout << "Число =  " << A << endl;
	for (i = 3; i <= 13; i++)
	{
		if (mask ^ A)
		{
			n++;
			A >>= 1;
		}
		else
			A >>= 1;
	}
	cout << "n = " << n << endl;
}
//10110101 01010001
//46417
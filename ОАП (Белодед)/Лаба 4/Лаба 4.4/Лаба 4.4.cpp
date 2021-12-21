//Вариант 15
#include <iostream>
using namespace std;
int main()
{
	int A, B, C, D, par;
	par = 0;
	cout << "VVEDITE A"; cin >> A;
	cout << "VVEDITE B"; cin >> B;
	cout << "VVEDITE C"; cin >> C;
	cout << "VVEDITE D"; cin >> D;
	if (A % 2 == 0)
		par = 1;
	else if (B % 2 == 0)
		par = 1;
	else if (C % 2 == 0)
		par = 1;
	else if (D % 2 == 0)
		par = 1;
	if (par == 1)
		cout << "CHYOTNYE EST'";
	else
		cout << "CHYOTNYH NET";
}

#include <iomanip> //вариант 16
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
}
#include <iostream>

void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int t;
	cout << "������� t=";
	cin >> t;
	cout << "t=" << t << endl;
	cout << "��� ������ � ������" << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
}
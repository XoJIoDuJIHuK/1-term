#include <iomanip> //������� 16
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a, b, c;
	cout << "������� ���������� ������ �������� "; cin >> a;
	cout << "������� ���������� ������ ����� "; cin >> b;
	cout << "������� ���������� ������ ��������� "; cin >> c;
	cout << "�� ���������� "; cout << 50 * a + 100 * b + 200 * c; cout << " �����";
}
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int k;
	cout << ("�� ������ ������ ����������? (1-��, 2-���)");
	cin >> k;
	switch (k)
	{
	case 1: { puts("�����? (1- ������, 2-������, 3-����)");
		cin >> k;
		switch (k)
		{
		case 1: puts("�� �����"); break;
		case 2: puts("������� �����"); break;
		case 3: puts("������������ �����");
			break;
		}
		break;
	}
	case 2: cout << ("������� ������ ������"); break;
	default: cout << ("������������ �������"); break;
	}
	return 0;
}

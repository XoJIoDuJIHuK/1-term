#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	a: puts("�� ������ ������ ����������? (1-��, 2-���)");
	std::cin >> k;
	switch (k)
	{
	case 1: { puts("�����? (1- ������, 2-������, 3-����)");
		std::cin >> k;
		switch (k)
		{
		case 1: puts("�� �����"); break;
		case 2: puts("������� �����"); break;
		case 3: goto a;
			break;
		}
		break;
	}
	case 2: puts("������� ������ ������"); break;
	default: puts("������������ �������"); break;
	}
	return 0;
}
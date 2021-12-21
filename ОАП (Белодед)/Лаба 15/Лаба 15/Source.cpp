#include <iostream>
using namespace std;

int zad_1(int n, int m)
{
	srand(time(0));
	int *A;
	A = new int [n * m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			*(A + i * n + j) = rand() %19 - 9;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << *(A + i * n + j) << " ";
			if (j == m - 1)
				cout << "\n";
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if ((i % 2 == 1) && (*(A + i * n + j) < 0))
			{
				*(A + i * n + j) *= -1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << *(A + i * n + j) << " ";
			if (j == m - 1)
				cout << "\n";
		}
	}
	return(0);
}

int zad_2()
{
	setlocale(LC_ALL, "Rus");
	char stroka[20];
	cout << "Enter line" << endl;
	cin >> stroka;
	
	for (int i = 0; i < 19; i++)
	{
		if (('A' <= stroka[i] <= 'z') or (stroka[i] == ' ') or (stroka[i] == '.'))
		{
			if ('A' <= stroka[i] <= 'Z')
			{
				stroka[i] = (char)((int)stroka[i] + 0x20);
			}
		}
		else
		{
			cout << "invalid input\nда и сам ты инвалид\n";
			break;
		}
	}

	for (int i = 0; i < 19; i++)
	{
		if (stroka[i] == ' ' or stroka[i] == '.')
		{
			stroka[i + 1] = (char)((int)stroka[i] - 0x20);
		}
	}

	for (int i = 0; i < 19; i++)
	{
		cout << stroka[i];
	}
	cout << endl;
	return(0);
}

void main()
{
	setlocale(LC_ALL, "Rus");
	int a, m, n;
	printf("1 - задание 1, 2 - задание 2\n");
	cin >> a;
	switch (a)
	{
		case 1:
		{
			printf("Введите числа n и m\n");
			cin >> n; cin >> m;
			zad_1(n, m);
			break;
		}
		case 2:
		{
			zad_2();
			break;
		}
		default:
		{
			cout << "Миша, всё чухня, давай по-новой" << endl;
			break;
		}
	}
}
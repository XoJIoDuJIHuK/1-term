#include <cstring>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char stroka[20], stroka_1[10] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	cout << "¬ведите строку 1: " << '\n';
	cin.getline(stroka, 20);
	cout << "¬ведите строку 2: ";
	cin.getline(stroka_1, 10); cout << endl;
	int n, k;
	cout << "¬ведите n <= 10 "; cin >> n; cout << endl;
	cout << "¬ведите k <= 20 "; cin >> k; cout << endl;
	char stroka_2[30] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
	for (int i = 0; i < n; i++)
	{
		stroka_2[i + k - 1] = stroka_1[i];
	}
	for (int i = 0; i < 30; i++)
	{
		if (i < k - 1)
		{
			stroka_2[i] = stroka[i];
		}
		else if (k + n - 1 <= i)
		{
			stroka_2[i] = stroka[i - n];
		}
	}
	cout << endl;
	for (int i = 0; i < 30; i++)
	{
		cout << stroka_2[i];
	}
}
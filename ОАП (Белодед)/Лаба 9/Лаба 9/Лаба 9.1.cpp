//var 3
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 200;
	int mas[N], mas2[N] = {}, mas3[N] = {}, rmn = 0, rmx = 99, size, i, k, s, m;
	cout << "size(mas)="; cin >> size; cout << endl;
	s = size;
	cout << "mas: " << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		mas[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		//cout << mas[i] << endl;
	}
	for (i = 0, k = 0; k < s; i++)
	{
		if (mas[i] % 7 == 0)
		{
			mas[i] = 0;
			s--;
		}
		else
		{
			mas2[k] = mas[i];
			cout << mas2[k] << endl;
			k++;
		}
	}
	{
		if (size % 2 == 0) // m - количество добавляемых элементов
			m = size / 2;
		else
			m = size / 2 + 1;
	}
	for (i = 0, k = 1; i < size; i++)
	{
		if (i % 2 == 0)
		{
			k = i + 1;
			mas3[k + k / 2] = mas2[i];
			mas3[k + k / 2 + 1] = 4;
		}
		else
			k = i + 1;
			mas3[k + k / 2] = mas2[i];
	}
	for (i = 1; i <= size + m; i++)
	{
		cout << i; cout << mas3[i] << endl;
	}
}

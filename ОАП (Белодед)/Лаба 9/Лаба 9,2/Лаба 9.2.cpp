//var 3
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 200;
	int mas[N], mas2[N] = {}, mas3[N] = {}, rmn = -99, rmx = 99, size, i, k, m, s = 0;
	cout << "size(mas)="; cin >> size; cout << endl;
	cout << "mas: " << endl;
	srand((unsigned)time(NULL));
	for (i = 0, k = 0, m = 0; i < size; i++)
	{
		mas[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		printf("mas[%d] = ", i); cout << mas[i] << endl;
		if (mas[i] < 0)
		{
			mas2[k] = mas[i];
			k++;
		}
		else
		{
			mas3[m] = mas[i];
			m++;
		}
	}
	int size2 = k, size3 = m;
	for (i = 0, k = 0; k < size2; k++)
	{
		mas[i] = mas2[k];
		i++;
		s = i;
	}
	for (s, m = 0; m < size3; s++)
	{
		mas[s] = mas3[m];
		m++;
	}
	for (i = 0; i < size; i++)
	{
		printf("mas[%d] = %d\n", i, mas[i]);
	}
}
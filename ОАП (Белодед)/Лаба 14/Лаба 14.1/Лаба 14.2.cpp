#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int size, *A, col = 100;
	cout << "Enter size ";
	cin >> size;
	srand(time(0));
	A = new int [size * size];    //выделение динам.памяти*
	for (int i = 0; i < size * size; i++)
	{
		*(A + i) = rand() %9-9;
	}
	for (int i = 0; i < size; i++)
	{
		if ((*(A + i) > 0) and (*(A + size * 1 + i) > 0) and (*(A + size * 2 + i) > 0))
		{
			col = i;
			break;
		}
	}
	if (col == 100)
		exit;
	cout << "column = " << col + 1 << endl;
	if (col == 0)
		col = size - 1;
	for (int i = 0; i < size; i++)
	{
		int cell = *(A + col + size * i);
		cell *= (-1);
		*(A + col + size * i) = cell;
	}
	delete[] A;

}
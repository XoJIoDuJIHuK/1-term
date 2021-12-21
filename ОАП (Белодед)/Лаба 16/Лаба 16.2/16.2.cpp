#include <iostream>
using namespace std;
void mul(int *p_mat_1, int *p_mat_2, int *p_mat_3)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			*(p_mat_3 + i * 3 + j) = *(p_mat_1 + i * 3) * *(p_mat_2 + j) + *(p_mat_1 + i * 3 + 1) * *(p_mat_2 + 3 + j) + *(p_mat_1 + i * 3 + 2) * *(p_mat_2 + 6 + j);
		}
	}
}

int main()
{
	srand(time(0));
	int mat_1[3][3], mat_2[3][3], mat_3[3][3];
	int* p_mat_1 = &mat_1[0][0];
	int* p_mat_2 = &mat_2[0][0];
	int* p_mat_3 = &mat_3[0][0];
	for (int i = 0; i < 9; i++)
	{
		* ( &mat_1[0][0] + i ) = rand() % 9 - 0;
		* ( &mat_2[0][0] + i ) = rand() % 9 - 0;
	}
	cout << "matrix 1:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mat_1[i][j] << "  ";
			if (j == 2)
				cout << endl;
		}
	}
	cout << "matrix 2:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mat_2[i][j] << "  ";
			if (j == 2)
				cout << endl;
		}
	}
	mul(p_mat_1, p_mat_2, p_mat_3);
	cout << "matrix 3:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mat_3[i][j] << "  ";
			if (j == 2)
				cout << endl;
		}
	}
	return(0);
}
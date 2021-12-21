#include <iostream> 
void main()
{
	using namespace std;
	int mas[4][4], k, count = 0;
	cout << "Enter k "; cin >> k; cout << endl;
	for (int m = 0; m < 4; m++)
	{
		for (int n = 0; n < 4; n++)
		{
			cout << "Enter mas[ " << m << ", " << n << " ]";
			cin >> mas[m][n]; cout << endl;
			if (mas[k - 1][n] == 0)
				count--;
			else
				count++;
		}
	}
	if (count == 4)
		cout << "1" << endl;
	else if (count == -4)
		cout << "0" << endl;
	else
		cout << "Error" << endl;
}
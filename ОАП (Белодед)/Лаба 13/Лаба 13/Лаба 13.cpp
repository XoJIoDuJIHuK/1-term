#include <iostream> 
void main()
{
	using namespace std;
	int mas[5][5], max[3] = { 0, 0, 0 };
	for (int m = 0; m < 5; m++)
	{
		for (int n = 0; n < 5; n++)
		{
			cout << "Enter mas[ " << m << ", " << n << " ]";
			cin >> mas[m][n]; cout << endl;
			if (mas[m][n] > max[0])
			{
				max[0] = mas[m][n];
				max[1] = m;
				max[2] = n;
			}
		}
	}
	cout << "Max number is " << max[0] << " in [ " << max[1] << ", " << max[2] << " ]" << endl;
}
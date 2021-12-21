#include <iostream>
using namespace std;
void main()
{
	char line[100];
	int count_1 = 0, count_2 = 0, *c_2 = &count_2; //count_1 считает кол-во элементов между пробелами, count_2 считает кол-во групп по 5 элементов
	cout << "Enter line "; cin.getline(line, 100); cout << endl;
	for (int i = 0; i < 100; i++)
	{
		if ((line[i] == ' ') or (i == (strlen(line))))
		{
			if (count_1 == 0)
				continue;
			else if (count_1 == 5)
			{
				count_2 += 1;
				count_1 = 0;
			}
			else
				count_1 = 0;
		}
		else if (line[i] == '1' or line[i] == '0')
		{
			count_1 += 1;
		}
		else
			break;
	}
	cout << count_2 << endl;
}


//if (line[i] == ('1' or '0'))
//count_1++;
//else
//{
//	break;
//	cout << "Error" << endl;
//}
//if ((line[i + 1] != ('1' or '0')) or (i == 99))
//{
//	if (count_1 != 5)
//	{
//		count_1 = 0;
//	}
//	else
//	{
//		*c_2 = *c_2 + 1;
//		count_1 = 0;
//	}
//}
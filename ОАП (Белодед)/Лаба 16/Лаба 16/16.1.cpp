#include <iostream>
using namespace std;
void main()
{
	srand(time(0));
	int mas[20], min_element = 0, min_el_index = 9, max_element = 0, max_el_index = 0, sum = 0;
	for (int i = 0; i < 20; i++)
	{
		mas[i] = rand() % 9 - 0;
		cout << mas[i];
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		if (mas[i] < min_element)
		{
			min_element = mas[i];
			min_el_index = i;
		}
		if (mas[i] > max_element)
		{
			max_element = mas[i];
			max_el_index = i;
		}
	}
	if (min_el_index > max_el_index)
	{
		for (int i = max_el_index + 1; i < min_el_index; i++)
			sum += mas[i];
	}
	else
		for (int i = min_el_index + 1; i < max_el_index; i++)
			sum += mas[i];
	cout << "max element: " << max_element << endl;
	cout << "min element: " << min_element << endl;
	cout << "max element index: " << max_el_index << endl;
	cout << "min element index: " << min_el_index << endl;
	cout << "sum: " << sum << endl;
}
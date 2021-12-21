#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int k;
	cout << ("Вы хотите купить автомобиль? (1-да, 2-нет)");
	cin >> k;
	switch (k)
	{
	case 1: { puts("Какой? (1- Майбах, 2-Тойота, 3-Лада)");
		cin >> k;
		switch (k)
		{
		case 1: puts("Не слабо"); break;
		case 2: puts("Хороший выбор"); break;
		case 3: puts("Сомнительный выбор");
			break;
		}
		break;
	}
	case 2: cout << ("Полезно ходить пешком"); break;
	default: cout << ("Некорректный вариант"); break;
	}
	return 0;
}

#include <iomanip> //вариант 16
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a, b, c;
	cout << "Введите количество сбитых самолётов "; cin >> a;
	cout << "Введите количество сбитых ракет "; cin >> b;
	cout << "Введите количество сбитых спутников "; cin >> c;
	cout << "Вы заработали "; cout << 50 * a + 100 * b + 200 * c; cout << " очков";
}
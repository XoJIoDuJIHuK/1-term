#include <stdio.h>
#include <conio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("\n\t Privet\n");
	printf("\n Точило Олег с ФИТ-1-4-1\r");
	printf("\n... Press key");
	_getch();
}

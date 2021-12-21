#include <windows.h>
#include <stdio.h>
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	puts("Как вас зовут? ");
	gets_s(name);
	printf("Добрый день, %s\n", name);
}
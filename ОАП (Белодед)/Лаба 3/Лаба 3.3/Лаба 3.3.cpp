#include <windows.h>
#include <stdio.h>
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	puts("��� ��� �����? ");
	gets_s(name);
	printf("������ ����, %s\n", name);
}
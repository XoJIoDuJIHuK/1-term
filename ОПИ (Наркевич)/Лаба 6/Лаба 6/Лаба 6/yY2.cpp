#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_yY2()
{
	using namespace std ;
	setlocale ( LC_ALL , "Russian" ) ;

	char �_Y , �_y ;
	cout << "������� �������� ����� �������� �������� " ; cin >> �_y ; cout << endl ;
	cout << "������� ��������� ����� �������� �������� " ; cin >> �_Y ; cout << endl ;

	int kod_1 = (int)(�_Y ) ;
	int kod_2 = ( int )( �_y ) ;

	cout << kod_2 - kod_1 << endl ;
}
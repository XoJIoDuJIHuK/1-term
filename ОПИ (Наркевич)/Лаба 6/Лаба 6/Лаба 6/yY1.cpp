#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_yY1()
{
	using namespace std ;
	setlocale( LC_ALL , "Russian" ) ;

	char �_Y , �_y ;
	cout << "������� ������� ��������, � ����� ��������� ������� ����� " ; cin >> �_y ; cin >> �_Y ; cout << endl ;

	int kod_1 = ( int )( �_Y ) ;
	int kod_2 = ( int )( �_y ) ;

	cout << kod_2 - kod_1 << endl ;
}
#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_xX2()
{
	using namespace std ;
	setlocale( LC_ALL , "Russian" ) ;

	char �_X , �_x ;
	cout << "������� �������� ����� ���������� �������� " ; cin >> �_x ; cout << endl ;
	cout << "������� ��������� ����� ���������� �������� " ; cin >> �_X ; cout << endl ;

	int kod_1 = ( int )( �_X ) ;
	int kod_2 = ( int )( �_x ) ;

	cout << kod_2 - kod_1 << endl ;
}
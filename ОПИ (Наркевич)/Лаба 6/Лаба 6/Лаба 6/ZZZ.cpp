#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_ZZZ()
{
	using namespace std ;
	setlocale ( LC_ALL , "Russian" ) ;

	char �_Z = '0' ;
	cout << "������� ����� " ; cin >> �_Z ; cout << endl ;

	int kod_1 = ( int )( �_Z ) ;

	cout << kod_1 << endl ;
}
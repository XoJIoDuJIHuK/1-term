#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_yY1()
{
	using namespace std ;
	setlocale( LC_ALL , "Russian" ) ;

	char с_Y , с_y ;
	cout << "Введите сначала строчную, а затем заглавную русские буквы " ; cin >> с_y ; cin >> с_Y ; cout << endl ;

	int kod_1 = ( int )( с_Y ) ;
	int kod_2 = ( int )( с_y ) ;

	cout << kod_2 - kod_1 << endl ;
}
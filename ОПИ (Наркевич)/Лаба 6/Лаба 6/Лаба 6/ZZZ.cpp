#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_ZZZ()
{
	using namespace std ;
	setlocale ( LC_ALL , "Russian" ) ;

	char с_Z = '0' ;
	cout << "Введите цифру " ; cin >> с_Z ; cout << endl ;

	int kod_1 = ( int )( с_Z ) ;

	cout << kod_1 << endl ;
}
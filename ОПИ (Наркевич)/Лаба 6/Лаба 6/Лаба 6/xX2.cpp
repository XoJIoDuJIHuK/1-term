#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_xX2()
{
	using namespace std ;
	setlocale( LC_ALL , "Russian" ) ;

	char с_X , с_x ;
	cout << "¬ведите строчную букву латинского алфавита " ; cin >> с_x ; cout << endl ;
	cout << "¬ведите прописную букву латинского алфавита " ; cin >> с_X ; cout << endl ;

	int kod_1 = ( int )( с_X ) ;
	int kod_2 = ( int )( с_x ) ;

	cout << kod_2 - kod_1 << endl ;
}
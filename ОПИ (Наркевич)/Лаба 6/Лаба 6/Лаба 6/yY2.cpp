#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_yY2()
{
	using namespace std ;
	setlocale ( LC_ALL , "Russian" ) ;

	char с_Y , с_y ;
	cout << "¬ведите строчную букву русского алфавита " ; cin >> с_y ; cout << endl ;
	cout << "¬ведите прописную букву русского алфавита " ; cin >> с_Y ; cout << endl ;

	int kod_1 = (int)(с_Y ) ;
	int kod_2 = ( int )( с_y ) ;

	cout << kod_2 - kod_1 << endl ;
}
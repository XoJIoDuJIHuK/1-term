#include <iostream>
#include <stdio.h>
#include <conio.h>

void output_xX1()
{
	using namespace std;
	setlocale( LC_ALL , "Russian" ) ;

	char с_X, с_x;
	cout << "Введите сначала строчную, а затем заглавную латинские буквы " ; cin >> с_x ; cin >> с_X ; cout << endl;

	int kod_1 = ( int )( с_X ) ;
	int kod_2 = ( int )( с_x ) ;

	cout << kod_2 - kod_1 << endl ;
}
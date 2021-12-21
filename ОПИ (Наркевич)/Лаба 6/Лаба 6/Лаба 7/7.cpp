#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian") ;
	int kod_1 = 0 , kod_2 , a , b ;
	char LAT , lat , RUS , rus , num ;
	{
		cout << "1 - последовательный ввод двух символов, 2 - по одному " ; cin >> b ; cout << endl ;
	}
	{
		cout << "1-rus 2-lat 3-num 4-break " ; cin >> a ; cout << endl ;
	}
	switch ( b )
	{
		case 1:
		{
			switch ( a )
			{
			case 1:
			{
				cout << "¬ведите сначала строчную, а затем заглавную русские буквы " ; cin >> rus ; cin >> RUS ; cout << endl ;
				kod_1 = ( int )( RUS ) ;
				kod_2 = ( int )( rus ) ;
				cout << kod_2 - kod_1 << endl ;
				break ;
			}
			case 2:
			{
				cout << "¬ведите сначала строчную, а затем заглавную латинские буквы " ; cin >> lat ; cin >> LAT ; cout << endl ;
				kod_1 = ( int )( LAT ) ;
				kod_2 = ( int )( lat ) ;
				cout << kod_2 - kod_1 << endl ;
				break ;
			}
			case 3:
			{
				cout << "¬ведите цифру" ; cin >> num ; cout << endl ;
				kod_1 = ( int )( num ) ;
				cout << kod_1 << endl ;
				break ;
			}
			case 4:
			{
				break;
			}
			}
			break ;
		}
		case 2:
		{
			switch ( a )
			{
			case 1:
			{
				cout << "¬ведите строчную букву русского алфавита " ; cin >> rus ; cout << endl ;
				cout << "¬ведите прописную букву русского алфавита " ; cin >> RUS ; cout << endl ;
				kod_1 = ( int )( RUS ) ;
				kod_2 = ( int )( rus ) ;
				cout << kod_2 - kod_1 << endl ;
				break ;
			}
			case 2:
			{
				cout << "¬ведите строчную букву латинского алфавита " ; cin >> lat ; cout << endl ;
				cout << "¬ведите прописную букву латинского алфавита " ; cin >> LAT ; cout << endl ;
				kod_1 = ( int )( LAT ) ;
				kod_2 = ( int )( lat ) ;
				cout << kod_2 - kod_1 << endl ;
				break ;
			}
			case 3:
			{
				cout << "¬ведите цифру " ; cin >> num ; cout << endl ;
				kod_1 = ( int )( num ) ;
				cout << kod_1 << endl ;
				break ;
			}
			case 4:
			{
				break; 
			}
			}
			break ;
		}
	}
}

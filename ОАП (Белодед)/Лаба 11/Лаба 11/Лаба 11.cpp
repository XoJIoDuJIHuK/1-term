#include <iostream>

using namespace std;

void main()
{
	setlocale( LC_CTYPE , "Russian" ) ;

	int start_nums [ 10 ] , end_nums [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } , N , m , k = 0, i = 0;
	cout << "¬ведите целое число N " ;
	cin >> N ; cout << endl ;
	cout << "¬ведите целое число m " ;
	cin >> m ; cout << endl ;

	for ( i ; i < 10 ; i++ )
	{
		start_nums [ i ] = N % 10 ;
		N = N / 10 ;
	}

	for ( i = 0 , k ; i < 10 ; i++ )
	{
		if ( start_nums [ i ] % m == 0 )
		{
			end_nums [ k ] = start_nums [ i ] ;
			k++ ;
		}
	}

	cout << "„исло, составленное из цифр, кратных m = " ;
	for ( i = 10 ; i >= 0 ; i-- )
	{
		if ( end_nums [ i ] > 0 )
			cout << end_nums [ i ] ;
	}
	cout << endl ;
}

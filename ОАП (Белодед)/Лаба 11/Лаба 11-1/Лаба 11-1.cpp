#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian") ;
	int A [ 10 ] , B [ 10 ] , C [ 10 ] = { 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 } , i = 0 , max = 0 ;
	cout << "¬ведите 10 целых чисел " ;
	for (i ; i < 10 ; i++ )
	{
		cin >> A [ i ] ;
	}
	cout << endl ;
	cout << "¬ведите 10 целых чисел " ;
	for ( i = 0 ; i < 10 ; i++ )
	{
		cin >> B [ i ] ;
	}
	cout << endl ;
	for ( i = 0 ; i < 10 ; i++ )
	{
		for ( int k = 0 ; k < 10 ; k++ )
			if (A [ i ] == B [ k ] )
			{
				C [ i ] = 0 ;
				break ;
			}
		continue ;
	}
	max = A [ 0 ] ;
	for ( i = 0 ; i < 10 ; i++ )
	{
		if ( ( A [ i ] > max ) and ( C [ i ] == 2 ) )
			max = A [ i ] ;
	}
	cout << max << endl ;
}
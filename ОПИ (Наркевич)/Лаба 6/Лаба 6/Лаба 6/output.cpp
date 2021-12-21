#include <stdio.h>
#include <conio.h>
#include <iostream>

#include "output.h"
#include "input.h"

void output()
{
	using namespace std ;

	int kod_1 = 0 , kod_2 = 0 , a , b ;

	cout << "1 - последовательный ввод двух символов, 2 - по одному " ; cin >> b ; cout << endl ;
	cout << "1-rus 2-lat 3-num 4-break " ; cin >> a ; cout << endl ;

	switch ( b )
	{
	case 1:
	  {
		switch ( a )
		{
		  case 1:
		  {
			  output_yY1() ;
			  break;
	  	  }

		  case 2:
		  {
			  output_xX1() ;
			break ;
	      }

		  case 3:
		  {
			  output_ZZZ() ;
			break ;
		  }

		  case 4:
			break ;

			default: 
		  {
			cout << "Error" << endl ;
			break ;
	 	  }
		}
		break;
	  }

	case 2:
	  {
		switch ( a )
		{
		  case 1:
		  {
			  output_yY2() ;
			break ;
		  }

		  case 2:
		  {
			  output_xX2() ;
			break ;
		  }

		  case 3:
		  {
			  output_ZZZ() ;
			break ;
		  }

		  case 4:
			break ;

		  default: 
		  {
			cout << "Error" << endl ;
			break ;
		  }
		}
		break;
	  }
	default:
	{
		cout << "Error" << endl ;
		break ;
	}
	}
}
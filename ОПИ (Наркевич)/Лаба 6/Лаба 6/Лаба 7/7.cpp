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
		cout << "1 - ���������������� ���� ���� ��������, 2 - �� ������ " ; cin >> b ; cout << endl ;
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
				cout << "������� ������� ��������, � ����� ��������� ������� ����� " ; cin >> rus ; cin >> RUS ; cout << endl ;
				kod_1 = ( int )( RUS ) ;
				kod_2 = ( int )( rus ) ;
				cout << kod_2 - kod_1 << endl ;
				break ;
			}
			case 2:
			{
				cout << "������� ������� ��������, � ����� ��������� ��������� ����� " ; cin >> lat ; cin >> LAT ; cout << endl ;
				kod_1 = ( int )( LAT ) ;
				kod_2 = ( int )( lat ) ;
				cout << kod_2 - kod_1 << endl ;
				break ;
			}
			case 3:
			{
				cout << "������� �����" ; cin >> num ; cout << endl ;
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
				cout << "������� �������� ����� �������� �������� " ; cin >> rus ; cout << endl ;
				cout << "������� ��������� ����� �������� �������� " ; cin >> RUS ; cout << endl ;
				kod_1 = ( int )( RUS ) ;
				kod_2 = ( int )( rus ) ;
				cout << kod_2 - kod_1 << endl ;
				break ;
			}
			case 2:
			{
				cout << "������� �������� ����� ���������� �������� " ; cin >> lat ; cout << endl ;
				cout << "������� ��������� ����� ���������� �������� " ; cin >> LAT ; cout << endl ;
				kod_1 = ( int )( LAT ) ;
				kod_2 = ( int )( lat ) ;
				cout << kod_2 - kod_1 << endl ;
				break ;
			}
			case 3:
			{
				cout << "������� ����� " ; cin >> num ; cout << endl ;
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

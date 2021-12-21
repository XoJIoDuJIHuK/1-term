//VAR 9.3
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
	double m = 6, f = 0.0012, s, c;
	float y = 0, h = 0;
	for (int n = 1; n <= 3; n++)
	{		
		cout << "c = "; cin >> c; cout << endl;
		for (int b = 1; b <= 3; b++)
		{
			cout << "s = "; cin >> s; cout << endl;
			y = (s + c) / log(f) / exp(-s);
			h = (y - m) / log(-y);
			cout << "y = "; cout << y << endl;
			cout << "h = "; cout << h << endl;
	    }
	}
}

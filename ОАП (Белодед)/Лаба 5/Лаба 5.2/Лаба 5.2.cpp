//VAR 9.2
#include <iostream>
using namespace std;
int main()
{
	float s = 5.9, m = 6, f = 0.0012;
	float c = 0.0;
	double y = 0.0, h = 0.0;
	while (c < 0.9)
	{
		y = (s + c) / log(f) / exp(-s);
		h = (y - m) / log(-y);
		cout << "y = " << y << endl;
		cout << "h = " << h << endl;
		c += 0.1;
	}
	cout << s;
}
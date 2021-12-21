//Var 16
#include<iostream>
using namespace std;
void main()
{
	float t = 1.5, x = 1.9, z = 0;
	while (t <= 2)
		{
		cout << "t = " << t << endl;
		if (t > x)
			z = pow(sin(x), 2);
		else if (t < x)
			z = 4 * (t + x);
		else
			z = 1 - exp(x - 2);
		cout << "z = " << z << endl;
		t += 0.1;
		}
}
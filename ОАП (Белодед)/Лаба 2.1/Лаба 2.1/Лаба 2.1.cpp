#include <iostream>

void main()
{
	double y, r = 0, a = 1.75, b = 4.5 * pow(10, -4);
	y = a * exp(-2 * b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);
	printf(" % f" "y=", y);
	std::cout << "r=" << r;
}
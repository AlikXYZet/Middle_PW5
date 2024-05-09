#include <cmath>
#include <iostream>

double mySqrt(double a)
{
	if (a < 0)
		throw "Can not take sqrt of negative number";

	return sqrt(a);
}

int main()
{
	std::cout << "Enter a number: ";
	double a;
	std::cin >> a;

	std::cout << "The sqrt of " << a << " is " << mySqrt(a) << '\n';

	return 0;
};
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

	try
	{
		double d = mySqrt(a);
		std::cout << "The sqrt of " << a << " is " << d << '\n';
	}
	catch (const char* exception)
	{
		std::cerr << "Error: " << exception << std::endl;
	}

	return 0;
};
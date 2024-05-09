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
		std::cout << "The sqrt of " << a << " is " << mySqrt(a) << '\n';
	}
	catch (double)
	{
		std::cerr << "Excrption caught in catch double" << '\n';
	}
	catch (...)
	{
		std::cerr << "Excrption caught in catch all" << '\n';
	}

	return 0;
};
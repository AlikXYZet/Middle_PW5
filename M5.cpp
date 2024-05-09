#include <iostream>
#include <string>

int main()
{
	try
	{
		throw - 1;
	}
	catch (int a)
	{
		std::cerr << "We caught an int exception with value: " << a << '\n';
	}
	catch (double)
	{
		std::cerr << "We caught an exception of type double" << '\n';
	}
	catch (const std::string& str)
	{
		std::cerr << "We caught an exception of type std::string" << '\n';
	}

	std::cout << "Continuing our way!\n";

	return 0;
};
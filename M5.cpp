#include <iostream>
#include <string>

int main()
{
	try
	{
		try
		{
			throw - 1;
		}
		catch (const std::string& str)
		{
			std::cerr << "We caught an exception of type std::string" << '\n';
		}
	}
	catch (int a)
	{
		std::cerr << "We caught an int exception with value: " << a << '\n';
	}

	std::cout << "Continuing our way!\n";

	return 0;
};
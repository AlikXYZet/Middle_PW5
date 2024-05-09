#include <iostream>
#include <exception>
#include <string>

int main()
{
	try
	{
		throw std::runtime_error("Bad things happened");
	}
	catch (std::exception& exception)
	{
		std::cerr << "Standart exception: " << exception.what() << '\n';
	}

	return 0;
};
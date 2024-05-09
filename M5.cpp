#include <iostream>
#include <exception>
#include <string>

int main()
{
	try
	{
		std::string s;
		s.reserve(-1);
	}
	catch (std::exception& exception)
	{
		std::cerr << "Standart exception: " << exception.what() << '\n';
	}

	return 0;
};
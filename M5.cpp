#include <fstream>
#include <iostream>

int findFirstChar(const char* string, char ch)
{
	for (size_t i = 0; i < strlen(string); i++)
		if (string[i] == ch)
			return i;

	return -1;
}

double divide(int a, int b)
{
	return static_cast<double>(a) / b;
}

double divide(int a, int b, bool& success)
{
	if (b == 0)
	{
		success = false;
		return 0.0;
	}

	success = true;
	return static_cast<double>(a) / b;
}
int main()
{
	bool success;
	double result = divide(7, 4, success);

	if (!success)
		std::cerr << "" << std::endl;
	else
		std::cerr << "" << result << '\n';
};

{
	std::ifstream setupIni("setup.ini");

	if (!setupIni)
		return ERROR_OPENING_FILE;

	if (!readIntegerFromFile(setupIni, m_firstParameter))
		return ERROR_READING_VALUE;

	if (!readDoubleFromFile(setupIni, m_secondParameter))
		return ERROR_READING_VALUE;

	if (!readFloatFromFile(setupIni, m_thirdParameter))
		return ERROR_READING_VALUE;
}
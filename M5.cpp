#include <iostream>
#include <exception>
#include <string>

class Fraction
{
private:
	int numerator, denominator;
public:
	Fraction(int a, int b)
		: numerator(a), denominator(b)
	{
		if (denominator == 0)
			throw std::runtime_error("Attempt to divide by zero!");
		//numerator = a;
		//denominator = b;
	}

	friend std::ostream& operator<<(std::ostream& out, const Fraction& f)
	{
		out << static_cast<double>(f.numerator) / f.denominator;;
		return out;
	}
};

int main()
{
	int inA, inB;
	std::cout << "Enter the numerator and denominator numbers." << '\n';
	std::cout << "Numerator: ";
	std::cin >> inA;
	std::cout << "Denominator: ";
	std::cin >> inB;
	std::cout << '\n';

	try
	{
		Fraction fraction(inA, inB);
		std::cout << "Calculated fraction: " << fraction << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cerr << "Error: " << exception.what() << '\n';
	}

	return 0;
};
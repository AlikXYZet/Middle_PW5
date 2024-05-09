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
		// ���������� ����� ���� � �������� ��������
		if (denominator == 0)
			throw std::runtime_error("Attempt to divide by zero!");
	}

	// ���������� ������ ������
	friend std::ostream& operator<<(std::ostream& out, const Fraction& f)
	{
		out << static_cast<double>(f.numerator) / f.denominator;
		return out;
	}
};

int main()
{
	int inA, inB;

	std::cout << "Enter two integers to calculate division" << '\n';

	try
	{
		// ������� ���������� �������� ����������
		{
			// ���������� �������� �������� ������
			char checkA, checkB;
			// ���������� ����� �������� "whitespace" (�������, ����, ������� ����� ������)
			bool bCurrentSkipws = (std::cin.flags() & std::ios_base::skipws);

			// ��� ����, ���� ���������� ��� ����
			if (bCurrentSkipws)
				std::cin.unsetf(std::ios_base::skipws);

			// ���� inA
			std::cout << "Numerator: ";
			std::cin >> inA >> checkA;

			// �������� ����������� ����� inA
			if (checkA != '\n')
				throw std::exception("Invalid Numerator data");

			// ���� inB
			std::cout << "Denominator: ";
			std::cin >> inB >> checkB;

			// �������� ����������� ����� inB
			if (checkB != '\n')
				throw std::exception("Invalid Denominator data");

			// ���� ����, ���� ���������� ��� ����
			if (bCurrentSkipws)
				std::cin.setf(std::ios_base::skipws);
		}

		Fraction fraction(inA, inB);
		std::cout << "\nCalculated fraction: " << fraction << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cerr << "\nError: " << exception.what() << '\n';
	}

	return 0;
};
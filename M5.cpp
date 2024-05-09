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
		// Исключение ввода нуля в качестве делителя
		if (denominator == 0)
			throw std::runtime_error("Attempt to divide by zero!");
	}

	// Перегрузка вывода данных
	friend std::ostream& operator<<(std::ostream& out, const Fraction& f)
	{
		out << static_cast<double>(f.numerator) / f.denominator;
		return out;
	}
};

int main()
{
	int inA, inB;

	std::cout << "Enter two integers to calculate division." << '\n';

	try
	{
		// Переменные проверки вводимых данных
		char checkA, checkB;
		// Пропуск "whitespace" (пробелы, табы, символы новой строки)
		std::cin.unsetf(std::ios_base::skipws);

		// Ввод inA
		std::cout << "Numerator: ";
		std::cin >> inA >> checkA;

		// Проверка корректного ввода inA
		if (checkA != '\n')
			throw std::exception("Invalid Numerator data");

		// Ввод inB
		std::cout << "Denominator: ";
		std::cin >> inB >> checkB;

		// Проверка корректного ввода inB
		if (checkB != '\n')
			throw std::exception("Invalid Denominator data");

		Fraction fraction(inA, inB);
		std::cout << "\nCalculated fraction: " << fraction << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cerr << "\nError: " << exception.what() << '\n';
	}

	return 0;
};
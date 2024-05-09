#include <iostream>

class A
{
private:
	int m_x;

public:
	A(int x) : m_x(x)
	{
		if (x <= 0)
			throw 1;
	}
};

class B : public A
{
public:
	B(int x) try : A(x)
	{
	}
	catch (...)
	{
		std::cerr << "Construction of A failed\n";
	}

};

int main()
{
	try
	{
		B b(0);
	}
	catch (std::exception& exception)
	{
		std::cout << "Oops!\n";
	}

	return 0;
};
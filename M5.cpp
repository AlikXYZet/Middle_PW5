#include <iostream>

class Parent
{
public:
	Parent() {};
};

class Child : public Parent
{
public:
	Child() {};
};

int main()
{
	try
	{
		throw Child();
	}
	catch (Child& child)
	{
		std::cerr << "caugght Child" << '\n';
	}
	catch (Parent& parent)
	{
		std::cerr << "caugght Parent" << '\n';
	}

	return 0;
};
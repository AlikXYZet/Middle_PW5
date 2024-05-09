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
	catch (Parent& parent)
	{
		std::cerr << "caugght Parent" << '\n';
	}
	catch (Child& child)
	{
		std::cerr << "caugght Child" << '\n';
	}

	return 0;
};
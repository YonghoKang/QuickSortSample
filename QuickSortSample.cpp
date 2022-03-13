#include <iostream>

class Add
{
public:
	int operator()(int a, int b)
	{
		std::cout << "()(int, int)" << std::endl;
		return a + b;
	}

	double operator()(double a, double b)
	{
		std::cout << "()(double, double)" << std::endl;
		return a + b;
	}
};

int main()
{
	Add adder;

	std::cout << adder(3, 4) << std::endl;
	std::cout << adder(3.3, 4.4) << std::endl;

	return 0;
}
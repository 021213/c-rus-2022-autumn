#include"Fraction.h"
#include<iostream>

int main(int argc, char* argv[])
{
	Fraction a(1, 3);
	Fraction b(1, -2);

	std::cout << a << " / " << b << " = " << a / b << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;

	return EXIT_SUCCESS;
}
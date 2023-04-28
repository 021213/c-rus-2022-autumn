#include<iostream>

int main(int argc, char* argv[])
{
	int a = 10;
	std::cout << &a << " " << a << std::endl;
	int* b = &a;
	std::cout << &b << " " << b << " " << *b << std::endl;
	return EXIT_SUCCESS;
}
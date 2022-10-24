#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int *b = nullptr;
	std::cout << "b = " << b << std::endl;
	b = new int;
	std::cout << "b = " << b << std::endl;
	*b = 432;
	std::cout << "*b = " << *b << std::endl;
	delete b;
	/*
	while (true)
	{
		b = new int;
	}*/
	return EXIT_SUCCESS;
}
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	while (a < 10)
	{
		++a;
		std::cout << a << " ";
	}

	return EXIT_SUCCESS;
}
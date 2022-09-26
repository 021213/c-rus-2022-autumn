#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	if (a < b)
	{
		std::cout << a << std::endl;
	}
	else
	{
		std::cout << b << std::endl;
	}

	std::cout << (a < b ? a : b) << std::endl;

	/* так не пишем
	if (a < b);
	{
		std::cout << a << std::endl;
	}
	std::cout << a << std::endl;
	*/

	return EXIT_SUCCESS;
}
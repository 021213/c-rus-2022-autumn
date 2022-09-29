#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	if (a > 0)
	{
		std::cout << "+" << std::endl;
	}
	else if (a == 0)
	{
		std::cout << "0" << std::endl;
	}
	else
	{
		std::cout << "-" << std::endl;
	}

	std::cout << (a > 0 ? "+" : a == 0 ? "0" : "-") << std::endl;
	return EXIT_SUCCESS;
}
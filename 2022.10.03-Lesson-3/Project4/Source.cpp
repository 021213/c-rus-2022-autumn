#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int sum = 0;
	do
	{
		std::cin >> a;
		sum += a;
	} while (a != 0);
	
	std::cout << sum << " ";

	return EXIT_SUCCESS;
}
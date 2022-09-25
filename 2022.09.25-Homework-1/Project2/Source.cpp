#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;

	std::cin >> x;

	int x2 = x * x;

	int res = 0;
	res = (x2 + x) * (x2 + 1) + 1;

	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}
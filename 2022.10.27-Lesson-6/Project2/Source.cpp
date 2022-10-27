#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int res = 0;
	int pow = 1;
	while (n != 0)
	{
		res += n % 10 * pow;
		n /= 10;
		pow *= 2;
	}
	std::cout << res;
	return EXIT_SUCCESS;
}

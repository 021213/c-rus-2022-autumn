#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int n = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		a = 10;
		b = 20;
		c = a + b;
	}

	return EXIT_SUCCESS;
}
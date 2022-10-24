#include<iostream>

int main(int argc, char* argv[])
{
	const int N = 5;
	int a[N]{ 1, 2, 3, 4, 5 };

	for (int i = 0; i < N; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < N; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	int sum = 0;
	for (int i = 0; i < N; ++i)
	{
		sum += a[i];
	}
	std::cout << sum << std::endl;

	return EXIT_SUCCESS;
}
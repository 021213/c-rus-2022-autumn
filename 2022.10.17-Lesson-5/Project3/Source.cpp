#include<iostream>

int main(int argc, char* argv[])
{
	const int N = 10;
	int a[N]{ 0 };
	for (int i = 0; i < N; ++i)
	{
		std::cin >> a[i];
	}

	int sum = 0;
	for (int i = 0; i < N; ++i)
	{
		sum += a[i];
	}
	std::cout << "SUM = " << sum << std::endl;

	for (int i = 0; i < N; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
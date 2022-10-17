#include<iostream>
#define NN 10

int main(int argc, char* argv[])
{
	const int N = 10;
	int i = 0;
	std::cout << sizeof(i) << std::endl;
	int a[N]{ 3, 2, 1, 4, 6, 7, 4, 5, 6, 5 };
	std::cout << sizeof(a) << std::endl;
	int b[N]{ 0 };
	int c[N]{ 1, 2, 3 };

	c[4] = a[4] + b[4];

	std::cout << "a = " << a << " ";
	for (int i = 0; i < N; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "b = " << b << " ";
	for (int i = 0; i < N; ++i)
	{
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "c = " << c << " ";
	for (int i = 0; i < N; ++i)
	{
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
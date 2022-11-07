#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int* b = nullptr;
	b = &a;
	*b = 434;
	std::cout << a << std::endl;

	b = (int*)malloc(sizeof(int));
	if (b != nullptr)
	{
		*b = 23;
		std::cout << *b << std::endl;
		*b = 432;
		std::cout << *b << std::endl;
		free(b);
	}

	b = (int*)malloc(2 * sizeof(int));
	if (b != nullptr)
	{
		std::cout << b << std::endl;
		std::cout << b + 1 << std::endl;
		*b = 23;
		*(b + 1) = 43;
		std::cout << *b << b[0] << std::endl;
		std::cout << *(b + 1) << b[1] << std::endl;
		free(b);
	}

	return EXIT_SUCCESS;
}
#include<iostream>

int main(int argc, char* argv[])
{
	int a[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << a + 0 << ":" << *(a + 0) << " " << a[0] << std::endl;
	std::cout << a + 5 << ":" << *(a + 5) << " " << a[5] << std::endl;

	int b = 0;
	std::cout << &b << ":" << b << std::endl;

	return EXIT_SUCCESS;
}
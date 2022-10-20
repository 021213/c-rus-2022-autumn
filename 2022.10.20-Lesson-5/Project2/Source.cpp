#include<iostream>

int main(int argc, char* argv[])
{
	const int N = 5;
	int a[N]{ 1, 2, 3, 4, 5 };
	std::cout << a + 0 << " " << *(a + 0) << " " << a[0] << std::endl;
	std::cout << a + 1 << " " << *(a + 1) << " " << a[1] << std::endl;
	std::cout << a + 2 << " " << *(a + 2) << " " << a[2] << std::endl;

	return EXIT_SUCCESS;
}
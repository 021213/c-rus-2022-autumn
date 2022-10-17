#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int main(int argc, char* argv[])
{
	const int N = 10;
	int a[N]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << a + 3 << std::endl;
	*(a + 3) += 10;
	return EXIT_SUCCESS;
}
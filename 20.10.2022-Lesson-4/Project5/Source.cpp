#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;
	int g = 7;

	int* p = &d;

	p += 3;
	std::cout << &d << " " << p << std::endl;
	printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g); //1 2 3 4 5 6 7
	*p = 8;
	printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g); //1 2 8 4 5 6 7
	return EXIT_SUCCESS;
}
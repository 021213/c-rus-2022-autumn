#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 10;
	std::cout << &a << " " << *(&a) << std::endl;
	float f = *((float*)(&a));
	std::cout << f << std::endl;

	int* p = &a;
	*p = 20;
	std::cout << p << " " << a << std::endl;

	scanf_s("%d", &a); //std::cin >> a;
	printf("%d + %d = %d\n", a, 10, a + 10); //20 + 10 = 30
	return EXIT_SUCCESS;
}
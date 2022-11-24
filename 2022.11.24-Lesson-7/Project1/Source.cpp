#include<iostream>

void printSum(int, int);
void printSum(int, double);
void printSum(double, double);
void printNumbers(int, int);
int g(int);
int f(int);
int sum(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0);

void swapMagic(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void swap(int& a, int& b)
{
	a ^= b ^= a ^= b;
}

int main(int argc, char* argv[])
{
	printNumbers(5, 1);
	printNumbers(1, 5);
	int a = 42;
	int b = 43;
	int c = sum(a, b);
	printSum(a, b);
	swapMagic(&a, &b);
	printSum(a, b);
	swap(a, b);
	printSum(a, b);
	std::cout << sum(3, 2, 2, 1) << std::endl;
	return EXIT_SUCCESS;
}

void printNumbers(int a, int b)
{
	if (a < b)
	{
		for (int i = a; i <= b; ++i)
		{
			std::cout << i << " ";
		}
	}
	else
	{
		for (int i = a; i >= b; --i)
		{
			std::cout << i << " ";
		}

	}
	std::cout << std::endl;
}

void printSum(int a, int b)
{
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void printSum(int a, double b)
{
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void printSum(double a, double b)
{
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

int f(int a)
{
	if (a < 10) return 0;
	return g(a - 1);
}

int g(int a)
{
	if (a < 10) return -2;
	return f(a - 2);
}

int sum(int a, int b, int c, int d, int e, int f)
{
	return a + b + c + d + e + f;
}
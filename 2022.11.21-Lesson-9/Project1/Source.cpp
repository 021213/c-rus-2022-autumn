#include<iostream>

void printNumbers(int a = 0, int b = 10);
int sum(int, int); //передача по значению
void swap(int*, int*); //передача по ссылке
void swap(int&, int&); //передача по ссылке
int f(int);
int g(int);

int main(int argc, char* argv[])
{
	printNumbers(10, 0);
	printNumbers(4, 7);
	printNumbers(6, 4);
	int a = 5;
	int b = 7;
	int c = sum(a, b);
	std::cout << a << " + " << b << " = " << c << std::endl;
	swap(&a, &b);
	std::cout << a << " + " << b << " = " << c << std::endl;
	swap(a, b);
	std::cout << a << " + " << b << " = " << c << std::endl;
	
	printNumbers();
	printNumbers(1);
	
	return EXIT_SUCCESS;
}

void printNumbers(int a, int b)
{
	if (a <= b)
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

int sum(int a, int b) //передача по значению
{
	int res = a + b;
	return res;
}

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

int f(int n)
{
	return g(n - 1);
}

int g(int n)
{
	if (n < 1) return -1;
	return f(n - 1);
}
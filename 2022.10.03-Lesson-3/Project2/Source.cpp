#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;
	//посчитать сумму чисел от a до b

	int sum = 0;
	do
	{
		sum += a;
		++a;
	} while (a <= b);

	return EXIT_SUCCESS;
}
#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;
	//посчитать сумму чисел от a до b

	int sum = 0;
	while (a <= b)
	{
		a++; // ++a; a += 1; a = a + 1;
		if (a == 50)
		{
			continue;
		}
		sum += a; //sum = sum + a;
		if (sum >= 100)
		{
			break;
		}
	}

	return EXIT_SUCCESS;
}
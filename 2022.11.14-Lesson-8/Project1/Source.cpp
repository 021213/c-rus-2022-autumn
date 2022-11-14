#include<iostream>
#include<cstdlib>
#include<ctime>

int main(int argc, char* argv)
{
	srand(time(0));
	int lower = 10;
	int upper = 99;
	int n = 10;
	int* a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % (upper - lower + 1) + lower; //rand() % (b - a + 1) + a
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	int indMax = 0;
	for (int i = 1; i < n; ++i)
	{
		indMax = (a[indMax] > a[i] ? indMax : i);
		if (a[indMax] < a[i])
		{
			indMax = i;
		}
	}
	std::cout << indMax << std::endl;

	int max = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	std::cout << max << std::endl;

	int sum = 0;
	for (int i = 1; i < n; ++i)
	{
		sum += a[i];
	}
	std::cout << sum << std::endl;

	delete[] a;
	return EXIT_SUCCESS;
}
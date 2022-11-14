#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	
	int a[100]{ 0 };
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	int max = 0;
	int current = 1;
	for (int i = 0; i < n; ++i)
	{
		if (max + current * a[i] < a[i] * (i + 1))
		{
			max = a[i] * (i + 1);
			current = 0;
		}
		else if (i == n - 1 || a[i] > a[i + 1])
		{
			max += current * a[i];
			current = 0;
		}
		current++;
	}
	std::cout << max << std::endl;
	return EXIT_SUCCESS;
}
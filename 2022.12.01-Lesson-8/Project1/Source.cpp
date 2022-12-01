#include<iostream>
#include<iomanip>

typedef unsigned long long ulong;

ulong f(ulong n)
{
	if (n < 0)
	{
		return 0;
	}
	if (n == 0)
	{
		return 1;
	}
	return n * f(n - 1);
}

int C(int n, int k)
{
	if (k < 0 || k > n)
	{
		return 0;
	}
	if (k == 0 || k == n)
	{
		return 1;
	}
	return C(n - 1, k - 1) + C(n - 1, k);
}

int main(int argc, char* argv[])
{
	int n = 15;
	std::cout << f(155) << std::endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			//std::cout << std::setw(4) << C(i + j, i) << " ";
		}
		//std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}
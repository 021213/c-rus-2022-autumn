#include<iostream>
#include<iomanip>

const int N = 20;

int c[N][N]{ 0 };

int C(int n, int k)
{
	if (k < 0 || k > n || n < 0)
	{
		return 0;
	}
	/*
	4 2

	1 1 1 1 1
	1 2 3 4
	1 3 6
	1 4
	1
	*/
	int i = n - k;
	int j = k;
	if(c[i][j] == 0)
	{
		if (i * j == 0)
		{
			c[i][j] = 1;
		}
		else
		{
			c[i][j] = C(n - 1, k - 1) + C(n - 1, k);
		}
	}
	return c[i][j];
}

int main(int argc, char* argv[])
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			c[i][j] = 0;
		}
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N - i; ++j)
		{
			//std::cout << std::setw(4) << C(i + j, i) << " ";
		}
		//std::cout << std::endl;
	}
	C(17, 7);
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N - i; ++j)
		{
			std::cout << std::setw(4) << c[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}
#include<iostream>

int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * fact(n - 1);
}

int** buf(int n)
{
	int** res = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		res[i] = new int[n] {0};
	}
	return res;
}

void del(int** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int C(int n, int k)
{
	if(n < 0 || k < 0)
	{
		return 0;
	}
	if (k == 0 || k == n)
	{
		return 1;
	}
	return C(n - 1, k - 1) + C(n - 1, k);
}

int C(int n, int k, int** arr)
{
	if (n < 0 || k < 0)
	{
		return 0;
	}
	if (arr[n][k] == 0)
	{
		if (k == 0 || k == n)
		{
			arr[n][k] = 1;
		}
		else
		{
			arr[n][k] = C(n - 1, k - 1, arr) + C(n - 1, k, arr);
		}
	}
	return arr[n][k];
}

int main(int argc, char* argv)
{
	/*
	std::cout << fact(5) << std::endl;
	for (int i = 0; i < 40; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			std::cout << C(i, j) << " ";
		}
		std::cout << std::endl;
	}
	*/

	int n = 40;
	int** arr = buf(n);
	for (int i = 0; i < 40; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			std::cout << C(i, j, arr) << " ";
		}
		std::cout << std::endl;
	}
	del(arr, n);
	return EXIT_SUCCESS;
}
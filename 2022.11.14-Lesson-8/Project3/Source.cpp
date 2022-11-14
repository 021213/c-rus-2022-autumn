#include<iostream>
#include<cstdlib>
#include<ctime>

int main(int argc, char* argv)
{
	int n = 10;
	int k = 4;
	int* a = new int[n];

	{
		for (int i = 0; i < n; ++i)
		{
			a[i] = i;
		}
	}

	{
		for (int i = 0; i < n; ++i)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}

	{
		int x = 0;
		int y = n - 1;
		for (int i = 0; i < (y - x + 1) / 2; ++i)
		{
			int c = a[x + i];
			a[x + i] = a[y - i];
			a[y - i] = c;
		}
	}

	{
		for (int i = 0; i < n; ++i)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}

	{
		int x = 0;
		int y = k - 1;
		for (int i = 0; i < (y - x + 1) / 2; ++i)
		{
			int c = a[x + i];
			a[x + i] = a[y - i];
			a[y - i] = c;
		}
	}

	{
		for (int i = 0; i < n; ++i)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}

	{
		int x = k;
		int y = n - 1;
		for (int i = 0; i < (y - x + 1) / 2; ++i)
		{
			int c = a[x + i];
			a[x + i] = a[y - i];
			a[y - i] = c;
		}
	}

	{
		for (int i = 0; i < n; ++i)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}


	delete[] a;
	return EXIT_SUCCESS;
}
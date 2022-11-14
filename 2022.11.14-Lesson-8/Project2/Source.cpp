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

	{
		for (int i = 0; i < n; ++i)
		{
			a[i] = i;
			//a[i] = rand() % (upper - lower + 1) + lower; //rand() % (b - a + 1) + a
		}
	}

	{
		for (int i = 0; i < n; ++i)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}

	//0 <-> n - 1
	//1 <-> n - 2
	//i <-> n - i - 1

	{
		for (int i = 0; i < n / 2; ++i)
		{
			int c = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = c;
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
		int x = 7;
		int y = 9;
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

	// 1 2 3 4 5
	// 5 1 2 3 4
	{
		int k = 4;
		for (int j = 0; j < k; ++j)
		{
			int last = a[n - 1]; //3
			for (int i = n - 1; i > 0; --i)//2 + (n - 1)*(2 + 4)
			{
				a[i] = a[i - 1];//4
			}
			a[0] = last;//2
		}
	}//7+6n-6 = 6n+1 = O(n)

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
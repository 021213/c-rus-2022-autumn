#include<iostream>
#include<cstdlib>
#include<ctime>

int main(int argc, char* argv[])
{
	srand(time(0));
	int n = 10;
	int* a = (int*)malloc(sizeof(int) * n);
	{
		int lower = 10;
		int upper = 99;
		for (int i = 0; i < n; ++i)
		{
			a[i] = rand() % (upper - lower + 1) + lower;
		}
	}
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", *(a + i));
		}
		printf("\n");
	}
	{
		for (int i = 0; i < n / 2; ++i)
		{
			int c = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = c;
		}
	}
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", *(a + i));
		}
		printf("\n");
	}
	{
		int start = 2;
		int end = 3;
		for (int i = 0; i < (end - start + 1) / 2; ++i)
		{
			int c = a[start + i];
			a[start + i] = a[end - i];
			a[end - i] = c;
		}
	}
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", *(a + i));
		}
		printf("\n");
	}
	{
		int last = a[n - 1];
		for (int i = n - 1; i > 0; --i)
		{
			a[i] = a[i - 1];
		}
		a[0] = last;
	}
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", *(a + i));
		}
		printf("\n");
	}
	{
		int start = 0;
		int end = n - 1;
		for (int i = 0; i < (end - start + 1) / 2; ++i)
		{
			int c = a[start + i];
			a[start + i] = a[end - i];
			a[end - i] = c;
		}
	}
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", *(a + i));
		}
		printf("\n");
	}
	{
		int start = 0;
		int end = 4;
		for (int i = 0; i < (end - start + 1) / 2; ++i)
		{
			int c = a[start + i];
			a[start + i] = a[end - i];
			a[end - i] = c;
		}
	}
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", *(a + i));
		}
		printf("\n");
	}
	{
		int start = 5;
		int end = 9;
		for (int i = 0; i < (end - start + 1) / 2; ++i)
		{
			int c = a[start + i];
			a[start + i] = a[end - i];
			a[end - i] = c;
		}
	}
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", *(a + i));
		}
		printf("\n");
	}
	free(a);
	return EXIT_SUCCESS;
}
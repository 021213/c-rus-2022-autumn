#include<iostream>

int main(int argc, char* argv[])
{
	int n = 5;
	int m = 6;
	int** a = (int**)malloc(n * sizeof(int*));
	//int** a = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		*(a + i) = (int*)malloc(m * sizeof(int));
		//a[i] = new int[m];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			*(*(a + i) + j) = i + j;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		free(*(a + i)); //delete[] a[i];
	}
	free(a); //delete[] a;

	int* b = (int*)malloc(n * m * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			b[i * m + j] = i + j; //*(*(a + i) + j) = i + j;
		}
	}
	for (int i = 0; i < n * m; ++i)
	{
		if (i % m == 0)
		{
			std::cout << std::endl;
		}
		std::cout << *(b + i) << " ";
	}
	free(b);
	return EXIT_SUCCESS;
}
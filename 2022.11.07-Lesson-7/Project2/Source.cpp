#include<iostream>

int main(int argc, char* argv[])
{
	int* a = nullptr;
	a = new int[1]{ 0 }; // (int*) malloc(1 * sizeof(int))
	*a = 543;
	a[0] = 5234;
	delete[] a;

	int n = 10;
	a = new int[n]{ 0 };	//(int*)malloc(n * sizeof(int))
							//(int*)calloc(n, sizeof(int))
	for (int i = 0; i < n; ++i)
	{
		a[i] = i * i;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	int ind = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[ind] < a[i])
		{
			ind = i;
		}
	}

	delete[] a;
	return EXIT_SUCCESS;
}
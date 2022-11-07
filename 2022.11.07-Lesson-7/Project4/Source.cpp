#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = new int[n];
	{
		int* b = new int[n + 10];
		for (int i = 0; i < n; ++i)
		{
			b[i] = a[i];
		}
		delete[] a;
		a = b;
		n += 10;
	}
	delete[] a;

	int k = 4;
	for (int i = 0; i < n; ++i)
	{
		a[i] = k;
	}
	return EXIT_SUCCESS;
}
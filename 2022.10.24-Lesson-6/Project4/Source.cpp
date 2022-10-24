#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int* a = (int*)calloc(n, sizeof(int));
	
	for (int i = 0; i < n; ++i)
	{
		*(a + i) = i * i;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
	
	//realloc();

	{
		int dn = 10;
		int* t = (int*)calloc(n + dn, sizeof(int));
		for (int i = 0; i < n + dn; ++i)
		{
			*(t + i) = (i < n ? *(a + i) : 0);
		}
		n += dn;
		free(a);
		a = t;
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");

	free(a);
	return EXIT_SUCCESS;
}
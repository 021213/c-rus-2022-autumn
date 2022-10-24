#include<iostream>

int main(int argc, char* argv[])
{
	int n = 10;
	void* pointer = malloc(sizeof(int) * n);
	int* a = (int*)pointer;
	for (int i = 0; i < n; ++i)
	{
		*(a + i) = i * i;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
	free(pointer);
	return EXIT_SUCCESS;
}
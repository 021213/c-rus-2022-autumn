#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int main(int argc, char* argv[])
{
	const int N = 10;
	int a[N]{ 0 };
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", a + i);
		//scanf("%d", &a[i]);
	}

	for (int i = 0; i < N; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
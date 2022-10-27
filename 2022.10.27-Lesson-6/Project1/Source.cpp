#include<iostream>

int main4(int argc, char* argv[])
{
	int b = 10;
	int* a = nullptr;
	a = &b;
	*a = 42;
	std::cout << b << std::endl;
	return EXIT_SUCCESS;
}

int main1(int argc, char* argv[])
{
	int* a = nullptr;
	a = (int*)malloc(sizeof(int) * 10); //malloc возвращает (void*)
	*a = 5; //5 в нулевой элемент массива
	*(a + 1) = 23; //23 в первый элемент массива
	a[2] = 4; //4 во второй элемент массива
	free(a);
	return EXIT_SUCCESS;
}

int main2(int argc, char* argv[])
{
	while (1) malloc(1);
	return EXIT_SUCCESS;
}

int main3(int argc, char* argv[])
{
	int* a = new int[10]{ 0 }; //malloc
	*a = 5; //5 в нулевой элемент массива
	*(a + 1) = 23; //23 в первый элемент массива
	a[2] = 4; //4 во второй элемент массива
	delete[] a; //free
	return EXIT_SUCCESS;
}

int main(int argc, char* argv[])
{
	int len = 10;
	int* a = (int*)calloc(len, sizeof(int));

	for (int i = 0; i < len; ++i)
	{
		*(a + i) = i * i;
	}

	for (int i = 0; i < len; ++i)
	{
		std::cout << *(a + i) << " ";
	}
	std::cout << std::endl;

	{
		//realloc(); //expand of array

		int* t = (int*)calloc(len + 10, sizeof(int));
		if (t != nullptr)
		{
			for (int i = 0; i < len + 10; ++i)
			{
				*(t + i) = (i < len ? *(a + i) : 0);
			}
			free(a);
			a = t;
			len += 10;
		}
	}

	for (int i = 0; i < len; ++i)
	{
		std::cout << *(a + i) << " ";
	}
	std::cout << std::endl;

	free(a);
	return EXIT_SUCCESS;
}
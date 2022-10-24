#include<iostream>

int main(int argc, char* argv[])
{
	int *a = new int[10]{ 0 };
	a[0] = 2;
	*(a + 1) = 3;
	a += 5;
	a[-3] = 4;
	for (int i = -5; i < 5; ++i)
	{
		std::cout << *(a + i) << " ";
	}
	std::cout << std::endl;
	delete[] (a - 5);
	return EXIT_SUCCESS;
}
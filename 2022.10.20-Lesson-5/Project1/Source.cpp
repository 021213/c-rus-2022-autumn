#include<iostream>
#define NN 5

int main(int argc, char* argv[])
{
	const int N = 5;
	int a[N]{ 0 };
	std::cout << sizeof(a) << std::endl;
	a[0] = 4;
	a[1] = 6;
	a[2] = 23;
	a[4] = 123;
	int b[N]{ 1, 2, 3, 2, 3 };
	int c[NN]{ 1, 2, 3 };
	int d[N]{ 1, 2, 2, 3, 2 /*, 3*/ };

	return EXIT_SUCCESS;
}
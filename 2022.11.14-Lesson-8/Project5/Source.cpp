#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int a[100]{ 0 };
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	int val = 0;
	int sum = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		val = (val > a[i] ? val : a[i]);
		sum += val;
	}
	std::cout << sum << std::endl;
	return EXIT_SUCCESS;
}
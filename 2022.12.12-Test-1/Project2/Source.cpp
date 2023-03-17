#include<iostream>

void reverse(int n)
{
	if (n == 0)
	{
		return;
	}
	int x = 0;
	std::cin >> x;
	reverse(n - 1);
	std::cout << x << " ";
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	reverse(n);
	return EXIT_SUCCESS;
}
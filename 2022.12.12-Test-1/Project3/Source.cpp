#include<iostream>

bool isPrime(int n, int del = 2)
{
	if (n % del == 0)
	{
		return (n == 2);
	}
	if (del * del > n)
	{
		return true;
	}
	return isPrime(n, del + 1);
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << (isPrime(n) ? "prime" : "composite");
	return EXIT_SUCCESS;
}
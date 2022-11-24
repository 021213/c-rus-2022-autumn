#include<iostream>

void printArray(int*, int);

void pushBack(int, int*&, int&);

int main(int argc, char* argv[])
{
	int n = 3;
	int* a = new int[n] { 0 };
	printArray(a, n);
	pushBack(5, a, n);
	pushBack(1, a, n);
	pushBack(8, a, n);
	printArray(a, n);
	delete[] a;
	return EXIT_SUCCESS;
}

void printArray(int* arr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void pushBack(int el, int*& arr, int& len)
{
	int* temp = new int[len + 1]{ 0 };
	for (int i = 0; i < len; ++i)
	{
		temp[i] = arr[i];
	}
	temp[len] = el;
	len++;
	delete[] arr;
	arr = temp;
}
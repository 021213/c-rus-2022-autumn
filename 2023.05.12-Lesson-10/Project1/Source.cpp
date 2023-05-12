#include<iostream>
#include"IntArray.h"

int main(int argc, char* argv[])
{
	IntArray arr(5);
	for (int i = 0; i < arr.Length(); ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl << arr << std::endl;
	return EXIT_SUCCESS;
}
#include<iostream>
#include<string>
#include"BiList.h"

void Print()
{
	static int count = 1;
	std::cout << count << std::endl;
	count += 1;
}

int main()
{
	Print();
	Print();
	Print();
	Print();
	Print();
	return EXIT_SUCCESS;
}
#include<iostream>

void printSum(void* a, int& b)
{
	int* aa = (int*)a;
	int c = *aa + b;
	std::cout << *aa << " + " << b << " = " << c << std::endl;
	*aa = 32;
	b = 52;
	return;
}

int main(int argc, char* argv[])
{
	int code10 = 12;   //  1100
	int code08 = 012;  //  001 010
	int code16 = 0x12; // 0001 0010
	int a = 10;
	int b = 20;
	printSum(&a, b);
	std::cout << a << " " << b << std::endl;
	return EXIT_SUCCESS;
}
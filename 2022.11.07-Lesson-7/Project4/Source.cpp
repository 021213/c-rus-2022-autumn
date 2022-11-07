#include<iostream>

int main(int argc, char* argv[])
{
	int a = 5;
	int b = 7;
	int c = (a & b) == 5;
	std::cout << c << std::endl;
}
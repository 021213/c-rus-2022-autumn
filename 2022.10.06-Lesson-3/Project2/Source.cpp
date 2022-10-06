#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	do
	{
		if (i == 4)
		{
			continue;
		}
		if (i == 7)
		{
			break;
		}
		std::cout << i << " ";
		++i;
	} while (i < 10);
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	while (i < 10)
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
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
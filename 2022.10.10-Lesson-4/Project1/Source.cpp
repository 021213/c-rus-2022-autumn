#include<iostream>

int main(int argc, char* argv[])
{
	{
		int i = 0;
		while (i < 10) // <=> for(; i < 10;)
		{
			std::cout << i << " ";
			++i;
		}
		std::cout << std::endl;
	}

	{
		for (int i = 0; i < 10; ++i)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	{
		for (int i = 0, j = 0; i < 50; j += 2, i += j)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	{
		for (int i = 0, j = 0; i < 50; j += 2, i += j)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}
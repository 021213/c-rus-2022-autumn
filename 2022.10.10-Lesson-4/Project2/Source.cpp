#include<iostream>

int main(int argc, char* argv[])
{
	{
		int i = 5;
		{
			int i = 2;
			for (int i = 3; i < 6; ++i)
			{
				std::cout << i << " ";
			}
			std::cout << i << " ";
		}
		std::cout << i << std::endl;
		//3 4 5 2 5
	}
	{
		int i = 5;
		{
			int i = 2;
			for (int i = 3; i < 6; ++i);
			{
				std::cout << i << " ";
			}
			std::cout << i << " ";
		}
		std::cout << i << std::endl;
		//2 2 5
	}
	{
		int i = 5;
		{
			int i = 2;
			for (i = 3; i < 6; ++i)
			{
				std::cout << i << " ";
			}
			std::cout << i << " ";
		}
		std::cout << i << std::endl;
		//3 4 5 6 5
	}

	return EXIT_SUCCESS;
}
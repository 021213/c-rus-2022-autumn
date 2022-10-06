#include<iostream>

int main(int argc, char* argv[])
{
	{
		int x = -1;
		int sum = 0;
		while (x != 0)
		{
			std::cin >> x;
			sum += x;
		}
	}
	{
		int x = 0;
		int sum = 0;
		do
		{
			std::cin >> x;
			sum += x;
		} while (x != 0);
	}

	{ //while
		int x = 1;
		int sum = 0;
		if (x != 0) goto start1; else goto end1;
	start1:
		std::cin >> x;
		sum += x;
		if (x != 0) goto start1; else goto end1;
	end1:
		;
	}

	{ //do-while
		int x = 0;
		int sum = 0;
	start2:
		std::cin >> x;
		sum += x;
		if (x != 0) goto start2;
	}
	return EXIT_SUCCESS;
}
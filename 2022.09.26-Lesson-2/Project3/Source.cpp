#include<iostream>

int main(int argc, char* argv[])
{
	/*дано число бананов, вывести слово "банан" в нужной форме*/
	int a = 0;
	std::cin >> a;

	if (a / 10 % 10 == 1)
	{
		std::cout << "BANANOV";
	}
	else
	{
		if (a % 10 == 1)
		{
			std::cout << "BANAN";
		}
		else
		{
			if ((a % 10 > 1) && (a % 10 < 5))
			{
				std::cout << "BANANA";
			}
			else
			{
				std::cout << "BANANOV";
			}
		}
	}


	if (a / 10 % 10 == 1)
	{
		std::cout << "BANANOV";
	}
	else
	{
		switch (a % 10)
		{
		case 1:
			std::cout << "BANAN";
			break;
		case 2:
		case 3:
		case 4:
			std::cout << "BANANA";
			break;
		default:
			std::cout << "BANANOV";
			break;
		}
	}

	return EXIT_SUCCESS;
}
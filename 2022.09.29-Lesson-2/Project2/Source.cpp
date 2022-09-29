#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	a = a % 7;
	/*
	if (a == 0)
	{
		std::cout << "SUN" << std::endl;
	}
	else if (a == 1)
	{
		std::cout << "MON" << std::endl;
	}
	else if (a == 2)
	{
		std::cout << "TUE" << std::endl;
	}
	else if (a == 3)
	{
		std::cout << "WED" << std::endl;
	}
	else if (a == 4)
	{
		std::cout << "THU" << std::endl;
	}
	else if (a == 5)
	{
		std::cout << "FRI" << std::endl;
	}
	else
	{
		std::cout << "SAT" << std::endl;
	}
	*/

	switch (a)
	{
	case 1:
	case 8:
	case 15:
		std::cout << "MON" << std::endl;
		break;
	case 2:
		std::cout << "TUE" << std::endl;
		break;
	case 3:
		std::cout << "WED" << std::endl;
		break;
	case 4:
		std::cout << "THU" << std::endl;
		break;
	case 5:
		std::cout << "FRI" << std::endl;
		break;
	case 6:
		std::cout << "SAT" << std::endl;
		break;
	default:
		std::cout << "SUN" << std::endl;
		break;
	}

	return EXIT_SUCCESS;
}
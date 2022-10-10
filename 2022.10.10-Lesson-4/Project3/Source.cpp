#include<iostream>

int main(int argc, char* argv[])
{
	int c = 0;
	do
	{
		//menu output
		{
			system("cls");
			std::cout << "0 - EXIT" << std::endl;
			std::cout << "1 - add numbers" << std::endl;
			std::cout << "2 - subtract numbers" << std::endl;
		}

		//read input
		{
			std::cin >> c;
		}

		//process input
		switch (c)
		{
		case 0:
		{
			std::cout << "program finished" << std::endl;
			break;
		}
		case 1:
		{
			int a = 0;
			int b = 0;
			std::cout << "input operands : ";
			std::cin >> a >> b;
			std::cout << a << " + " << b << " = " << a + b << std::endl;
			break;
		}
		case 2:
		{
			int a = 0;
			int b = 0;
			std::cout << "input operands : ";
			std::cin >> a >> b;
			std::cout << a << " - " << b << " = " << a - b << std::endl;
			break;
		}
		default:
		{
			std::cout << "invalid input!" << std::endl;
			break;
		}
		}
		system("pause");
	} while (c != 0);
	return EXIT_SUCCESS;
}
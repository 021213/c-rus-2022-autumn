#include<iostream>

int main(int argc, char* argv[])
{
	/*дано число бананов, вывести слово "банан" в нужной форме*/
	int a = 0;
	std::cin >> a;

	std::cout << "BANAN";
	std::cout << (a % 10 > 1 ?
					a % 10 < 5 ?
						a / 10 % 10 != 1 ? "A" : "OV"
						: "OV"
					: a % 10 == 0 ?
						"OV" : "");

	return EXIT_SUCCESS;
}
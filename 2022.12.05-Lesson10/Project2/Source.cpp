#include<iostream>
#include<cstring>

int main(int argc, char* argv[])
{
	char s[255];

	std::cin >> s;
	std::cout << "\"" << s << "\"" << std::endl;

	std::cin.getline(s, 255);
	std::cout << "\"" << s << "\"" << std::endl;
	std::cin.getline(s, 255);
	std::cout << "\"" << s << "\"" << std::endl;

	std::cout << strlen(s) << std::endl;

	int ind = 2;
	for (int i = ind; i < strlen(s); ++i)
	{
		s[i] = s[i + 1];
	}
	std::cout << "\"" << s << "\"" << std::endl;

	return EXIT_SUCCESS;
}
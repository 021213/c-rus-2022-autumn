#include<iostream>
#include<fstream>
#include<string>

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; ++i)
	{
		std::cout << i << " " << argv[i] << std::endl;
	}

	if (argc > 1 && argv[1] == "move")
	{
		std::ofstream servofile(argv[2]);
		servofile << argv[3] << std::endl;
		servofile.close();
	}

	return EXIT_SUCCESS;
}
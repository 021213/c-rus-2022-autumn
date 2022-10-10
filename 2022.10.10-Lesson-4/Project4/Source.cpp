#include<iostream>

int main(int argc, char* argv[])
{
	for (int i = 8; i < 12; ++i)
	{
		for (int j = 98; j < 103; ++j)
		{
			printf("%03d + %3d = %3d\n", i, j, i + j);
		}
	}

	return EXIT_SUCCESS;
}
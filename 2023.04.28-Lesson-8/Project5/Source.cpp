﻿//0110 1101 1101 1010 0
//0110 1101 1101 1010 1

/*
01100   01100☺
11011   11111☻
11011   11011☺
10100   10100☺
11000   11000☺
        ☺☺☻☺☺
*/

#include<iostream>

int main()
{
	for (int i = 0; i < 256; ++i)
	{
		std::cout << i << "->" << (char)i << std::endl;
	}
	return 0;
}
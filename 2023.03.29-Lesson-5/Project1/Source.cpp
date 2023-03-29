#include<iostream>
#include<fstream>
#include<ostream>
#include<ios>

int main(int argc, char* argv[])
{
	//ifstream, ofstream, fstream
	//istream, ostream, stream
	std::ifstream fin("in.txt");
	std::ofstream fout("out.txt");
	int x = 0;
	int y = 0;
	fin >> x >> y;
	fout << x + y;
	x += y;
	x = x + y;
	fout.close();
	fin.close();
	return EXIT_SUCCESS;
}
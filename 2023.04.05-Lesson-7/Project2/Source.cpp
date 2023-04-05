#include<iostream>
#include<fstream>

int mainStd(int argc, char* argv[])
{
	//<in.txt >out.txt
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << a + b;
	return EXIT_SUCCESS;
}

int mainStreams(int argc, char* argv[])
{
	std::ifstream fin("in.txt");
	std::ofstream fout("out.txt");
	int a = 0;
	int b = 0;
	if(fin)
	{
		fin >> a >> b;
		fout << a + b;
	}
	fout.close();
	fin.close();
	return EXIT_SUCCESS;
}

int main(int argc, char* argv[])
{
	//return mainStreams(argc, argv);
	return mainStd(argc, argv);
}
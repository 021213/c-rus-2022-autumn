#include<iostream>

int main(int argc, char* argv[])
{
	int a[1000];
	int n = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	int r[100][2];
	int m = 0;
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		std::cin >> r[i][0] >> r[i][1];
	}
	
	for (int i = 0; i < m; ++i)
	{
		for (int j = r[i][0]; j < r[i][1]; ++j)
		{
			std::cout << a[j] << " ";
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}
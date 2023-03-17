#include<iostream>
#include<cmath>

bool checkCell(int field[10][10], int n, int cell)
{
	int i = cell / n;
	int j = cell % n;
	for (int p = 0; p < n; ++p)
	{
		for (int t = 0; t < n; ++t)
		{
			if ((field[p][t] == 0) || ((p == i) && (t == j)))
			{
				continue;
			}
			if ((abs(p - i) <= 2) && (abs(t - j) <= 2))
			{
				return false;
			}
			if ((p == i) || (t == j))
			{
				return false;
			}
			if ((abs(p - i) == abs(t - j)))
			{
				return false;
			}
		}
	}
	return true;
}

int maharajas(int field[10][10], int n, int k, int cell = 0)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		int res = 0;
		for (int i = cell; i < n * n; ++i)
		{
			field[i / n][i % n] = 1;
			if (checkCell(field, n, i))
			{
				res += maharajas(field, n, k - 1, (i / n + 1) * n);
			}
			field[i / n][i % n] = 0;
		}
		return res;
	}
}

int main(int argc, char* argv)
{
	int field[10][10]{ 0 };

	int n = 0;
	std::cin >> n;
	int k = 0;
	std::cin >> k;

	std::cout << maharajas(field, n, k) << std::endl;

	return EXIT_SUCCESS;
}
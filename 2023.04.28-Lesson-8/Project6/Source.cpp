#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	/*
Дан массив длины n. Дано m запросов вида  i, j.
Вывести сумму элементов массива от i до j элемента.
	O(m * n)
	*/
	int* a;
	int n = 0;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 10;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// i 0  1  2  3  4  5  6  7  8
	// a 1  1  1  2  2  2  4  4  4
	// s 0  1  2  3  5  7  9 13 17 21
	int* s = new int[n + 1];
	s[0] = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		s[i] = s[i - 1] + a[i - 1];
	}

	int m = 0;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int l = 0;
		int r = 0;
		cin >> l >> r;
		cout << s[r + 1] - s[l] << endl;
	}

	return EXIT_SUCCESS;
}
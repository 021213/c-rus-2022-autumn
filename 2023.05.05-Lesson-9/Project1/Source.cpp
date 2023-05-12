#include<iostream>
#include<ctime>
#include<ostream>

struct IntArray {
private:
	int* data;
	int len;

	void randomInit(int a = 10, int b = 99)
	{
		srand(time(0));
		for (int i = 0; i < len; ++i)
		{
			data[i] = rand() % (b - a + 1) + a;
		}
	}

public:

	IntArray(int len = 10)
	{
		this->data = new int[len];
		this->len = len;
		randomInit();
	}

	IntArray(const IntArray& arr) : data(new int(arr.len)), len(len)
	{
		for(int i = 0; i < len; ++i)
		{
			data[i] = arr.data[i];
		}
	}

	~IntArray()
	{
		delete[] data;
	}

	friend std::ostream& operator<<(std::ostream& stream, const IntArray& a)
	{
		stream << "[" << a.len << "] { ";
		for (int i = 0; i < a.len; ++i)
		{
			stream << a.data[i] << " ";
		}
		stream << "}";
		return stream;
	}

	int& operator[](int index)
	{
		return this->data[index];
	}

	void swap(int ind1, int ind2)
	{
		int c = data[ind1];
		data[ind1] = data[ind2];
		data[ind2] = c;
	}

	int length() { return len; }

	bool isSorted()
	{
		for (int i = 1; i < len; ++i)
		{
			if (data[i] < data[i - 1])
			{
				return false;
			}
		}
		return true;
	}
};

void Mix(IntArray& arr)
{
	for (int i = 0; i < arr.length(); ++i)
	{
		arr.swap(i, rand() % arr.length());
	}
}

void BubbleSort(IntArray& arr)
{
	for (int i = 0; i < arr.length(); ++i)
	{
		for (int j = 0; j < arr.length() - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				arr.swap(j, j + 1);
			}
		}
	}
}

void SelectionSort(IntArray& arr)
{
	/*
	1 6 4 9 3 5 8 2 7
	1 2 4 9 3 5 8 6 7
	1 2 3 9 4 5 8 6 7
	1 2 3 4 9 5 8 6 7
	1 2 3 4 5 9 8 6 7
	1 2 3 4 5 6 8 9 7
	*/
	for (int i = 0; i < arr.length(); ++i)
	{
		int ind = i;
		for (int j = i; j < arr.length(); ++j)
		{
			if (arr[ind] > arr[j])
			{
				ind = j;
			}
		}
		arr.swap(i, ind);
	}
}

void InsertionSort(IntArray& arr)
{
	/*
	9 4 6 1 3 7 8 2 5
	4 9 6 1 3 7 8 2 5
1	4 6 9 1 3 7 8 2 5
	4 4 6 9 3 7 8 2 5
	*/
	for (int i = 1; i < arr.length(); ++i)
	{
		int el = arr[i];
		int j = i;
		while(j > 0 && arr[j - 1] > el)
		{
			arr[j] = arr[j - 1];
			--j;
		}
		arr[j] = el;
	}
}

void GnomeSort(IntArray& arr)
{
	/*
	4 9 6 1 3 7 8 2 5
	4 6 9 1 3 7 8 2 5
	1 4 6 9 3 7 8 2 5
	*/
	for (int i = 1; i < arr.length(); ++i)
	{
		for (int j = i; j > 0 && arr[j] < arr[j - 1]; --j)
		{
			arr.swap(j, j - 1);
		}
	}
}

void MonkeySort(IntArray& arr)
{
	while (!arr.isSorted())
	{
		Mix(arr);
	}
}

void ShakerSort(IntArray& arr)
{
	/*
	9 4 6 7 3 8 2 5 1
	4 6 7 3 8 2 5 1 9
	1 4 6 7 3 8 2 5 9
	1 2 4 6 7 3 5 8 9
	1 2 3 4 6 5 7 8 9
	*/
}

void CombSort(IntArray& arr)
{
	/*
	9 4 6 7 3 8 2 5 1
	1 4 6 7 3 8 2 5 9
	1 4 2 5 3 8 6 7 9

	*/

}

void MergeSort(IntArray& arr)
{
	/*
	1|3|6|4|9|8|2|5|7  1
	1 3|4 6|8 9|2 5|7  2
	1 3 4 6|2 5 8 9|7  2^2
	1 2 3 4 5 6 8 9|7  2^3
	1 2 3 4 5 6 7 8 9  2^x > n; x = ln n/ ln 2
	*/
}

int partition(IntArray& arr, int start, int end)
{
	int ind = start;
	int pivot = arr[end];
	for (int i = start; i < end; ++i)
	{
		if (arr[i] < pivot)
		{
			arr.swap(ind, i);
			++ind;
		}
	}
	arr.swap(ind, end);
	return ind;
}

void QuickSort(IntArray& arr, int start, int end)
{
	int p = partition(arr, start, end);
	if (p - 1 > start)
	{
		QuickSort(arr, start, p - 1);
	}
	if (p + 1 < end)
	{
		QuickSort(arr, p + 1, end);
	}
}

int main(int argc, char* argv[])
{
	IntArray a;
	std::cout << a << std::endl;
	std::cout << partition(a, 0, a.length() - 1) << " : " << a << std::endl;
	QuickSort(a, 0, a.length() - 1);
	
	return EXIT_SUCCESS;
}
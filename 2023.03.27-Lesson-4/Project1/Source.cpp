#include<iostream>
#include<stdlib.h>
//ATD - List

class ArrayListInt
{
private:
	int* data;
	int capacity;
	int count;
	void expand()
	{
		int* newData = new int[capacity * 2];
		for (int i = 0; i < capacity; ++i)
		{
			newData[i] = data[i];
		}
		delete[] data;
		data = newData;
		capacity *= 2;
	}
	bool indexValid(int index)
	{
		return index >= 0 && index < count;
	}

public:
	ArrayListInt(int capacity = 2) :
		data(new int[capacity]), capacity(capacity), count(0)
	{};
	ArrayListInt(const ArrayListInt& list) :
		data(new int[list.capacity]), capacity(list.capacity), count(list.count)
	{
		for (int i = 0; i < list.capacity; ++i)
		{
			data[i] = list.data[i];
		}
	};
	~ArrayListInt()
	{
		delete[] data;
	}
	void InsertEnd(int element)
	{
		if (count == capacity)
		{
			expand();
		}
		data[count] = element;
		++count;
	}
	//void InsertStart();
	int RemoveEnd()
	{
		if (count == 0)
		{
			return -1;
		}
		count--;
		return data[count];
	}
	void Print()
	{
		std::cout << "[" << count << "/" << capacity << "] { ";
		for (int i = 0; i < count; ++i)
		{
			std::cout << data[i] << " ";
		}
		std::cout << "}" << std::endl;
	}
	int Get(int index)
	{
		if (!indexValid(index))
		{
			return -1;
		}
		return data[index];
	}
	void Set(int index, int element)
	{
		if (!indexValid(index))
		{
			return;
		}
		data[index] = element;
	}
	int Count()
	{
		return count;
	}
};

int sum(ArrayListInt list)
{
	int res = 0;
	for (int i = 0; i < list.Count(); ++i)
	{
		res += list.Get(i);
	}
	return res;
}

void addOne(ArrayListInt list)
{
	for (int i = 0; i < list.Count(); ++i)
	{
		list.Set(i, list.Get(i) + 1);
	}
	list.Print();
}

void addTwo(ArrayListInt& list)
{
	for (int i = 0; i < list.Count(); ++i)
	{
		list.Set(i, list.Get(i) + 2);
	}
	list.Print();
}

int main()
{
	ArrayListInt list;
	list.Print();
	for (int i = 0; i < 5; ++i)
	{
		list.InsertEnd(rand() % 10);
	}
	list.Print();
	list.RemoveEnd();
	list.Print();
	addOne(list);
	list.Print();
	addTwo(list);
	list.Print();
	ArrayListInt list2(list);
	list.Print();
	return 0;
}
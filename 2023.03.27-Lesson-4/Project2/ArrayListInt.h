#pragma once
#include<iostream>

class ArrayListInt
{
private:
	int* data;
	int capacity;
	int count;
	void expand();
	bool indexValid(int index);

public:
	ArrayListInt(int capacity = 2);
	ArrayListInt(const ArrayListInt& list);
	~ArrayListInt();
	void InsertEnd(int element);
	void InsertStart(int element);
	//void Insert(int index, int element);
	//void Insert(int index, ArrayListInt& list);
	int RemoveEnd();
	int RemoveStart();
	//int Remove(int index);
	//void Swap(int index1, int index2)
	//void Sort(); // за O(N)
	//int Sum();
	void Print();
	int Get(int index);
	void Set(int index, int element);
	int Count();
	ArrayListInt& operator+=(int element);
	ArrayListInt& operator=(const ArrayListInt& list);
	friend ArrayListInt operator+(int element, ArrayListInt list)
	{
		list.InsertStart(element);
		return list;
	}
};

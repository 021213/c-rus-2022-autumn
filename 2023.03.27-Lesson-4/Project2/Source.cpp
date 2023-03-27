#include<iostream>
#include<stdlib.h>
#include"ArrayListInt.h"
//ATD - List

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
	list += 5;
	list += 7;
	((list += 10) += 16) += 23;
	list.Print();
	list = 15 + list;
	list.Print();
	return 0;
}
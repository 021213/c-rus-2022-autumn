#include"ArrayListInt.h"

void ArrayListInt::expand()
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

bool ArrayListInt::indexValid(int index)
{
	return index >= 0 && index < count;
}

ArrayListInt::ArrayListInt(int capacity) :
	data(new int[capacity]), capacity(capacity), count(0)
{};

ArrayListInt::ArrayListInt(const ArrayListInt& list) :
	data(new int[list.capacity]), capacity(list.capacity), count(list.count)
{
	for (int i = 0; i < list.capacity; ++i)
	{
		data[i] = list.data[i];
	}
};

ArrayListInt::~ArrayListInt()
{
	delete[] data;
}

void ArrayListInt::InsertEnd(int element)
{
	if (count == capacity)
	{
		expand();
	}
	data[count] = element;
	++count;
}

int ArrayListInt::RemoveEnd()
{
	if (count == 0)
	{
		return -1;
	}
	count--;
	return data[count];
}

void ArrayListInt::Print()
{
	std::cout << "[" << count << "/" << capacity << "] { ";
	for (int i = 0; i < count; ++i)
	{
		std::cout << data[i] << " ";
	}
	std::cout << "}" << std::endl;
}

int ArrayListInt::Get(int index)
{
	if (!indexValid(index))
	{
		return -1;
	}
	return data[index];
}

void ArrayListInt::Set(int index, int element)
{
	if (!indexValid(index))
	{
		return;
	}
	data[index] = element;
}

int ArrayListInt::Count()
{
	return count;
}


void ArrayListInt::InsertStart(int element)
{
	if (count == capacity)
	{
		expand();
	}
	for (int i = count; i > 0; --i)
	{
		data[i] = data[i - 1];
	}
	data[0] = element;
	++count;
}

int ArrayListInt::RemoveStart()
{
	int res = data[0];
	for (int i = 0; i < count - 1; ++i)
	{
		data[i] = data[i + 1];
	}
	--count;
	return res;
}

ArrayListInt& ArrayListInt::operator+=(int element)
{
	InsertEnd(element);
	return *this;
}

ArrayListInt& ArrayListInt::operator=(const ArrayListInt& list)
{
	if (data != nullptr)
	{
		delete[] data;
	}
	data = new int[list.capacity];
	capacity = list.capacity;
	count = list.count;
	for (int i = 0; i < count; ++i)
	{
		data[i] = list.data[i];
	}
	return *this;
}


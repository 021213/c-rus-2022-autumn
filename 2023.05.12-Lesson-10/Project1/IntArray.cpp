#include "IntArray.h"

IntArray::IntArray(int len) : data(new int[len]), len(len)
{
	RandomInit();
}

IntArray::IntArray(const IntArray& arr) : data(new int(arr.len)), len(len)
{
	Copy(this->data, arr.data, len);
}

IntArray::~IntArray()
{
	delete[] data;
}

IntArray& IntArray::operator=(const IntArray & arr)
{
	if (data != nullptr)
	{
		delete[] data;
		data = nullptr;
	}
	this->data = new int[arr.len];
	this->len = arr.len;
	Copy(arr.data, this->data, this->len);
	return *this;
}

void IntArray::RandomInit(int a, int b)
{
	srand(time(0));
	for (int i = 0; i < len; ++i)
	{
		data[i] = rand() % (b - a + 1) + a;
	}
}

void IntArray::Copy(int* src, int* dest, int count)
{
	for (int i = 0; i < count; ++i)
	{
		dest[i] = src[i];
	}
}

int& IntArray::operator[](int index)
{
	return this->data[index];
}

void IntArray::Swap(int ind1, int ind2)
{
	int c = data[ind1];
	data[ind1] = data[ind2];
	data[ind2] = c;
}

int IntArray::Length()
{
	return len;
}

bool IntArray::IsSorted()
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

void IntArray::Mix()
{
	for (int i = 0; i < this->Length(); ++i)
	{
		this->Swap(i, rand() % this->Length());
	}
}

std::ostream& operator<<(std::ostream& stream, const IntArray& a)
{
	stream << "[" << a.len << "] { ";
	for (int i = 0; i < a.len; ++i)
	{
		stream << a.data[i] << " ";
	}
	stream << "}";
	return stream;
}
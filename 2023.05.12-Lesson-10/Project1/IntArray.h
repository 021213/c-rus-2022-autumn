#pragma once
#include<cstdlib>
#include<ctime>
#include<ostream>

class IntArray {
private:
	int* data;
	int len;

	void RandomInit(int a = 10, int b = 99);

	void Copy(int* src, int* dest, int count);

public:

	IntArray(int len = 10);

	IntArray(const IntArray& arr);

	~IntArray();

	IntArray& operator=(const IntArray& arr);

	int& operator[](int index);

	void Swap(int ind1, int ind2);

	int Length();

	bool IsSorted();

	void Mix();

	friend std::ostream& operator<<(std::ostream& stream, const IntArray& a);
};

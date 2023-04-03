#include<iostream>

class A {
private:
	int data;
public:
	A(int data) : data(data) {}
	int getData() { return data; }
	friend class B;
	friend void printSum(A a, B b);
};

class B {
private:
	int data;
public:
	B(int data) : data(data) {}
	void printSumAB(A& a)
	{
		std::cout << data + a.data << std::endl;
	}
	friend void printSum(A a, B b);
};

void printSum(A a, B b)
{
	std::cout << 2 * a.data + b.data << std::endl;
}

int main()
{
	A a(3);
	B b(6);
	b.printSumAB(a);
	printSum(a, b);
	return 0;
}
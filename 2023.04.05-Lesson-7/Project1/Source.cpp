#include<iostream>

class A;
class B;

class A {
private:
	int data;

public:
	A(int data = 0) : data(data) {}
	A(const A& a) : data(a.data) {}
	~A() {}
	int getData() { return data; }

	friend class B;
	friend void printSum(A a, B b);
};

class B {
private:
	int data;

public:
	B(int data = 0) : data(data) {}
	B(const B& b) : data(b.data) {}
	~B() {}
	int getData() { return data; }
	void setData(int data) 
	{
		if (data > 0)
		{
			this->data = data; 
		}
	}

	friend class A;
	friend void printSum(A a, B b);
};

void printSum(A a, B b)
{
	int c = a.data + b.data;
	std::cout << c << std::endl;
}

int main()
{
	A a(3);
	B b(6);
	printSum(a, b);
	return 0;
}
#include<iostream>

struct Rectangle {
	int a;
	int b;
	Rectangle(int a = 0, int b = 0) : a(a), b(b) {}
	int S()
	{
		return a * b;
	}
};

struct Square : Rectangle
{
	Square(int a = 0) : Rectangle(a, a) {};
};


int main()
{
	Rectangle sq;
	sq.a = 5;

	Rectangle rect;
	rect.a = 2;
	rect.b = 8;

	return 0;
}
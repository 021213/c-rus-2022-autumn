#include<iostream>

struct Point {
	int x;
	int y;

	Point(int x = 0, int y = 0) : x(x), y(y) {}
	/*
	Point(int x = 0, int y = 0)
	{
		(*this).x = x;
		this->y = y;
	}
	*/
	Point(const Point& p) : x(p.x), y(p.y) {}
	~Point() {}

};

void print(Point p)
{
	std::cout << p.x << " " << p.y << std::endl;
}

int main(int argc, char* argv[])
{
	Point p1(3, 2);
	Point p2(5);
	Point p3;
	print(p1);
	return EXIT_SUCCESS;
}
#include<iostream>
#include"Point.h"

void printPoint(Point p)
{
	std::cout << "(" << p.x << "; " << p.y << ")";
}

int main(int argc, char* argv[])
{
	Point p1(3, 2);
	Point p2(p1);
	Point p3 = p1;
	Point p4;
	p4 = p3 * 4 + 3 * p2;
	printPoint(p4);
	p3 = p4 = p2;
	return EXIT_SUCCESS;
}

/*
(1 + 2) * 3 - 4 * (5 + 6)
1 2 + 3 * 4 5 6 + * -

S
1 2
3 3
9 4 5 6 
9 4 11
9 44
-35











*/
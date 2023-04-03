#pragma once
#include<iostream>
class Point
{
private:
public:
	int x;
	int y;
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	Point(const Point& point) : x(point.x), y(point.y) {}
	~Point() {}
	Point operator+(Point p)
	{
		Point res(x + p.x, y + p.y);
		return res;
	}
	Point operator*(int m)
	{
		return Point(x * m, y * m);
	}
	Point& operator=(const Point& p)
	//Point operator=(Point p)
	{
		x = p.x;
		y = p.y;
		return *this;
	}
	friend Point operator*(int m, Point p)
	{
		return p * m;
	}
	friend int operator*(Point p1, Point p2)
	{
		return p1.x * p2.x + p1.y * p2.y;
	}
	int operator*(Point p2)
	{
		return this->x * p2.x + this->y * p2.y;
	}
};


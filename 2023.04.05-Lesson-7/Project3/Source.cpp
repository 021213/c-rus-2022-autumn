#include<iostream>
#include<fstream>

struct Point
{
	int x;
	int y;
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	Point(const Point& point) : x(point.x), y(point.y) {}
	friend std::ostream& operator<<(std::ostream& stream, const Point& point)
	{
		stream << "(" << point.x << "; " << point.y << ")";
		return stream;
	}
};

int main(int argc, char* argv[])
{
	Point p1(32142154, 15432522);
	std::cout << "p1 " << p1 << std::endl;
	std::ofstream fout("file.bin", std::ios::binary);
	fout.write((char*)&p1, sizeof(Point));
	fout.close();

	Point p2;
	std::cout << "p2 " << p2 << std::endl;
	std::ifstream fin("file.bin", std::ios::binary);
	fin.read((char*)&p2, sizeof(Point));
	fin.close();
	std::cout << "p2 " << p2 << std::endl; 
	return EXIT_SUCCESS;
}

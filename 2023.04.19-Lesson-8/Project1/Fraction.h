#pragma once
#include<cmath>
#include<ostream>
class Fraction
{
private:
	int a;
	int b;

	int gcd(int a, int b);
	void normalize();

public:
	Fraction(int num = 0, int den = 1) : a(num), b(den) { normalize(); }
	Fraction(const Fraction& fr) : a(fr.a), b(fr.b) { normalize(); }
	~Fraction() {};

	Fraction operator=(const Fraction& fr);

	Fraction operator+(const int& n);
	Fraction operator-(const int& n);
	Fraction operator*(const int& n);
	Fraction operator/(const int& n);

	friend Fraction operator+(const int& n, const Fraction& fr);
	friend Fraction operator-(const int& n, const Fraction& fr);
	friend Fraction operator*(const int& n, const Fraction& fr);
	friend Fraction operator/(const int& n, const Fraction& fr);
	
	Fraction operator+(const Fraction& fr);
	Fraction operator-(const Fraction& fr);
	Fraction operator*(const Fraction& fr);
	Fraction operator/(const Fraction& fr);

	friend std::ostream& operator<<(std::ostream& stream, const Fraction& fr);
	
};


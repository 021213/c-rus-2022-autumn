#include "Fraction.h"

int Fraction::gcd(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a * b == 0)
	{
		return a + b;
	}
	if (a > b)
	{
		return gcd(b, a);
	}
	return gcd(a, b % a);
}

void Fraction::normalize()
{
	if (a > 0 && b < 0)
	{
		a = -a;
		b = -b;
	}
	if (a < 0 && b < 0)
	{
		a = abs(a);
		b = abs(b);
	}
	if (b == 0)
	{
		a = 1;
	}
	int g = gcd(a, b);
	a /= g;
	b /= g;
}

Fraction Fraction::operator=(const Fraction& fr)
{
	this->a = fr.a;
	this->b = fr.b;
	normalize();
	return *this;
}

Fraction Fraction::operator+(const int& n)
{
	return Fraction(a + n * b, b);
}
Fraction Fraction::operator-(const int& n)
{
	return Fraction(a - n * b, b);
}
Fraction Fraction::operator*(const int& n)
{
	return Fraction(a * n, b);
}
Fraction Fraction::operator/(const int& n)
{
	return Fraction(a, b * n);
}

Fraction Fraction::operator+(const Fraction & fr)
{
	return Fraction(a * fr.b + b * fr.a, b * fr.b);
}
Fraction Fraction::operator-(const Fraction & fr)
{
	return Fraction(a * fr.b - b * fr.a, fr.a * fr.b);
}
Fraction Fraction::operator*(const Fraction & fr)
{
	return Fraction(a * fr.a, b * fr.b);
}
Fraction Fraction::operator/(const Fraction & fr)
{
	return Fraction(a * fr.b, b * fr.a);
}

Fraction operator+(const int & n, const Fraction & fr)
{
	return Fraction(fr.a + fr.b * n, fr.b);
}
Fraction operator-(const int & n, const Fraction & fr)
{
	return Fraction(n * fr.b - fr.a, fr.b);
}
Fraction operator*(const int & n, const Fraction & fr)
{
	return Fraction(fr.a * n, fr.b);
}
Fraction operator/(const int & n, const Fraction & fr)
{
	return Fraction(fr.b * n, fr.a);
}

std::ostream & operator<<(std::ostream & stream, const Fraction & fr)
{
	stream << "{" << fr.a << "/" << fr.b << "}";
	return stream;
}


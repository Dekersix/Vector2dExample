#include "Vector2d.h"
#include <cstring>
#include <cmath>
using namespace std;
Vector2D::Vector2D(double x, double y)
{	
	this->x = x;
	this->y = y;
}
Vector2D::Vector2D(double x0, double x1, double y0, double y1)
{
	this->x = x1 - x0;
	this->y = y1 - y0;
}
Vector2D::Vector2D(const Vector2D& obj) 
{
	this->x = obj.x;
	this->y = obj.y;
}
void Vector2D::sum(Vector2D b)
{
	x = x + b.x;
	y = y + b.y;
}
void Vector2D::sub(Vector2D b)
{
	x = x - b.x;
	y = y - b.y;
}
void Vector2D::ScalarMul(Vector2D b)
{
	x = x * b.x;
	y = y * b.y;
}
void Vector2D::mult(double b)
{
	x = x * b;
	y = y * b;
}
double Vector2D::Length()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
double Vector2D::tg(Vector2D b, Vector2D a)
{
	double len1 = a.Length();
	double len2 = b.Length();
	double multi = b.ScalarMul;
	double cos = multi / (len1 * len2);
	double sin = sqrt(1 - pow(cos, 2));
	return sin / cos;
}
Vector2D Vector2D::operator+(const Vector2D& v) const
{
	return Vector2D(x + v.x, y + v.x);
}
Vector2D Vector2D::operator-(const Vector2D & v) const
{
	return Vector2D(x - v.x, y - v.x);
}
Vector2D Vector2D::operator*(const double& v) const
{
	return Vector2D(x * v, y * v);
}
Vector2D Vector2D::operator*(const double& v) const
{
	return Vector2D(x * v, y * v);
}
Vector2D operator*(const double r, Vector2D b)
{
	return Vector2D(r * b.x, r * b.y);
}
Vector2D& Vector2D::operator++()
{
	x++;
	y++;
	return *this;
}

Vector2D& Vector2D::operator++(int)
{
	Vector2D temp(x, y);
	x++;
	y++;
	return temp;
}

Vector2D& Vector2D::operator--()
{
	x--;
	y--;
	return *this;
}
Vector2D& Vector2D::operator--(int)
{
	Vector2D temp(x, y);
	x--;
	y--;
	return temp;
}
const Vector2D& Vector2D::operator+= (const Vector2D& v) 
{
	x += v.x;
	y += v.y;
	return *this;
}
const Vector2D& Vector2D::operator-= (const Vector2D& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

const Vector2D& Vector2D::operator*= (const double& v)
{
	x *= v;
	y *= v;
	return *this;
}
Vector2D::operator string()
{
	string s = "(" + to_string(x) + ";" + to_string(y) + ")";
	return s;
}


#include "Vector2d.h"
#include <cstring>
#include <cmath>
using namespace std;
Vector2d::Vector2d(double x, double y)
{	
	this->x = x;
	this->y = y;
}
Vector2d::Vector2d(double x0, double x1, double y0, double y1)
{
	this->x = x1 - x0;
	this->y = y1 - y0;
}
Vector2d::Vector2d(const Vector2d& obj) 
{
	this->x = obj.x;
	this->y = obj.y;
}
void Vector2d::setx(double x)
{
	this->x = x;
}
double Vector2d::getx()
{
	return this->x;
}
void Vector2d::sety(double)
{
	this->y = y;
}
double Vector2d::gety()
{
	return this->y;
}
void Vector2d::sum(Vector2d b)
{
	x = x + b.x;
	y = y + b.y;
}
void Vector2d::sub(Vector2d b)
{
	x = x - b.x;
	y = y - b.y;
}
void Vector2d::ScalarMul(Vector2d b)
{
	x = x * b.x;
	y = y * b.y;
}
void Vector2d::mult(double b)
{
	x = x * b;
	y = y * b;
}
double Vector2d::Length()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
double Vector2d::tg(Vector2d b, Vector2d a)
{
	double len1 = a.Length;
	double len2 = b.Length;
	double multi = b.ScalarMul;
	double cos = multi / (len1 * len2);
	double sin = sqrt(1 - pow(cos, 2));
	return sin / cos;
}
Vector2d::~Vector2d()
{
}

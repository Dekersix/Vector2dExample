#pragma once
class Vector2D
{
private: 
	double x, y;

public:
	Vector2D() { x = 0; y = 0; };
	Vector2D(double, double);
	Vector2D(double, double, double, double);
	Vector2D(const Vector2D&);
	void setx(double value) { x = value; }
	double getx() { return x; }
	void sety(double value) { y = value; }
	double gety() { return y; }
	void sum(Vector2D);
	void sub(Vector2D);
	void ScalarMul(Vector2D);
	void mult(double);
	double Length();
	double tg(Vector2D, Vector2D);
	void print(void);
	Vector2D operator+(const Vector2D& v) const;
	Vector2D operator-(const Vector2D& v) const;
	double operator*(const Vector2D& v) const;
	Vector2D operator*(const double& v) const;
	Vector2D& operator++();
	Vector2D& operator++(int);
	Vector2D& operator--();
	Vector2D& operator--(int);
	const Vector2D& operator += (const Vector2D& v);
	const Vector2D& operator -= (const Vector2D& v);
	const Vector2D& operator *= (const double& v);
	operator string();
};


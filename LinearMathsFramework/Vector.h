#pragma once

#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>

class Vector
{
private:
	int dimentions;
};


class Vector2 : public Vector
{
private:
	double m_x;
	double m_y;

public:
	Vector2() : m_x(0), m_y(0) {};
	Vector2(double x, double y);
	double getX() const { return m_x; }
	double getY() const { return m_y; }
	void setXY(double x, double y) {}

	double getMagnitude();

	Vector2 add(Vector2 other);
	Vector2 sub(Vector2 other);
	Vector2 mul(double scalar);
	Vector2 normalised();
	void setNormal();
	std::string toString();

};

Vector2 VectorRotate(Vector2 vec, double angle);
double DotProduct(Vector2 a, Vector2 b);
double VectorAngle(Vector2 a, Vector2 b);
double RadToDeg(double rad);

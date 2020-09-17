#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>


class Vector2
{
private:


public:
	double x, y;
	Vector2();
	Vector2(double x, double y);
	double getX() const { return x; }
	double getY() const { return y; }
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

#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>


class Vector2
{
private:
	double vals[2];

public:
	double& x = vals[0];
	double& y = vals[1];
	Vector2();
	Vector2(double x, double y);

	double getMagnitude();

	Vector2 operator+(const Vector2& other);
	Vector2 operator-(const Vector2& other);
	Vector2 operator*(const double& scalar);

	Vector2 add(const Vector2& other);
	Vector2 sub(const Vector2& other);
	Vector2 mul(const double& scalar);
	Vector2 normalised();
	void setNormal();
	std::string toString();

	

};

Vector2 VectorRotate(Vector2 vec, double angle);
double DotProduct(Vector2 a, Vector2 b);
double VectorAngle(Vector2 a, Vector2 b);
double RadToDeg(double rad);

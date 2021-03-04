// Vector2.h - Contains declarations of math functions
#pragma once

#ifdef ARCDAN_EXPORTS
#define ARCDAN_API __declspec(dllexport)
#else
#define ARCDAN_API __declspec(dllimport)
#endif

#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>


class ARCDAN_API Vector2
{
private:
	double vals[2] = {0, 0};

public:
	double& x = vals[0];
	double& y = vals[1];
	Vector2();
	Vector2(double x, double y);

	const double getMagnitude() const;

	Vector2 operator+(const Vector2& other);
	Vector2 operator-(const Vector2& other);
	Vector2 operator*(const double& scalar);
	const bool operator==(const Vector2& other)  const;

	void operator=(const Vector2& other);
	void operator+=(const Vector2& other);
	void operator-=(const Vector2& other);
	void operator*=(const float& scalar);
	void operator/=(const float& scalar);

	const bool equals(const Vector2& other)  const;
	Vector2 add(const Vector2& other);
	Vector2 sub(const Vector2& other);
	Vector2 mul(const double& scalar);
	Vector2 div(const double& scalar);
	void assign(const Vector2& other);


	Vector2 normalised();
	void setNormal();
	std::string toString();



};

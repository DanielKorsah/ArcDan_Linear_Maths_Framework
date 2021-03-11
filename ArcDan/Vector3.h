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


class ARCDAN_API Vector3
{
private:
	double vals[3] = { 0, 0, 0 };

public:
	double& x = vals[0];
	double& y = vals[1];
	double& z = vals[2];
	Vector3();
	Vector3(double x, double y, double c);

	const double getMagnitude() const;

	Vector3 operator+(const Vector3& other);
	Vector3 operator-(const Vector3& other);
	Vector3 operator*(const double& scalar);
	const bool operator==(const Vector3& other)  const;

	void operator=(const Vector3& other);
	void operator+=(const Vector3& other);
	void operator-=(const Vector3& other);
	void operator*=(const float& scalar);
	void operator/=(const float& scalar);

	const bool equals(const Vector3& other)  const;
	Vector3 add(const Vector3& other);
	Vector3 sub(const Vector3& other);
	Vector3 mul(const double& scalar);
	Vector3 div(const double& scalar);
	void assign(const Vector3& other);


	Vector3 normalised();
	void setNormal();
	std::string toString();



};

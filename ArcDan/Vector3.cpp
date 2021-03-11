// Vector3.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "Vector3.h"

// DLL internal state variables:
static unsigned long long previous_;  // Previous value, if any
static unsigned long long current_;   // Current sequence value
static unsigned index_;               // Current seq. position



Vector3::Vector3() {
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

Vector3 Vector3::operator+(const Vector3& other)
{
	return add(other);
}

Vector3 Vector3::operator-(const Vector3& other)
{
	return sub(other);
}

Vector3 Vector3::operator*(const double& scalar)
{
	return mul(scalar);
}


const bool Vector3::operator==(const Vector3& other) const
{
	return equals(other);
}


void Vector3::operator=(const Vector3& other)
{
	assign(other);
}

void Vector3::operator+=(const Vector3& other)
{
	assign(add(other));
}

void Vector3::operator-=(const Vector3& other)
{
	assign(sub(other));
}

void Vector3::operator*=(const float& scalar)
{
	assign(mul(scalar));
}

void Vector3::operator/=(const float& other)
{
	assign(div(other));
}



Vector3 Vector3::add(const Vector3& other)
{
	return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::sub(const Vector3& other)
{
	return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::mul(const double& scalar)
{
	return Vector3(x * scalar, y * scalar, z * scalar);
}

Vector3 Vector3::div(const double& scalar)
{
	return Vector3(x / scalar, y / scalar, z / scalar);
}

const bool Vector3::equals(const Vector3& other) const
{
	if (x == other.x && y == other.y && z == other.z)
		return true;
	else
		return false;
}

void Vector3::assign(const Vector3& other)
{
	x = other.x;
	y = other.y;
	z = other.y;
}



const double Vector3::getMagnitude() const
{
	//|v| = sqrt(a^2 + b^2 + c^2)
	return(sqrt((x * x) + (y * y) + (z * z)));
}

Vector3 Vector3::normalised()
{
	double mag = getMagnitude();
	return Vector3(x / mag, y / mag, z/mag);

}

void Vector3::setNormal()
{
	double mag = getMagnitude();
	x = x / mag;
	y = y / mag;
	z = z / mag;

}

std::string Vector3::toString()
{
	return "(" + std::to_string(x) + ", " + std::to_string(y) + "," + std::to_string(z) + ")";
}

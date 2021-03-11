
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#define _USE_MATH_DEFINES
#include <cmath>
#include <utility>
#include <limits.h>

#include "LinearMaths.h"



// DLL internal state variables:
static unsigned long long previous_;  // Previous value, if any
static unsigned long long current_;   // Current sequence value
static unsigned index_;               // Current seq. position


Vector2 VectorRotate(const Vector2& vec, const double& angle)
{
	//x` = xcos(ang) - ysin(ang)
	//y` = xsin(ang) + ycos(ang)
	double x = vec.x;
	double y = vec.y;
	return Vector2(x * cos(angle) - y * sin(angle), x * sin(angle) + y * cos(angle));
}

double DotProduct(const Vector2& a, const Vector2& b)
{
	return a.x * b.x + a.y * b.y;
}

double DotProduct(const Vector3& a, const Vector3& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

double VectorAngle(const Vector2& a, const Vector2& b)
{
	//cos(ang) = a.b/mag(a)*mag(b)
	double cosAng = DotProduct(a, b) / (a.getMagnitude() * b.getMagnitude());
	//ang = cos^-1(a.b/mag(a)*mag(b))
	return acos(cosAng);
}

double VectorAngle(const Vector3& a, const Vector3& b)
{
	//cos(ang) = a.b/mag(a)*mag(b)
	double cosAng = DotProduct(a, b) / (a.getMagnitude() * b.getMagnitude());
	//ang = cos^-1(a.b/mag(a)*mag(b))
	return acos(cosAng);
}

double RadToDeg(const double& rad)
{
	return rad * (180 / M_PI);
}

double DegToRad(const double& deg)
{
	return deg * (M_PI / 180);
}
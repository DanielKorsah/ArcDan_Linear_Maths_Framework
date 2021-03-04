#include "LinearMaths.h"

//Sorry this is a really cheesy way of rotating. I didn't want to have to implement a whole matrix class with operation included.
Vector2 VectorRotate(Vector2 vec, double angle)
{
	//x` = xcos(ang) - ysin(ang)
	//y` = xsin(ang) + ycos(ang)
	double x = vec.x;
	double y = vec.y;
	return Vector2(x * cos(angle) - y * sin(angle), x * sin(angle) + y * cos(angle));
}

double DotProduct(Vector2 a, Vector2 b)
{
	return a.x*b.x + a.y*b.y;
}

double VectorAngle(Vector2 a, Vector2 b)
{
	//cos(ang) = a.b/mag(a)*mag(b)
	double cosAng = DotProduct(a, b) / (a.getMagnitude() * b.getMagnitude());
	//ang = cos^-1(a.b/mag(a)*mag(b))
	return acos(cosAng);
}

double RadToDeg(double rad)
{
	return rad * (180/M_PI);
}
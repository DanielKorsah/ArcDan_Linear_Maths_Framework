#include "LinearMaths.h"


Vector2::Vector2(double x, double y) {
	m_x = x;
	m_y = y;
}

Vector2 Vector2::add(Vector2 other) {
	return Vector2(m_x + other.getX(), m_y + other.getY());
}

Vector2 Vector2::sub(Vector2 other) {
	return Vector2(m_x - other.getX(), m_y - other.getY());
}

Vector2 Vector2::mul(double scalar)
{
	return Vector2(m_x * scalar, m_y * scalar);
}

double Vector2::getMagnitude()
{
	//c^2 = a^2 + b^2
	return( sqrt( (m_x * m_x) + (m_y * m_y) ) );
}

Vector2 Vector2::normalised()
{
	double mag = getMagnitude();
	return Vector2(m_x / mag, m_y / mag);

}

void Vector2::setNormal()
{
	double mag = getMagnitude();
	m_x = m_x / mag;
	m_y = m_y / mag;

}

std::string Vector2::toString()
{
	return "(" + std::to_string(m_x) + ", " + std::to_string(m_y) + ")";
}

//Sorry this is a really cheesy way of rotating. I didn't want to have to implement a whole matrix class with operation included.
Vector2 VectorRotate(Vector2 vec, double angle)
{
	//x` = xcos(ang) - ysin(ang)
	//y` = xsin(ang) + ycos(ang)
	double x = vec.getX();
	double y = vec.getY();
	return Vector2(x * cos(angle) - y * sin(angle), x * sin(angle) + y * cos(angle));
}

double DotProduct(Vector2 a, Vector2 b)
{
	return a.getX()*b.getX() + a.getY()*b.getY();
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
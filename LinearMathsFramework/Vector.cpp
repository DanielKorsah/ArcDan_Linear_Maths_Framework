#include "Vector.h"

Vector2::Vector2() {
	m_x = 0;
	m_y = 0;
	m_dimensions = 2;
}

Vector2::Vector2(double x, double y) {
	m_x = x;
	m_y = y;
	m_dimensions = 2;
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
	return(sqrt((m_x * m_x) + (m_y * m_y)));
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

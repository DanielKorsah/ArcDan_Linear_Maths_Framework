#include "Vector2.h"



Vector2::Vector2() {
	x = 0;
	y = 0;
}

Vector2::Vector2(double a, double b) {
	x = a;
	y = b;
}

Vector2 Vector2::operator+(const Vector2& other)
{
	return add(other);
}

Vector2 Vector2::operator-(const Vector2& other)
{
	return sub(other);
}

Vector2 Vector2::operator*(const double& scalar)
{
	return mul(scalar);
}


Vector2 Vector2::add(const Vector2& other) {
	return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::sub(const Vector2& other) {
	return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::mul(const double& scalar)
{
	return Vector2(x * scalar, y * scalar);
}

double Vector2::getMagnitude()
{
	//c^2 = a^2 + b^2
	return(sqrt((x * x) + (y * y)));
}

Vector2 Vector2::normalised()
{
	double mag = getMagnitude();
	return Vector2(x / mag, y / mag);

}

void Vector2::setNormal()
{
	double mag = getMagnitude();
	x = x / mag;
	y = y / mag;

}

std::string Vector2::toString()
{
	return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}


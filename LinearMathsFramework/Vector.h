#pragma once

#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>

//templates must be wholy defined in teh header file


template<int dimensions>
class Vector
{
private:
	double elements[dimensions];
public:
	/*bool operator+(const Vector2& other);
	bool operator-(const Vector2& other);
	bool operator*(const int scalar);*/

	//constructors
	Vector()
	{
		for (int i = 0; i < dimensions; i++)
		{
			elements[i] = 0;
		}
	};
	Vector(double a, double b)
	{
		elements[0] = a;
		elements[1] = b;
	};


	std::string toString()
	{
		int arrSize = sizeof(elements) / sizeof(elements[0]);
		std::string out = "(";
		for (int i = 0; i < arrSize - 1; i++)
		{
			out += std::to_string(elements[i]) + ",";
		}
		out += std::to_string(elements[arrSize - 1]);
		out += ")";

		return out;
	};
};

#pragma once

#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <cstdlib>

//templates must be wholy defined in teh header file

template <int dimensions>
class Vector
{
public:
	double elements[dimensions];
	/*bool operator+(const Vector2& other);
	bool operator-(const Vector2& other);
	bool operator*(const int scalar);*/

	//constructors
	/*Vector()
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
	Vector(double a, double b)
	{
		elements[0] = a;
		elements[1] = b;
	};*/

	Vector()
	{
		Vector<dimensions> out = Vector<dimensions>();
		for (int i = 0; i < dimensions; i++)
		{
			out.elements[i] = 0;
		}
		return &out;
	}

	void init(int index)
	{
	}

	template <typename Head, typename Tail>
	void init(int index, Head const &head, Tail const &...tail)
	{
		index++;
		if (sizeof...(tail))
		{
			elements[index] = head;
		}
		init(index, tail...);

		template <typename... Args>
		Vector(Args... args)
		{
			init<dimensions>(0, args...);
		}

		//operators
		Vector operator+(const Vector &other)
		{
			return add(other);
		}
		Vector operator-(const Vector &other)
		{
			return sub(other);
		}
		Vector operator*(const double &scalar)
		{
			return mul(scalar);
		}

		Vector add(const Vector &other)
		{
			Vector<dimensions> out = Vector<dimensions>();
			for (int i = 0; i < dimensions; i++)
			{
				out.elements[i] = this->elements[i] + other.elements[i];
			}
			return out;
		}
		Vector sub(const Vector &other)
		{
			Vector<dimensions> out = Vector<dimensions>();
			for (int i = 0; i < dimensions; i++)
			{
				out.elements[i] = this->elements[i] - other.elements[i];
			}
			return out;
		}

		Vector mul(const double &scalar)
		{
			Vector<dimensions> out = Vector<dimensions>();
			for (int i = 0; i < dimensions; i++)
			{
				out.elements[i] = this->elements[i] * scalar;
			}
			return out;
		}
		Vector normalised();

		//tostring
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
};

// mathematical operations
#pragma once

#ifdef ARCDAN_EXPORTS
#define ARCDAN_API __declspec(dllexport)
#else
#define ARCDAN_API __declspec(dllimport)
#endif

#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include "Vector2.h"
#include "Vector3.h"


extern Vector2 ARCDAN_API VectorRotate(const Vector2& vec, const double& angle);
extern double ARCDAN_API DotProduct(const Vector2& a, const Vector2& b);
extern double ARCDAN_API VectorAngle(const Vector2& a, const Vector2& b);

//extern Vector3 ARCDAN_API VectorRotate(const Vector3& vec, const double& angle);
extern double ARCDAN_API DotProduct(const Vector3& a, const Vector3& b);
extern double ARCDAN_API VectorAngle(const Vector3& a, const Vector3& b);


extern double ARCDAN_API RadToDeg(const double& rad);
extern double ARCDAN_API DegToRad(const double& deg);


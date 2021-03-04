// ArcDan_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include "LinearMaths.h"
#include <assert.h>

using namespace std;

int main()
{
	cout << "Vector2 Tests" << endl;
	Vector2 a = Vector2(1, 0);
	Vector2 b = Vector2(0, 1);

	cout << "a: " << a.toString() << endl;
	cout << "b: " << b.toString() << endl;

	cout << "a+b: " << (a + b).toString() << endl;
	cout << "a-b: " << (a - b).toString() << endl;
	cout << "a.b: " << DotProduct(a, b) << endl;

	a *= 5;
	cout << "a * 5: " << a.toString() << endl;
	
	Vector2 x = VectorRotate(a, 0.5 * M_PI);
	Vector2 y = VectorRotate(a, DegToRad(90));
	cout << "rotate a by 1/4Pi Radians: " << x.toString() << endl;
	cout << "rotate a by 90 Degrees: " << y.toString() << endl;
	cout << "Do  those two operations give the same output? " << (x == y) << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include "Triangle.h"
#include <iostream>
#include <cmath>


Triangle::Triangle()
{
}

Triangle::Triangle(int X, int Y) : Polygon(X, Y)
{
	NumbersOfSides = 3;
}

Triangle::Triangle(int X, int Y, double Height) : Polygon(3, X, Y)
{
	this->Height = Height;
}

double Triangle::Area()
{
	return Sides[0] * Height / 2;
}


Triangle::~Triangle()
{
}
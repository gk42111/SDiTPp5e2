#include "EquilateralTriangle.h"
#include <cmath>

EquilateralTriangle::EquilateralTriangle(int X, int Y, double Side) : Triangle(X,Y)
{
	this->Side = Side;
	Sides = new double[NumbersOfSides];
	for (int i = 0; i < NumbersOfSides; i++)
	{
		Sides[i] = Side;
	}
}

double EquilateralTriangle::Area()
{
	return Side * Side *sqrt(3) / 4;
}

EquilateralTriangle::~EquilateralTriangle()
{
}

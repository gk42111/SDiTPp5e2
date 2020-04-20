#pragma once
#include "Triangle.h"
class EquilateralTriangle : Triangle
{
private:
	double Side;
public:
	EquilateralTriangle(int,int,double);
	double Area();
	~EquilateralTriangle();
};


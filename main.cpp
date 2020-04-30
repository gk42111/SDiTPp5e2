#include <iostream>
#include "EquilateralTriangle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Polygon.h"
using namespace std;

int main() {
	EquilateralTriangle t(1, 2, 3);
	cout << t.Area();

	system("pause");
	return 0;
}

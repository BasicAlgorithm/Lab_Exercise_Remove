#include "pch.h"
#include "Vector.h"
#include <iostream>
#include <math.h>

Vector::Vector(Point s, Point e)
{
	start = s;
	endd = e;
}

Vector::Vector(Vector &o)
{
	start = o.start;
	endd = o.endd;
}

Vector::Vector()
{
	start = Point();
	endd = Point();
}

void Vector::offset(int x, int y) {
	start.offset(x, y);
	endd.offset(x, y);
}

void Vector::print() {
	start.print();
	std::cout << " -> ";
	endd.print();
	std::cout << std::endl;
}

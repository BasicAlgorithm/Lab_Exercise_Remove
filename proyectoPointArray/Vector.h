#ifndef VECTOR_H
#define VECTOR_H

#include "Point.h"

class Vector {
public:
	Vector();
	Vector(Vector &o);
	Vector(Point s, Point e);
	void offset(int, int);
	void print();
	//double modulo();

protected:

private:
	Point start, endd;
};

#endif // VECTOR_H

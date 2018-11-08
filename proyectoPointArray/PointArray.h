#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"

class PointArray {
public:
	PointArray();
	PointArray(const Point pts[], const int size);
	PointArray(PointArray &o);
	
	~PointArray();

	int getSize();
	void clear();
	void print();
	void push_back(const Point &p);
	void insert(const int, const Point &p);
	void remove(const int);

protected:

private:
	int size;
	Point *points;
	void resize(int);
		
};

#endif // POINTARRAY_H

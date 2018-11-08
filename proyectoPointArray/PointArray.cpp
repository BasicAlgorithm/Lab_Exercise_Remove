#include "pch.h"
#include "PointArray.h"
#include <iostream>

using namespace std;

PointArray::PointArray() 
{
	this->size = 0;
	this->points = new Point[size];
}

PointArray::PointArray(const Point pts[], const int size) 
{
	this->size = size;
	this->points = new Point[size];
	for (int i = 0; i < size; i++) {
		points[i] = pts[i];
	}
}

PointArray::PointArray(PointArray &o) 
{
	this->size = o.size;
	this->points = new Point[size];
	for (int i = 0; i < size; i++) {
		points[i] = o.points[i];
	}
}

void PointArray::resize(int newSize) 
{
	Point *pts = new Point[newSize];
	int minsize = (newSize > size) ? size : newSize;
	for (int i = 0; i < minsize; i++) {
		pts[i] = points[i];
	}
	Point *sss = points;
	points = pts;
	delete[] sss;
	size = newSize;
}

int PointArray::getSize() 
{
	return size;
}

void PointArray::clear()
{
	resize(0);
}

void PointArray::print() 
{
	for (int i = 0; i < size; i++) {
		points[i].print();
	}
}

void PointArray::push_back(const Point &p)
{
	resize(size + 1);
	points[size - 1] = p;
}

void PointArray::insert(const int pos, const Point & p)
{	
	resize(size + 1);
	Point *pts = new Point[size];
	int w = 0;
	for (int i = 0; i < size; i++) {
		if (i == pos) {
			pts[i] = p;
			continue;
		}
		pts[i] = points[w];
		w++;
	}
	
	Point *sss = points;
	points = pts;
	delete[] sss;
	
	//teacher's code
	/*for (int i = size - 1; i < pos; i--)
		points[i] = points[i - 1];
	points[pos] = p;*/
}


///////////// TAREA DE LABORATORIO  /////////////////


void PointArray::remove(const int pos)
{
	Point *pts = new Point[size-1];
	int w = 0;
	for (int i = 0; i < size; i++) {
		if (i == pos) continue;
		pts[w] = points[i];
		w++;
	}

	Point *sss = points;
	points = pts;
	delete[] sss;
	size--;
}

PointArray::~PointArray()
{
	delete[] points;
}

/////// TESTING /////////
#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;



class Point
{
public:
	Point(float xh, float yh) {
		this->x = xh;
		this->y = yh;
	}

	Point(Point &k) {
		this->x = k.x;
		this->y = k.y;
	}

	Point()
	{
		this->x = 0;
		this->y = 0;
	}

	void offset(float nx, float ny) {
		this->x += nx;
		this->y += ny;
	}

	void print() {
		std::cout << "(" << x << "," << y << ")";
	}

	float getx() {
		return x;
	}

	float gety() {
		return y;
	}

	void setx(float newx) {
		this->x = newx;
	}

	void sety(float newy) {
		this->y = newy;
	}

	float x, y;

protected:

private:

};

static Point operator+(const Point& a, const Point& b) {
	Point tmp = { 0,0 };
	tmp.x = a.x + b.x;
	tmp.y = a.y + b.y;
	return tmp;
}

static ostream& operator<<(ostream& out, Point& a) {
	out << "("<<a.x <<","<< a.y<<")";
	return out;
}

static Point operator*=(const Point&a, const Point&b){
	Point tmp = { 0,0 };
	tmp.x = a.x * b.x;
	tmp.y = a.y * b.y;
	return tmp;

}

#endif // POINT_H

#include "pch.h"
#include <iostream>
#include "Point.h"
#include "PointArray.h"
#include "Vector.h"

using namespace std;

//chapters 3,9,10,11

void swap(Point &x, Point &y) {
	Point z = x;
	x = y;
	y = z;
}

void swap(Point *x, Point *y) {
	Point z = *x;
	*x = *y;
	*y = z;
}

int main() {
	
	char cadenas[][20] = { "science","computation","algorithm" };


	



	/*Point p(1, 3);
	Point q(3, 3);
	Point r(3, 1);
	Point arr[] = {p,q,r};
	Point t(9, 9);

	PointArray pa2(arr, 3);

	PointArray pa = pa2;
	
	cout << "main array of ArrayPoint" << endl;
	pa.print();
	cout << endl << endl;
	
	cout << "push_back to last position (9,9)" << endl;
	pa.push_back(t);
	pa.print();
	cout << endl;
	cout << pa.getSize() << endl;
	cout << endl;

	cout << "insert" << endl;
	pa.insert(1, t);
	pa.print();
	cout << endl;
	cout << pa.getSize() << endl;
	cout << endl;
	
	cout << "remove" << endl;
	pa.remove(0);
	pa.print();
	cout << endl;
	cout << pa.getSize() << endl;*/

	return 0;
}

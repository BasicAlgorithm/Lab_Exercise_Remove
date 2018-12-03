#ifndef SUPERARRAY_H
#define SUPERARRAY_H

#include <iostream>

using namespace std;


template <typename U>
class SuperArray {
public:
	SuperArray()
	{
		this->size = 0;
		this->ArrayInterno = new U[size];
	}
	SuperArray(const U pts[], const int newSize)
	{
		this->size = newSize;
		this->ArrayInterno = new U[size];
		for (int i = 0; i < size; i++) {
			ArrayInterno[i] = pts[i];
		}
	}
	SuperArray(SuperArray &o)
	{
		this->size = o.size;
		this->ArrayInterno = new U[size];
		for (int i = 0; i < size; i++) {
			this->ArrayInterno[i] = o.ArrayInterno[i];
		}
	}
	
	~SuperArray() { delete[] ArrayInterno; }

	int getSize() { return size; }
	void clear() { resize(0); }
	void print()
	{
		for (int i = 0; i < size; i++) 
			ArrayInterno[i].print();
	}
	void push_back(const U &p)
	{
		resize(size + 1);
		ArrayInterno[size - 1] = p;
	}
	void insert(const int pos, const U &p)
	{
		resize(size + 1);
		U *pts = new U[size];
		int w = 0;
		for (int i = 0; i < size; i++) {
			if (i == pos) {
				pts[i] = p;
				continue;
			}
			pts[i] = ArrayInterno[w];
			w++;
		}

		delete ArrayInterno;
		ArrayInterno = pts;
	}
	void remove(const int pos)
	{
		U *pts = new U[size - 1];
		int w = 0;
		for (int i = 0; i < size; i++) {
			if (i == pos) continue;
			pts[w] = ArrayInterno[i];
			w++;
		}

		U *sss = ArrayInterno;
		ArrayInterno = pts;
		delete[] sss;
		size--;
	}

	int size;
	U *ArrayInterno;
	void resize(int newSize)
	{
		U *pts = new U[newSize];
		int minsize = (newSize > size) ? size : newSize;
		for (int i = 0; i < minsize; i++) {
			pts[i] = ArrayInterno[i];
		}
		delete[] ArrayInterno;
		ArrayInterno = pts;
		size = newSize;
	}
	
protected:

private:
		
};


template <typename U >
static SuperArray<U> operator+(const SuperArray<U>& a, const SuperArray<U>& b) {
	int tmpsize = a.size + b.size;
	SuperArray<U> xtmp;
	xtmp.resize(tmpsize);
	int w = 0;
	for (int i = 0; i < a.size; i++)
	{
		xtmp.ArrayInterno[w] = a.ArrayInterno[i];
		w++;
	}
	for (int i = 0; i < b.size; i++)
	{
		xtmp.ArrayInterno[w] = b.ArrayInterno[i];
		w++;
	}
	return xtmp;
}


template<typename U>
static ostream& operator<<(ostream& out, SuperArray<U>& a) {
	for (int i = 0; i < a.size; i++) {
		out << a.ArrayInterno[i] << ",";
	}
	return out;
}

#endif // SuperArray_H

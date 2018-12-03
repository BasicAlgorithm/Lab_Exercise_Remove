#include "pch.h"
#include <iostream>
#include <fstream>
#include <string.h>

#include "SuperArray.h"
#include "Point.h"

using namespace std;


int main() {

	Point a(1, 1);
	Point b(9, 9);
	Point c;
	c = a + b;
	Point arreglo1[] = { a,b,c };
	SuperArray<Point> Sarreglo1(arreglo1, 3);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	Point d(11, 11);
	Point e(9, 9);
	Point f;
	f = d + e;
	Point arreglo2[] = { d,e,f };
	SuperArray<Point> Sarreglo2(arreglo2, 3);

	cout << d << endl;
	cout << e << endl;
	cout << f << endl;

	SuperArray<Point> Ejemplo;
	Ejemplo = Sarreglo1 + Sarreglo2;
	cout << "Printing array" << endl;
	cout << Ejemplo << endl;

	cout<<"probando nuevo operador"<<endl;
	Point res;
	res = b *= d;
	cout << res << endl;
	

										/*TAREA PARTE IMPRIMIR EN FORMATOS.TXT*/

	int abc = 0;
	ofstream archivocreado;
	ifstream source("pruebaIFSTREAM.txt");
	archivocreado.open("prueba.txt", ios::out);

	if (archivocreado.fail()) {
		cout << "fallo abrir/crear archivo";
		return 0;
	}

	source >> abc;
	archivocreado << abc;
	archivocreado.close();
	source.close();

	int opcion;
	char dato[100];
	do 
	{
		cout << "\t.:MENU:." << endl;
		cout << "Marque 1 si desea anadir texto" << endl;
		cout << "Marque 2 para eliminar" << endl;
		cin >> opcion;

		switch (opcion){
		case 1:
			cout << "ingrese el texto" << endl;
			cin >> dato;
			system("pause");
			break;
		}
		system("cls");
	} while (opcion!=2);


	//system("pause");
	return 0;
}

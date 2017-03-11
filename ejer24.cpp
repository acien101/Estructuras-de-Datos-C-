/*
 * ejer24.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 *
 *	Ejercicio de Pilas, que recibiendo una pila y un numero entero x, si la clave
 *	x se encuentra en la pila. devuelva la suma de las claves de la misma hasta llegar a x
 *	(sin incluir la clave x). Si la clave x no se encuentra en la pila, el método devuelve
 *	la suma de todas sus claves
 *
 */
#include <iostream>
using namespace std;
#include "Pila.h"

int sumaHasta(Pila &pila, int x){
	int elem, suma = 0;

	if (!pila.pilaVacia()){
		elem = pila.desapilar();
		if(x == elem){			//Si la encuentra se da la vuelta
			pila.apilar(elem);
			return 0;
		}
		suma += elem;
		suma += sumaHasta(pila, x);
		pila.apilar(elem);
	}
	return suma;
}

int main(){
	Pila pila1;

	pila1.apilar(-7);
	pila1.apilar(0);
	pila1.apilar(-9);
	pila1.apilar(2);
	pila1.apilar(4);
	pila1.apilar(4);
	pila1.imprimirPila();

	cout << "Sumar hasta 2: RESULTADO=" << sumaHasta(pila1, 2) << endl;

 	pila1.~Pila();
	return 0;
}

/*
 * ejer4.cpp
 *
 *  Created on: 23/2/2017
 *      Author: amil101
 *
 *	Ejercicio de pilas y colas, que recibiendo una cola con elementos y una pila vacía pertenecientes a los
 *	tipos anteriores, separe el contenido de la cola de manera que los elementos que ocupen posiciones pares de
 *	la cola permanezcan en la cola, y los elementos de la posiciones impares formen parte de la pila.
 *
 */
#include <iostream>
using namespace std;

#include "Pila.h"
#include "Cola.h"


void meterEnColaYPilaRecur(Cola &cola, Pila &pila, int elemCola){
	int x;
	if(elemCola > 0){
		x = cola.desencolar();
		if(!(elemCola % 2)){		//Par
			pila.apilar(x);
		}
		else{
			cola.encolar(x);
		}
		meterEnColaYPilaRecur(cola, pila, elemCola - 1);

	}
}

int main(){
	Cola a;
	Pila b;

	a.encolar(1);
	a.encolar(3);
	a.encolar(2);
	a.encolar(4);
	a.encolar(5);
	a.encolar(1);
	a.imprimirCola();

	meterEnColaYPilaRecur(a, b, a.numElemCola());
	a.imprimirCola();
	b.imprimirPila();
	return 0;
}


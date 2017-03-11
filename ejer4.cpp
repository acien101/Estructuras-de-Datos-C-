/*
 * ejer4.cpp
 *
 *  Created on: 23/2/2017
 *      Author: bn0336
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


/*
 * ejer321.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 */
#include <iostream>
using namespace std;
#include "Cola.h"

int sumaHastaEncontrarRecur(Cola &cola, int x){
	int elem, suma = 0;

	if (!cola.colaVacia()){
		elem = cola.desencolar();
		if(x == elem){			//Si la encuentra se da la vuelta
			cola.encolar(elem);
			return 0;
		}
		suma += elem;
		suma += sumaHastaEncontrarRecur(cola, x);
		cola.encolar(elem);
	}
	return suma;
}

int sumaHastaEncontrar(Cola &cola, int x){
	int result = sumaHastaEncontrarRecur(cola, x);
	cola.invertirCola();
	return result;
}

int main(){
   Cola cola1;

   cola1.encolar(2);
   cola1.encolar(4);
   cola1.encolar(2);
   cola1.encolar(-9);
   cola1.encolar(0);
   cola1.encolar(-7);
   cola1.imprimirCola();

   cout << "Suma hasta -9: RESULTADO = " << sumaHastaEncontrar(cola1, 5) << endl;

   cola1.~Cola(); //Buena costumbre
   return 0;
}





/*
 * ejer321.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 *
 *
 *	Ejecicio colas, recibiendo una cola y un número entero x, si la clave x se encuentra en la
 *	cola, devuelva la suma de las claves de la misma hasta llegar a x (sin incluir la clave x). 
 *	Si la  clave x no se encuentra en la cola, el método deberá devolver la suma de todas sus claves.
 *	Se dispone de la operación invertirCola(), pero no numElemCola()
 *
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





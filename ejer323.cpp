/*
 * ejer323.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 */
/*
 * ejer321.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 *
 *	Ejercicio colas, recibiendo una cola y un número entero x, si la clave x se encuentra en la
 *	cola, devuelva la suma de las claves de la misma hasta llegar a x (sin incluir la clave x). 
 *	Si la  clave x no se encuentra en la cola, el método deberá devolver la suma de todas sus claves.
 *	Se dispone de la operación numElemCola(), pero no invertirCola(). Solución recursiva.
 *
 */
#include <iostream>
using namespace std;
#include "Cola.h"

int sumaHastaEncontrarRecur(Cola &cola, int x , int elemCola, bool encontrado){
	int elem, suma = 0;

	if (elemCola > 0){
		elem = cola.desencolar();

	    if(x == elem){			//Si la encuentra se da la vuelta
		    encontrado = 1;
	    }

		cola.encolar(elem);

		if(!encontrado)suma = elem;

	    suma += sumaHastaEncontrarRecur(cola, x, elemCola-1, encontrado);
	}
	return suma;
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

   cout << "Suma hasta -9: RESULTADO = " << sumaHastaEncontrarRecur(cola1, 5, cola1.numElemCola(), false) << endl;

   cola1.~Cola(); //Buena costumbre
   return 0;
}






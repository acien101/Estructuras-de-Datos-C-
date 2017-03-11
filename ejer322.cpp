/*
 * ejer322.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 *
 *	Ejecicio colas, recibiendo una cola y un número entero x, si la clave x se encuentra en la
 *	cola, devuelva la suma de las claves de la misma hasta llegar a x (sin incluir la clave x). 
 *	Si la  clave x no se encuentra en la cola, el método deberá devolver la suma de todas sus claves.
 *	Se dispone de la operación numElemCola(), pero no invertirCola(). Solución iterativa.
 */

//Revisado 10-08-2016
#include <iostream>
using namespace std;
#include "Cola.h"

int main(){
   Cola cola1;
   int elem, i, suma = 0, x = 5;
   bool encontrado = 0;

   cola1.encolar(2);
   cola1.encolar(4);
   cola1.encolar(2);
   cola1.encolar(-9);
   cola1.encolar(0);
   cola1.encolar(-7);
   cola1.imprimirCola();

   //*Función* iterativa
   for(i = 0; i < cola1.numElemCola(); i++){
	   elem = cola1.desencolar();

	   if(x == elem){			//Si la encuentra se da la vuelta
	        encontrado = 1;
	   }

	   if(!encontrado)suma += elem;
	   cola1.encolar(elem);
   }

   cout << "Suma hasta -9: RESULTADO = " << suma << endl;

   cola1.~Cola(); //Buena costumbre
   return 0;
}




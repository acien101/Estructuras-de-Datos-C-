/*
 * ejer322.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 */

//Revisado 10-08-2016
#include <iostream>
using namespace std;
#include "Cola.h"

int main_322(){
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




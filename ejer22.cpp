/*
 * ejer22.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 */

//Revisado 07/08/20126
#include <iostream>
using namespace std;
#include "Pila.h"


int contarPilaCima (Pila &pila, int inicio){
	int elem, suma  = 0;

	if (!pila.pilaVacia()){
			elem = pila.desapilar();
			inicio++;
			if(!(inicio % 2)){			//PAR
				if(!(elem % 2)){ //PAR
					suma += elem;
				}
			}
			suma += contarPilaCima(pila, inicio);
			inicio--;
			pila.apilar(elem);
	}
	return suma;
}


int main_terminao(){
	Pila pila1;

	pila1.apilar(7);
	pila1.apilar(4);
	pila1.apilar(32);
	pila1.apilar(15);
	pila1.apilar(8);
	pila1.apilar(2);
	pila1.imprimirPila();

	cout << "Sumar claves pares en posiciones pares desde la cima: " << contarPilaCima(pila1, 0) << endl;

 	pila1.~Pila();
	return 0;
}


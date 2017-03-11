/*
 * ejer23.cpp
 *
 *  Created on: 4 mar. 2017
 *      Author: amil101
 */
#include <iostream>
using namespace std;
#include "Pila.h"

int contarPilaFondo(Pila &pila, int i){
	int elem, suma  = 0;

	if (!pila.pilaVacia()){
			elem = pila.desapilar();
			i++;
			suma = contarPilaFondo(pila, i);	//Fase de vuelta
			i--;
			if(!(i % 2)){				//Clave par
				if(!(elem % 2)){ 		//Elemento par
					suma += elem;
				}
			}
			pila.apilar(elem);
		}
	return suma;
}

int main(){
	Pila pila1;

	pila1.apilar(7);
	pila1.apilar(4);
	pila1.apilar(32);
	pila1.apilar(15);
	pila1.apilar(8);
	pila1.apilar(2);
	pila1.imprimirPila();

	cout << "Sumar claves pares en posiciones pares desde el fondo: " << contarPilaFondo(pila1, 0) << endl;

 	pila1.~Pila();
	return 0;
}


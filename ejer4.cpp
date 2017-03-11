/*
 * ejer4.cpp
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
#include <stack>
using namespace std;

int sumaHasta(stack<int>  &pila, int x){
	int elem, suma = 0;

	if (!pila.empty()){
		elem = pila.top();
		pila.pop();
		if(x == elem){			//Si la encuentra se da la vuelta
			pila.push(elem);
			return 0;
		}
		suma += elem;
		suma += sumaHasta(pila, x);
		pila.push(elem);
	}
	return suma;
}

int main(){
	stack<int> pila1;

	pila1.push(-7);
	pila1.push(0);
	pila1.push(-9);
	pila1.push(2);
	pila1.push(4);
	pila1.push(4);

	cout << "Sumar hasta 5: RESULTADO=" << sumaHasta(pila1, -9) << endl;

 	pila1.~stack();
	return 0;
}





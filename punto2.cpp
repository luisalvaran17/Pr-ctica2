/*
 * Autor: Sebastian Delgado y Luis Albaran
 * Descripción: Calculadora
 * Fecha de modificación: 28 abril de Abril
 */

#include <iostream>
#include <math.h>

using namespace std;


void modificar(int *ptr){

	cout <<"elevado al cuadrado es: "<< (pow(*ptr,2)) << endl;
	
}

int main(){


	int entero1 = 100;
	int * ptrVariable = 0;
	ptrVariable = &entero1;
	cout <<"entero 1: "<< *ptrVariable<< endl;
	
    modificar(ptrVariable);
	
	
	int entero2 = 300;
	ptrVariable = &entero2;
	cout << "entero 2: "<< *ptrVariable<< endl;

	modificar(ptrVariable);

}
 

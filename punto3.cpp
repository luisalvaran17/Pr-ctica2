/*
 * Autor: Sebastian Delgado y Luis Albaran
 * Descripción: Punto3
 * Fecha de modificación: 28 abril de Abril
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void recolectarDatos(string **&datos){

	//datos = new string [3][2];
	
	for (int i=0; i<3; i++){
		for (int j=0; j<2 ; j++){
		
		cout << "ingrese el nombre" << endl;
		cin >> datos[i][j];
		
		cout << "ingrese el apellido" << endl;
		cin >> datos[i][j];
		
		}

	}
}

void recolectarSalariosPersona(string **&datos, double *&salario){

	for (int i=0; i<3; i++){
		for (int j=0; j<2 ; j++){
		
		cout << "ingrese el salario de la persona" <<datos[i][j] << endl;
		
		cin >> *salario;
		
		}
		
	}
}

void imprimirResultados(string **&datos, double *&salario){

	for (int i=0; i<3; i++){
		for (int j=0; j<2 ; j++){
		
		cout << "la persona" <<datos[i][j]<< "devenga" << salario << endl;
		}
	}
}

int main (){

	string **arrayDatosPersona[3][2];
	
	double *salariosPersona;
	
	recolectarDatos(arrayDatosPersona);
	recolectarSalariosPersona(arrayDatosPersona, salariosPersona);
	imprimirResultados(arrayDatosPersona, salariosPersona);


}

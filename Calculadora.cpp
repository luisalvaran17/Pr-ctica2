/*
 * Autor: Sebastian Delgado y Luis Albaran
 * Descripción: Calculadora
 * Fecha de modificación: 26 abril de Abril
 */

#include "Calculadora.h"
#include <iostream>
 
 Calculadora :: Calculadora (){
	
	 numero = 0;
	this -> numero1 = 0;
	this ->numero2 = 0;
	 resultado = 0;
	 }
 Calculadora :: ~Calculadora (){}
 
 
 void Calculadora :: Opciones (){
	 
	
 } 
	 
 void Calculadora :: Menu (){
	  
	 
	 }	 
	 
 void Calculadora :: suma (){
	 
	 resultado = numero1 + numero2;
	 cout <<"el resultado es "<< resultado << endl;
	 
	 }
	 
 void Calculadora ::resta () {
	 
	 resultado = numero1 - numero2;
	 cout <<"el resultado es "<< resultado << endl;

	 }

 void Calculadora :: multiplicacion (){
	 
	 resultado = numero1 * numero2;
	 cout <<"el resultado es "<< resultado << endl;  
	 }
	 
 void Calculadora :: division (){
	 
	 resultado = numero1 / numero2;
	 cout <<"el resultado es "<< resultado << endl;
	 } 
	 
 void Calculadora :: setNumero1 (int numero1In){
	 
	 this -> numero1 = numero1In;
	 }
	 
 void Calculadora :: setNumero2 (int numero2In){
	 
	 this -> numero2 = numero2In;
	 }


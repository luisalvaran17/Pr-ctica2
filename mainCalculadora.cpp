/*
 * Autor: Sebastian Delgado y Luis Albaran
 * Descripción: Calculadora
 * Fecha de modificación: 26 abril de Abril
 */
 
 #include "Calculadora.h"
 #include <iostream>
 
 using namespace std;
 
 int main (){
	 
	 int numero1 = 0;
	 int numero2= 0;
	 int numero = 0;
	 
	 for (int i=0; i < 1;i++){
	 
	 cout << i+1<< " .Sumar "<<endl;  
	 cout << i+2<< " .Restar "<<endl;  
	 cout << i+3<< " .Multiplicar "<<endl;  
	 cout << i+4<< " .Dividir "<<endl;  
	 cout << i+5<< " .Exit" <<endl;
	 
}
     
     Calculadora calcular;
     
   
     
     cout << "Ingrese el numero de opcion: " << endl;
     cin >> numero;
     

		 
	  switch (numero) {
	   
	  case 1 : 
	          cout << "Ingrese el primer numero: " << endl; cin >> numero1;
	          cout << "Ingrese el segundo numero: " << endl; cin >> numero2;
	
	          calcular.setNumero1(numero1);
           	  calcular.setNumero2(numero2);
	
	          calcular.suma(); break;
	   	  
	  case 2 :
	          cout << "Ingrese el primer numero: " << endl; cin >> numero1;
	          cout << "Ingrese el segundo numero: " << endl; cin >> numero2;
	
	          calcular.setNumero1(numero1);
           	  calcular.setNumero2(numero2);
           	  
	          calcular.resta(); break;
	   
	  case 3 :
	          cout << "Ingrese el primer numero: " << endl; cin >> numero1;
	          cout << "Ingrese el segundo numero: " << endl; cin >> numero2;
	
	          calcular.setNumero1(numero1);
           	  calcular.setNumero2(numero2);	  
	  
	          calcular.multiplicacion(); break;
	      
	  case 4 : 
	          cout << "Ingrese el primer numero: " << endl; cin >> numero1;
	          cout << "Ingrese el segundo numero: " << endl; cin >> numero2;
	
	          calcular.setNumero1(numero1);
           	  calcular.setNumero2(numero2);	         
	         
	          calcular.division(); break; 
	  
	  case 5 :
	      break;    
	 }


	
}

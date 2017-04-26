/*
 * Autor: Sebastian Delgado y Luis Albaran
 * Descripción: Calculadora
 * Fecha de modificación: 26 abril de Abril
 */
 
  #ifndef CALCULADORA_H
  #define CALCULADORA_H
  
  using namespace std;
 
class Calculadora {
	private:
		
		int numero;
	    double numero1;
	    double numero2;
	    double resultado;
		
	public:
		Calculadora();
		~Calculadora();
		
		void suma ();
		void resta();
		void multiplicacion ();
		void division ();
		void Opciones ();
		void Menu ();
		
		void setNumero1 (int numero1In);
		void setNumero2 (int numero2In);
};
#endif

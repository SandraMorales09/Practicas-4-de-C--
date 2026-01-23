#include <iostream>
using namespace std;

int main() {
	// Declaracion de variables
	int Numero1, Numero2, Numero3;
	int Producto, Suma;

    //Entrada de datos
    cout << "Ingres el primer numero: ";
    cin >> Numero1;

    cout << "Ingres el primer numero: ";
    cin >> Numero2;

    cout << "Ingres el primer numero: ";
    cin >> Numero3;

   // Proceso y salida
   if (Numero1 > 0) {
	Producto = Numero1 * Numero2 * Numero3;
	cout << "El producto de los tres numeros es" << Producto << endl;
   }  else{
    Suma = Numero1 + Numero2 + Numero3;
    cout << "La suma de los tres numeros es: " << Suma << endl;
   } 

   return 0;

}




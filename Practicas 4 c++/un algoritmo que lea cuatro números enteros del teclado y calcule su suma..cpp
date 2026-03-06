#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int Numero1, Numero2, Numero3, Numero4;
    int Suma;

    // Entrada de datos
    cout << "Ingrese el primer número: ";
    cin >> Numero1;

    cout << "Ingrese el segundo número: ";
    cin >> Numero2;

    cout << "Ingrese el tercer número: ";
    cin >> Numero3;

    cout << "Ingrese el cuarto número: ";
    cin >> Numero4;

    // Cálculo de la suma
    Suma = Numero1 + Numero2 + Numero3 + Numero4;

    // Salida del resultado
    cout << "La suma de los cuatro números es: " << Suma << endl;

    return 0;
}

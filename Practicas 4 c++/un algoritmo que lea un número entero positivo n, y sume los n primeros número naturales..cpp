 #include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    // Leer el número entero positivo
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    // Validar que sea positivo
    if (n > 0) {
        // Calcular la suma de los n primeros números naturales
        for (int i = 1; i <= n; i++) {
            suma += i;
        }

        // Mostrar el resultado
        cout << "La suma de los primeros " << n << " números naturales es: " << suma << endl;
    } else {
        cout << "El número debe ser positivo." << endl;
    }

    return 0;
}


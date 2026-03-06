#include <iostream>
#define PI 3.1416

using namespace std;

int main () {
	float radio, perimetro, area;
    
    // Leer el redio del ciorculo
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    
    // Calcular el perimetro y el area
    perimetro = 2* PI * radio;
    area = PI * radio;
    
    //Mostrar resultados
    cout << "Perimetro del circulo: " <<perimetro << endl;
    cout << "Area del circulo:" << area << endl;
    
    return 0;
}

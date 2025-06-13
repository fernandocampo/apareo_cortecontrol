/*
Ejercicio 3
Realizar un programa (diagrama o codificación) que:
a. Le pida al usuario que ingrese por consola N números enteros y los almacene en un vector.
b. Informe si los elementos cargados en el vector son "consecutivos ascendentes".

Ejemplo:
Si el usuario ingresa: [9, 10, 11, 12] "Consecutivos ascendentes".
Si el usuario ingresa: [1, 4, 3, 7] "No consecutivos ascendentes".
Si el usuario ingresa: [-2, -1, 0, 1, 2] Consecutivos ascendentes".
*/

#include <iostream>
using namespace std;

int main() {

    int cantidad_elementos;

    cout << "Ingresar cantidad de elementos" << endl;
    cin >> cantidad_elementos;

    int numeros[cantidad_elementos];

    for (int i = 0; i < cantidad_elementos; i++) {
        cout << "Ingrese un numero entero" << endl;
        cin >> numeros[i];
    }

    int i; 

    for (i = 0; i < cantidad_elementos; i++) {
        if (numeros[i] != numeros[0] + i) {
            cout << "No es consecutivo ascendente" << endl;
            break;
        }
    }

    if (i == cantidad_elementos) {
        cout << "Es consecutivos ascendente" << endl;
    }
}
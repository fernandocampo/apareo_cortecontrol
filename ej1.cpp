/*
Ejercicio 1: Apareo de Vectores
Enunciado: Dados dos vectores de números enteros ya ordenados de menor a mayor, implementar una función que los combine en un tercer vector manteniendo el orden.
Datos de prueba:
Vector A: {1, 4, 8, 12}
Vector B: {2, 5, 6, 10, 15}
Resultado esperado: {1, 2, 4, 5, 6, 8, 10, 12, 15}

*/

#include <iostream>
using namespace std;

void apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k) {
    // Contadores para la posición de los vectores A y B.
    int i = 0, j = 0;
    // Contador para posicionarse en el vector resultante.
    k = 0;

    // Mientras pueda comparar valores (al menos uno de los vectores tiene valor)
    while (i < n && j < m) {
        // Comparo los valores de los vectores
        if (vecA[i] < vecB[j]) {
            // Coloco el elemento de A porque es menor
            vecC[k] = vecA[i];
            // Me muevo en el vector A
            i++;
        } else {
            vecC[k] = vecB[j];
            j++;
        }
        // Incremento el contador de la posición del vector resultante
        k++;
    }

    // Paso todos los elementos restantes de A
    while (i < n) {
        vecC[k] = vecA[i];
        i++;
        k++;
    }

    // Paso todos los elementos restantes de B
    while (j < m) {
        vecC[k] = vecB[j];
        j++;
        k++;
    }
}

void mostrarVector(int vec[], int tam, string nombre)
{
    cout << nombre << ": { ";
    for (int i = 0; i < tam; i++)
    {
        cout << vec[i];
        if (i < tam - 1)
            cout << ", ";
    }
    cout << " }" << endl;
}

int main() {
    int vecA[] = {1, 4, 8, 12};
    int vecB[] = {2, 5, 6, 10, 15};
    int n = sizeof(vecA) / sizeof(vecA[0]);
    int m = sizeof(vecB) / sizeof(vecB[0]);
    int vecC[n + m]; 
    int k;

    apareo(vecA, n, vecB, m, vecC, k);
    mostrarVector(vecC, k, "Vector apareado");

    return 0;

}

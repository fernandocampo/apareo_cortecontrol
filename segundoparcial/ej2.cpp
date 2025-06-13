#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    int legajo;
    string apellido;
    string nombre;
    string email;
    int telefono;
};

void imprimirListado(Alumno alumnos[], int cantidad) {
    cout << "APELLIDO Y NOMBRE\tLEGAJO\tEMAIL\t\t\tTELEFONO\n";
    cout << "--------------------------------------------------------------------------\n";

    for (int indice = 0; indice < cantidad; indice++) {
        cout << alumnos[indice].apellido << " " << alumnos[indice].nombre << "\t"
             << alumnos[indice].legajo << "\t"
             << alumnos[indice].email << "\t"
             << alumnos[indice].telefono << "\n";
    }
}

void ordenarPorApellidoNombre(Alumno alumnos[], int cantidad) {
    int pasada = 0;
    bool estaOrdenado = false;

    while (pasada < cantidad && !estaOrdenado) {
        estaOrdenado = true;

        for (int indice = 0; indice < cantidad - pasada - 1; indice++) {
            if (alumnos[indice].apellido > alumnos[indice + 1].apellido ||
               (alumnos[indice].apellido == alumnos[indice + 1].apellido &&
                alumnos[indice].nombre > alumnos[indice + 1].nombre)) {
                
                // Intercambiar posiciones
                Alumno auxiliar = alumnos[indice];
                alumnos[indice] = alumnos[indice + 1];
                alumnos[indice + 1] = auxiliar;

                estaOrdenado = false;
            }
        }
        pasada++;
    }
}

int main() {
    const int cantidadAlumnos = 4;
    Alumno alumnos[cantidadAlumnos] = {
        {12345678, "Pedro", "Juan", "juan.perez@email.com", 12345678},
        {87654321, "Pepito", "Ana", "ana.gomez@email.com", 87654321},
        {23456789, "Alvarez", "Luis", "luis.alvarez@email.com", 23456789},
        {34567890, "Perez", "Maria", "maria.perez@email.com", 34567890}
    };

    ordenarPorApellidoNombre(alumnos, cantidadAlumnos);
    imprimirListado(alumnos, cantidadAlumnos);

    return 0;
}

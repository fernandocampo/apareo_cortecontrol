/*
Ejercicio 3: Corte de Control Múltiple
Enunciado: Una escuela tiene registros de notas ordenados por curso y luego por alumno. Crear un programa que calcule el promedio de notas de cada alumno en cada curso.

Datos de prueba (ya ordenados por curso, luego por legajo):
Curso "1A", Legajo 123: nota 8
Curso "1A", Legajo 123: nota 7
Curso "1A", Legajo 456: nota 9
Curso "1B", Legajo 234: nota 6
Curso "1B", Legajo 789: nota 8
Curso "1B", Legajo 789: nota 10

Resultado esperado:
Curso 1A:
  Legajo 123: Promedio 7.5
  Legajo 456: Promedio 9.0
Curso 1B:  
  Legajo 234: Promedio 6.0
  Legajo 789: Promedio 9.0


*/
#include <iostream>
using namespace std;

struct Nota {
    string curso;
    int legajo;
    int nota;
};


void listarPromediosPorCurso(Nota notas[], int n) {
    int i = 0;
    while (i < n) {
        string cursoActual = notas[i].curso;
        cout << "Curso " << cursoActual << ":" << endl;

        while (i < n && notas[i].curso == cursoActual) {
            int legajoActual = notas[i].legajo;

            int sumaNotas = 0;
            int cantidadNotas = 0;

            while (i < n && notas[i].curso == cursoActual && notas[i].legajo == legajoActual) {
                sumaNotas += notas[i].nota;
                cantidadNotas++;
                i++;
            }

            double promedio = (double)sumaNotas / cantidadNotas;
            cout << "  Legajo " << legajoActual << ": Promedio " << promedio << endl;
        }
    }
}

int main () {
    Nota notas[] = {
        {"1A", 123, 8},
        {"1A", 123, 7},
        {"1A", 456, 9},
        {"1B", 234, 6},
        {"1B", 789, 8},
        {"1B", 789, 10}
    };

    int n = sizeof(notas) / sizeof(notas[0]);

    listarPromediosPorCurso(notas, n);

    return 0;
}
/**
 *      1) Se desea conocer qué alumnos cursan Programación o Laboratorio. 
 * Para hacerlo se dispone de la lista de alumnos de cada materia, y de cada 
 * alumno se conoce: Legajo (entero de 8 dígitos) y Nombre.
 * Realizar codificación del procedimiento quienesPrograman que reciba los 
 * vectores de ambas materias y complete un tercer vector.
 * 
 * Consideraciones
 *     • Los vectores recibidos están ordenados en forma ascendente por 
 *       legajo, y así se debe generar el tercero.
 *     • El vector generado no debe tener alumnos repetidos, es decir si 
 *       Juan cursa ambas materias en el tercer vector solo debe aparecer una vez.
 *     • Cada alumno está como máximo solamente una vez en cada vector
 *     • No preocuparse por quién dimensiona el tercer vector, ni su cantidad 
 *       de elementos, se recibe por parámetro y se usa.
 * 
*/

#include <iostream>

using namespace std;

struct ALUMNO 
{
    string nombre;
    long legajo;
};

void quienesPrograman(ALUMNO vectorProgramacion[], int nProg, ALUMNO vectorLaboratorio[], int nLab, ALUMNO vectorQuienesPrograman[], int nTotal)
{
    int n = 0;
    for(int i = 0; i < nProg; i++)
    {
        for(int j = 0; j < nLab; j++)
        {
            //vectorQuienesPrograman[n++] = algo;
        }
    }
}

int main()
{
    const int TAMANIO_MAXIMO = 100;
    ALUMNO prog[TAMANIO_MAXIMO];
    ALUMNO lab[TAMANIO_MAXIMO];
    ALUMNO total[TAMANIO_MAXIMO];

    int i = 0;
    prog[i].legajo = 489789;
    prog[i].nombre = "Juan Gomez";
    i++;
    prog[i].legajo = 3423124;
    prog[i].nombre = "Juan Perez";
    i++;
    prog[i].legajo = 4598789;
    prog[i].nombre = "Juan Gonzalez";

    i = 0;
    lab[i].legajo = 3423124;
    lab[i].nombre = "Juan Perez";
    i++;
    lab[i].legajo = 4598789;
    lab[i].nombre = "Juan Gonzalez";
    i++;
    lab[i].legajo = 4687989;
    lab[i].nombre = "Tito Fernandez";

    quienesPrograman(prog, 3, lab, 3, total, 3);

    for(int i = 0; i < 6; i++)
    {
        cout << total[i].legajo << total[i].nombre << endl;
    }

    return 0;
}

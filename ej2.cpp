/*
Ejercicio 2: Corte de Control Simple
Enunciado: Una librería tiene registros de ventas ordenados por vendedor. 
Crear un programa que muestre cuántos libros vendió cada vendedor en total.

Estructura de datos:
struct Venta {
    int codigoVendedor;
    int cantidadLibros;
};

Datos de prueba (ya ordenados por vendedor):
Vendedor 101: vendió 5 libros
Vendedor 101: vendió 3 libros  
Vendedor 102: vendió 7 libros
Vendedor 102: vendió 2 libros
Vendedor 102: vendió 4 libros
Vendedor 103: vendió 6 libros
Resultado esperado:
Vendedor 101: 8 libros totales
Vendedor 102: 13 libros totales  
Vendedor 103: 6 libros totales

*/

#include <iostream>
using namespace std;

struct Venta {
    int codigoVendedor;
    int cantidadLibros;
};

void cargar(Venta ventas[], int cant) {
    for (int i = 0; i < cant; i++) {
        cout << "Venta " << i + 1 << ":" << endl;
        cout << "Código de vendedor: ";
        cin >> ventas[i].codigoVendedor;
        cout << "Cantidad de libros vendidos: ";
        cin >> ventas[i].cantidadLibros;
    }
}

void listarVentasPorVendedor(Venta ventas[], int n) {
    int i = 0;

    // primer ciclo es el que recorre el lote completo
    while (i < n) {
        // guardo el valor de la clave o agrupador
        // esto permite agrupar los registros por legajo
        int key = ventas[i].codigoVendedor;
        
        // inicializado contadores , acumuladores etc de cada sublote
        int totalLibros = 0;

        // segundo ciclo se mantine por el sublote mientras sea el mismo
        // codigo de vendedor y no se haya acabado el vector
        while (i < n && key == ventas[i].codigoVendedor) {
            totalLibros += ventas[i].cantidadLibros;
            i++;
        }

        cout << "Vendedor " << key << ": " << totalLibros << " libros totales" << endl;
    }
}


int main () {

    Venta ventas[] = {
        {101, 5},
        {101, 3},
        {102, 7},
        {102, 2},
        {102, 4},
        {103, 6}
    };
    
    int cantidad = sizeof(ventas) / sizeof(ventas[0]);
    listarVentasPorVendedor(ventas, cantidad);
    
    return 0;
}
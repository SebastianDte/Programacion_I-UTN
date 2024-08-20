#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    // Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
    // $700 de premio por cada auto vendido. Hacer un programa que permita
    // ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
    // informar por pantalla el sueldo total a pagar.
    // Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
    // pagar es de $7800.

    float sueldoFijo = 5000,premio = 700,sueldo=0;
    int cantVendidos;

    cout << "Ingrese la Cantidad de Autos Vendidos" << endl;
    cin >> cantVendidos;

    sueldo = premio * cantVendidos;
    sueldo = sueldoFijo + sueldo;

    cout << "Su sueldo es de: " << sueldo << endl;
}
    

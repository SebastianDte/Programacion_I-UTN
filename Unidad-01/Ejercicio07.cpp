#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    // Hacer un programa para ingresar por teclado el importe de una venta y el
    // porcentaje de descuento aplicada a la misma y luego informar por pantalla el
    // importe a pagar.
    // Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
    // el total a pagar será de $1020.
    // Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
    // total a pagar será de $800.

    float importe,descuento;

    cout << "Ingrese el Importe de la venta: " << endl ;
    cin >> importe;
    cout << "Ingrese el descuento que aplica" << endl;
    cin >> descuento;

    descuento = importe * descuento / 100;
    descuento = descuento - importe;

    cout << "El importe final es de:$" << importe;

     

}
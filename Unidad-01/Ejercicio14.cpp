#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar el importe de una compra y el descuento a
// aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
// importe total a cobrar.
// Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
// Importe: 4500, Descuento: 1800, total: 2700.
// 15
int main()
{
    setlocale(LC_CTYPE, "Spanish");

    int importe,descuento,total;;

    cout<<"Ingrese el importe: ";
    cin>>importe;
    cout<<"Ingrese el descuento: ";
    cin>>descuento;

    descuento = importe / 100 * descuento;
    total = importe - descuento;

    cout<<"importe$:"<<importe<<"|Descuento:$"<<descuento<<"|Total:$"<<total;
}
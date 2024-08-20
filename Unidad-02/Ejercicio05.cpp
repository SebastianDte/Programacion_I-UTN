#include <iostream>
#include <locale.h>
using namespace std;

// Un negocio de perfumería efectúa descuentos según el importe de la venta.
// Si el importe es menor a $100 aplicar un descuento del 5%
// Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
// Si el importe es mayor a $500 aplicar un descuento del 15%
// Hacer un programa donde se ingresa el importe original sin descuento y se
// informe por pantalla el importe con el descuento ya aplicado.
// Importante: Verifique que el programa emita UN SOLO CARTEL.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    float importe;

    cout<<"Ingrese el Importe de la venta"<<endl;
    cin>>importe;

    if(importe>500){
        importe=importe*0.85;
    }else if(importe>=100){
        importe=importe*0.90;
    }else{
        importe = importe*0.95;
    }

    cout << "El importe final es de: $" << importe << endl;
}
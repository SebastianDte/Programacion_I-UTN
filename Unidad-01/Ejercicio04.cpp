#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    // Hacer un programa para ingresar por teclado la cantidad de asientos totales en
    // un avión y la cantidad de pasajes ocupados y luego calcular e informar el
    // porcentaje de ocupación y el porcentaje de no ocupación del mismo.
    // Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el
    // porcentaje de ocupación que se informará será de un 40% y el porcentaje de no
    // ocupación será de un 60%.

    float cantAsientosTotales,cantPasajesOcupados;

    cout<<"Ingrese la Cantidad de asientos totales" << endl;
    cin>>cantAsientosTotales;
    cout<<"Ingrese la cantidad de asientos ocupados" << endl;
    cin>>cantPasajesOcupados;

    float porcentajeOcupado = (cantPasajesOcupados / cantAsientosTotales) * 100;
    float porcentajeNoOcupado = 100 - porcentajeOcupado;
   

    cout<<"El porcentaje de asientos ocupados es de:" <<"%"<< porcentajeOcupado <<endl;
    cout<<"El porcentaje de asientos libres es de:" <<"%"<< porcentajeNoOcupado;

}
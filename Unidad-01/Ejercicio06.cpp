#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    // Hacer un programa para que un comercio ingrese por teclado la recaudación en
    // pesos para cada una de las cuatro semanas del mes. El programa debe listar la
    // recaudación promedio por semana y el porcentaje de recaudación por semana.
    // Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación
    // promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

    float semana1,semana2,semana3,semana4;

    cout << "Ingrese la cantidad recaudada en la semana 1:" << endl;
    cin >> semana1;
    cout << "Ingrese la cantidad recaudada en la semana 2:" << endl;
    cin >> semana2;
    cout << "Ingrese la cantidad recaudada en la semana 3:" << endl;
    cin >> semana3;
    cout << "Ingrese la cantidad recaudada en la semana 4:" << endl;
    cin >> semana4;

    float total = semana1+semana2+semana3+semana4;
    float promedio = total/ 4;
    float porcentajeSemanaUno = (semana1/total) * 100;
    float porcentajeSemanaDos = (semana2/total) * 100;
    float porcentajeSemanaTres = (semana3/total) * 100;
    float porcentajeSemanaCuatro = (semana4/total) * 100;

    cout << "Promedio semanal:" << promedio <<endl;
    cout<< "Porcentaje por cada semana" <<endl;
    cout<< "semana 1:%" << porcentajeSemanaUno << " |Semana 2:%"<< porcentajeSemanaDos
     << " |Semana 3:%" << porcentajeSemanaTres << " |Semana 4:%" << porcentajeSemanaCuatro;

}
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    // Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
    // programa para ingresar por teclado la cantidad de alfajores vendidos de cada
    // una de las tres marcas y luego se informe el porcentaje de ventas para cada
    // una de ellas.
    // Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
    // programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.

    int a,b,c;
    float porcentajeA,porcentajeB,porcentajeC;
    cout << "Ingrese la Cantidad de alfajores vendidos para A" <<endl;
    cin >> a;
    cout << "Ingrese la Cantidad de alfajores vendidos para B" <<endl;
    cin >> b;
    cout << "Ingrese la Cantidad de alfajores vendidos para C" <<endl;
    cin >> c;

    float totalVentas = a+b+c;
    porcentajeA = (a / totalVentas) * 100;
    porcentajeB = (b / totalVentas) * 100;
    porcentajeC = (c / totalVentas) * 100;

    cout << "Porcentaje vendido de A: " << a <<endl;
    cout << "Porcentaje vendido de B: " << b << endl;
    cout << "Porcentaje vendido de C: " << c << endl;



}
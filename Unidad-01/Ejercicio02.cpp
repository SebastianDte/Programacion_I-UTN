#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
   setlocale(LC_CTYPE,"Spanish");
    // Hacer un programa que solicite por teclado que se ingresen dos n�meros y
    // luego guardarlos en dos variables distintas. A continuaci�n se deben
    // intercambiar mutuamente los valores en ambas variables y mostrarlos por
    // pantalla.
    // Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
    // usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

    int A,B;

    cout << "Ingrese un N�mero" << endl;
    cin>>A;
    cout << "Ingrese otro N�mero" << endl;
    cin>>B;

    cout << "N�meros Ingresados: " << endl;
    cout << "A:" << A << endl;
    cout << "B:" << B << endl;

    int aux;
    aux = A;
    A=B;
    B=aux;

    cout << "N�meros Intercambiados: " << endl;
    cout << "A:" << A << endl;
    cout << "B:" << B << endl;

}

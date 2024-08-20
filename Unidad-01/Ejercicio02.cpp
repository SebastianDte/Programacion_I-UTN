#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
   setlocale(LC_CTYPE,"Spanish");
    // Hacer un programa que solicite por teclado que se ingresen dos números y
    // luego guardarlos en dos variables distintas. A continuación se deben
    // intercambiar mutuamente los valores en ambas variables y mostrarlos por
    // pantalla.
    // Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
    // usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

    int A,B;

    cout << "Ingrese un Número" << endl;
    cin>>A;
    cout << "Ingrese otro Número" << endl;
    cin>>B;

    cout << "Números Ingresados: " << endl;
    cout << "A:" << A << endl;
    cout << "B:" << B << endl;

    int aux;
    aux = A;
    A=B;
    B=aux;

    cout << "Números Intercambiados: " << endl;
    cout << "A:" << A << endl;
    cout << "B:" << B << endl;

}

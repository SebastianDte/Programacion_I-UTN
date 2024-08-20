#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar por teclado un número y luego informar por
// pantalla con un cartel aclaratorio si el mismo es par o impar.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n1;

    cout<<"Ingrese un Número: ";
    cin>>n1;

    if(n1%2==0){
        cout<<"El número ingresado es Par"<<endl;
    }else{
        cout<<"El número ingresado es Impar"<<endl;
    }
    
}
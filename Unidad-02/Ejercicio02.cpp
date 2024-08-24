#include <iostream>
#include <locale.h>
#include <format>
using namespace std;

// Hacer un programa para ingresar por teclado dos números y luego informar por
// pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n1,n2;
    
    cout<<"Ingrese el primer Número: ";
    cin>>n1;
    cout<<"Ingrese el segundo Número: ";
    cin>>n2;
    
    if(n1%n2==0){
        cout<<"Es primer Número es multiplo del segundo"<<endl;
    }else{
        cout<<"Es primer Número no es multiplo del segundo"<<endl;
    }

    
}
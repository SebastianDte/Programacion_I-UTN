#include <iostream>
#include <locale.h>
#include <format>
using namespace std;

// Hacer un programa para ingresar por teclado dos n�meros y luego informar por
// pantalla con un cartel aclaratorio si el primer n�mero es m�ltiplo del segundo.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n1,n2;
    
    cout<<"Ingrese el primer N�mero: ";
    cin>>n1;
    cout<<"Ingrese el segundo N�mero: ";
    cin>>n2;
    
    if(n1%n2==0){
        cout<<"Es primer N�mero es multiplo del segundo"<<endl;
    }else{
        cout<<"Es primer N�mero no es multiplo del segundo"<<endl;
    }

    
}
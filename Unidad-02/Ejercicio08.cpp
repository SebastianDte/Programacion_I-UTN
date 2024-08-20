#include <iostream>
#include <locale.h>
using namespace std;

// Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
// teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de
// triángulo es:
// - Equilátero: si los tres lados son iguales.
// - Isósceles: si dos de los tres lados son iguales.
// - Escaleno: si los tres lados son distintos entre sí.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n1,n2,n3;

    cout<<"Ingrese la primer longitud: "<<endl;
    cin>>n1;    
    cout<<"Ingrese la segunda longitud: "<<endl;    
    cin>>n2;    
    cout<<"Ingrese la tercer longitud: "<<endl;    
    cin>>n3;

    if(n1==n2&&n2==n3){
        cout<<"Equiláteros."<<endl;
    }else if(n1!=n2&&n1!=n3&&n2!=n3){
        cout<<"Escaleno."<<endl;
    }else{
        cout<<"Isóceles."<<endl;
    }
}
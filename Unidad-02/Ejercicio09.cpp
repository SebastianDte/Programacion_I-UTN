#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar tres números y listar el máximo de ellos.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n1,n2,n3;

    cout<<"Ingrese un Número: " <<endl;
    cin>>n1;   
    cout<<"Ingrese un Número: " <<endl;   
    cin>>n2;   
    cout<<"Ingrese un Número: " <<endl;   
    cin>>n3;   

    if(n1>n2&&n1>n3){
        cout<<"El número mayor ingresado es: "<<n1;
    }else if(n2>n1&&n2>n3){
        cout << "El número mayor ingresado es: " << n2;
    }else{
        cout << "El número mayor ingresado es: " << n3;
    }
}
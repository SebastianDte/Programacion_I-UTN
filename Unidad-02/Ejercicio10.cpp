#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar cinco números y listar el máximo y el mínimo
// de ellos.

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int n1,n2,n3,n4,n5,mayor,menor;

    cout<<"Ingrese un Número: "<<endl;
    cin>>n1;
    cout<<"Ingrese un Número: "<<endl;
    cin>>n2;
    cout<<"Ingrese un Número: "<<endl;
    cin>>n3;
    cout<<"Ingrese un Número: "<<endl;
    cin>>n4;
    cout<<"Ingrese un Número: "<<endl;
    cin>>n5;

    mayor = menor = n1;

    if (n2 > mayor) mayor = n2;
    if (n2 < menor) menor = n2;
    
    if (n3 > mayor) mayor = n3;
    if (n3 < menor) menor = n3;
    
    if (n4 > mayor) mayor = n4;
    if (n4 < menor) menor = n4;
    
    if (n5 > mayor) mayor = n5;
    if (n5 < menor) menor = n5;

    cout<<"El número mayor ingresado es: " << mayor <<endl;
    cout<<"El número menor ingresado es: " << menor <<endl;
}
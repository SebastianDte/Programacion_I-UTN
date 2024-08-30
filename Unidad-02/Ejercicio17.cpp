#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar por teclado cuatro números. Si los valores que
// se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto
// Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
// Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están
// ordenados.
// Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están
// ordenados.
// Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están
// desordenados.

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int n1,n2,n3,n4;
    cout<<"Ingrese 4 Números:"<<endl;
    cout<<"Número 1:";
    cin>>n1;
    cout<<"Número 2:";
    cin>>n2;
    cout<<"Número 3:";
    cin>>n3;
    cout<<"Número 4:";
    cin>>n4;

    if(n1<=n2 && n2<=n3 && n3<=n4)
    cout<<"Estan ordenados.";
    else cout<<"Estan desordenados.";
    
}
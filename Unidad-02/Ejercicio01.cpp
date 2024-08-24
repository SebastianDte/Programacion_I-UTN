#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar por teclado un número y luego emitir por
// pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
// Importante: Verifique que el programa emita UN SOLO CARTEL.
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n;
    cout<<"Ingrese un Número"<<endl;
    cin>>n;

    if(n>0){
        cout<<"El número ingresado es positivo"<<endl;
    }
    else if(n<0){
        cout<<"El número ingresado es negativo";
    }else{
        cout<<"El número ingresado es 0";
    }
        
}
#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar por teclado un n�mero y luego emitir por
// pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
// Importante: Verifique que el programa emita UN SOLO CARTEL.
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n;
    cout<<"Ingrese un N�mero"<<endl;
    cin>>n;

    if(n>0){
        cout<<"El n�mero ingresado es positivo"<<endl;
    }
    else if(n<0){
        cout<<"El n�mero ingresado es negativo";
    }else{
        cout<<"El n�mero ingresado es 0";
    }
        
}
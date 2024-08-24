#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para que el usuario ingrese un número positivo y luego se
// muestren por pantalla los números entre el 1 y el número ingresado por el
// usuario.
// Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int n=0;

    cout<<"Ingrese un Número positivo: "<<endl;
    cin>>n;

    if(n>0){
        for (int i = 1; i <= n; i++)
        {
            cout<<i;
            cout<<",";
        }        
    }else 
        cout<<"Ingresó un Número invalido";

}
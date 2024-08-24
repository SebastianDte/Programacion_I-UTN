#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para que el usuario ingrese dos números y luego el
// programa muestre por pantalla los números entre el menor y el mayor de
// ambos.
// Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15
// y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    
    int n1=0,n2=0,mayor=0,menor=0;
    cout<<"Ingrese un Número: " <<endl;
    cin>>n1;
    cout<<"Ingrese otro Número: " <<endl;
    cin>>n2;

    if(n1>n2){
        mayor=n1;
        menor=n2;
    }else{
        mayor=n2;
        menor=n1;
    }

    for (int i = menor; i <= mayor; i++)
    {
        cout<<i;
        cout<<",";
    }
    
    
}
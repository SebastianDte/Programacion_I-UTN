#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar una lista de 10 números, luego informar el
// máximo y el mínimo.
// Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
// Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
// Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo
// -42.
// Observe que los tres ejemplos dejan en claro que la suposición de que el
// máximo “seguramente” es un positivo y el mínimo “seguramente” es un
// negativo, queda totalmente descartada.
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n=0,maximo=0,minimo=0;
    bool primera=true;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese un Número: "<<endl;
        cin>>n;

        if(primera){
            primera=false;
            maximo=n;
            minimo=n;
        }else if(n>maximo)
            maximo=n;
            else if(n<minimo)
            minimo=n; 
    }
    cout<<"El maxímo Número ingresado fue: " << maximo <<endl;
    cout<<"El minimo Número ingresado fue: " << minimo <<endl;
    
}
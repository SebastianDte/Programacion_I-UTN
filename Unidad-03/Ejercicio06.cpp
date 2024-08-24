#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar un N valor que indica la cantidad de números
// que componen una lista y luego solicitar se ingresen esos N números. Se pide
// informar cuantos son positivos
// Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
// listará: Cantidad de Positivos: 4
// Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
// Se listará: Cantidad de Positivos: 0
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n=0,x=0,positivo=0,negativo=0;

    cout<<"Ingrese la cantidad de Números que contendrá su lista: "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese un Número"<<endl;
         cin>>x;
        if(x>0)positivo++;
        else negativo++;
    }

    cout<<"Hay " <<positivo<<" Positivos"<<endl;
    cout<<"Hay " <<negativo<<" Negativos"<<endl;
    



    
}
#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar una lista de 10 números, luego informar
// cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
// Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    
    int n=0,positivos=0,negativos=0,cero=0;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese un Número: "<<endl;
        cin>>n;
        if(n>0)positivos++;
        else if(n<0)negativos++;
        else cero++;
    }

    cout<<"Se ingresarón: " << endl;
    cout<<"Positivos: " << positivos <<endl;
    cout<<"Negativos: " << negativos <<endl;
    cout<<"Cero: " << cero <<endl;
    
}
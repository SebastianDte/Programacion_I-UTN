#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar una lista de 10 números e informar el máximo
// de los negativos y el mínimo de los positivos.
// Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int n=0,maximo=0,minimo=0;
    bool maxN=true,minP=true;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese un Número: " <<endl;
        cin>>n;

        if(n>0){
            if(minP){
                minimo=n;
                minP=false;
            }else if(n<minimo){
                minimo = n;
            }
        }else if(maxN){
            maxN=false;
            maximo=n;
        }else if(n>maximo){
            maximo = n;
        }
    }

    cout<<"El máximo de los Negativos fue: " << maximo << endl;
    cout<<"El minimo de los Positivos fue: " << minimo << endl;
    
    
}
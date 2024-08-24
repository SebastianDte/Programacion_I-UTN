#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar una lista de 10 números, luego informar el
// porcentaje de positivos, negativos, y ceros.
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    float n=0,positivos=0,negativos=0,cero=0;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Ingrese un Número: "<<endl;
        cin>>n;
        if(n>0)positivos++;
        else if(n<0)negativos++;
        else cero++;
    }

    positivos=(positivos/10)*100;
    negativos=(negativos/10)*100;
    cero=(cero/10)*100;

    cout<<"Porcentajes: " << endl;
    cout<<"Positivos: " << positivos <<endl;
    cout<<"Negativos: " << negativos <<endl;
    cout<<"Cero: " << cero <<endl;
}
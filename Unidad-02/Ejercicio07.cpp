#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar por teclado tres n�meros e informar con una
// leyenda aclaratoria si los tres son todos distintos entre s�, caso contrario no
// emitir nada.
// Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A
// y C sean distintos. Ejemplo: A=8, B=6 y C=8.

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    
    int n1,n2,n3;

    cout<<"Ingrese un N�mero: "<<endl;
    cin>>n1;
    cout<<"Ingrese un N�mero: "<<endl;
    cin>>n2;
    cout<<"Ingrese un N�mero: "<<endl;
    cin>>n3;

    if(n1!=n2 && n1!=n3 && n2!= n3){
        cout<<"Los n�meros ingresados son distintos entre si."<<endl;
    }
    
}
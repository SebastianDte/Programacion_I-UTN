#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar tres números diferentes y determinar e
// informar el número del medio.
// Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
// N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
// N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
// N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    
    int n1,n2,n3,valorMedio;

    cout<<"Ingrese un Número: ";
    cin>>n1;
    cout<<"Ingrese un Número: ";
    cin>>n2;
    cout<<"Ingrese un Número: ";
    cin>>n3;

    if(n1>n2||n1>n3&&n1<n2||n1<n3)valorMedio=n1;
    if(n2>n1||n2>n3&&n2<n1||n2<n3)valorMedio=n2;
    if(n3>n1||n3>n2&&n3<n1||n3<n2)valorMedio=n3;

    cout<<"El valor del medio es: " << valorMedio;

    

    
}
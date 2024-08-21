#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar tres números distintos y listarlos ordenados
// de menor a mayor.
// Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
// Si N1=8, N2=6, N3=10 ó N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
// Si N1=6, N2=8, N3=10 ó N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
// Si N1=6, N2=10, N3=8 ó N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n1,n2,n3,mayor,medio,menor;
    cout<<"Ingrese un Número"<<endl;
    cin>>n1;
    cout<<"Ingrese un Número"<<endl;
    cin>>n2;
    cout<<"Ingrese un Número"<<endl;
    cin>>n3; 

    if(n1<n2&&n1<n3){
        cout<<n1<<endl;
        if(n2<n3)
        {
            cout<<n2<<endl;
            cout<<n3;
        }else{
            cout<<n3<<endl;
            cout<<n2<<endl;
        }
    }else if(n2<n1&&n2<n3){
        cout<<n2<<endl;
        if(n1<n3){
            cout<<n1<<endl;
            cout<<n3<<endl;
        }else{
            cout<<n3<<endl;
            cout<<n1<<endl;
        }
    }else if(n3<n1&&n3<n2){
        cout<<n3<<endl;
        if(n1<n2){
            cout<<n1<<endl;
            cout<<n2<<endl;
        }else{
            cout<<n2<<endl;
            cout<<n1<<endl;
        }
    }
    
}
    
    
    

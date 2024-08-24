#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
    // números son positivos, cuantos son negativos y cuantos son iguales a 0.
    setlocale(LC_CTYPE,"Spanish");

    int n1,n2,n3,n4,n5,positivo=0,negativo=0,cero=0;

    cout<<"Ingrese un Número: "<<endl;
    cin>>n1;
    cout<<"Ingrese un Número: "<<endl;
    cin>>n2;
    cout<<"Ingrese un Número: "<<endl;
    cin>>n3;
    cout<<"Ingrese un Número: "<<endl;
    cin>>n4;
    cout<<"Ingrese un Número: "<<endl;
    cin>>n5;

    if(n1>0)positivo++;
    else if(n1<0)negativo++;
    else cero++;
    
    if(n2>0)positivo++;
    else if(n2<0)negativo++;
    else cero++;

    if(n3>0)positivo++;
    else if(n3<0)negativo++;
    else cero++;
    
    if(n4>0)positivo++;
    else if(n4<0)negativo++;
    else cero++;

    if(n5>0)positivo++;
    else if(n5<0)negativo++;
    else cero++;
    
    cout<<" Positivos: " << positivo << " Negativos: "<< negativo <<" Cero: " << cero << endl;
}
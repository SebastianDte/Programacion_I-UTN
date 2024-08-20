#include <iostream>
#include <locale.h>
using namespace std;

// La amplitud térmica es la diferencia entre la temperatura máxima y la
// temperatura mínima en una zona y tiempo determinado. Dada la temperatura
// máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la
// amplitud térmica.
// NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al
// de la temperatura mínima.
int main()
{
    setlocale(LC_CTYPE, "Spanish");

    float amplitudTermica,tempMaxima,tempMinima;

    cout<<"Ingrese la temperatura maxima: ";
    cin>>tempMaxima;
    cout<<"Ingrese la temperatura minima: ";
    cin>>tempMinima;

    if(tempMaxima>=tempMinima){
        amplitudTermica=tempMaxima-tempMinima;
        cout<<"La Amplitud termica es de:°"<<amplitudTermica<<"C";
    }else{
        cout << "ERROR:La temperatura Máxima debe ser mayor o igual a la Temperatura minima";
    }

   
}
#include <iostream>
#include <locale.h>
using namespace std;

// La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
// temperatura m�nima en una zona y tiempo determinado. Dada la temperatura
// m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la
// amplitud t�rmica.
// NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al
// de la temperatura m�nima.
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
        cout<<"La Amplitud termica es de:�"<<amplitudTermica<<"C";
    }else{
        cout << "ERROR:La temperatura M�xima debe ser mayor o igual a la Temperatura minima";
    }

   
}
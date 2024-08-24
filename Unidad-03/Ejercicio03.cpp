#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden
// decreciente.
// Importante: El programa no tiene ningún ingreso de datos.
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    for (int i = 20; i > 0; i--)
    {
        cout<<i;
        cout<<",";
    }
    
    
}
#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para mostrar por pantalla los números del 1 al 10.
// Importante: El programa no tiene ningún ingreso de datos.
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    for (int x = 0; x <=10; x++)
    {
        cout<<x;
        cout<<",";
    }
    
    
}
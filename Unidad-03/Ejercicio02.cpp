#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando
// de a 3 valores. Es decir: 1, 4, 7, 10, 13, 16, 19.
// Importante: El programa no tiene ningún ingreso de datos.
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    for (int i = 1; i < 20; i+=3)
    {
        cout<<i;
        cout<<",";
    }
    
    
}
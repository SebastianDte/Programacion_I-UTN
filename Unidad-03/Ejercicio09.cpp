#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar una lista de 10 números, luego informar el
// máximo.
// Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
// Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.
// Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listará Máximo -6
// El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
// máximo es un positivo.
// Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 9 y TP2 EJ 10.
int main()
{
    setlocale(LC_CTYPE, "Spanish");

    int n = 0, maximo = 0, menor = 0;
    bool negativos = true, positivo = false;
    ;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un Número: " << endl;
        cin >> n;
        if (n > 0)
        {
            if (n > maximo)
            {
                maximo = n;
                positivo = true;
            }
        }
        else
        {
            n = -n;
            if (negativos)
            {
                menor = n;
                negativos = false;
            }
            else if (n < menor)
                menor = n;
        }
    }
    if (positivo)
        cout << "EL maximo es: " << maximo;
    else
        cout << "EL maximo es: " << -menor;
}
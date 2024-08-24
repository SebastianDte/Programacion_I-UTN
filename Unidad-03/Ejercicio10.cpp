#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar una lista de 10 números enteros, luego
// informar el máximo y la posición del máximo en la lista. En caso de “empates”
// considerar la primera aparición.
// Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7.
// Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7.
// Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6 Posición 8.
// El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
// máximo es un positivo.
int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int n = 0, maximo = 0, menor = 0, posicionMax = 0;
    bool negativos = true, positivo = false;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un Número: " << endl;
        cin >> n;
        if (n > 0)
        {
            if (n > maximo)
            {
                maximo = n;
                posicionMax = i + 1;
                positivo = true;
            }
        }
        else
        {
            n = -n;
            if (negativos)
            {
                menor = n;
                posicionMax = i + 1;
                negativos = false;
            }
            else if (n < menor)
            {
                menor = n;
                posicionMax = i + 1;
            }
        }
    }
    if (positivo)
        cout << "EL maximo es: " << maximo << " En la posición" << posicionMax;
    else
        cout << "EL maximo es: " << -menor << " En la posición: " << posicionMax;
}
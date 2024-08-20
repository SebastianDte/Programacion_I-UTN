#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para un cajero automático para ingresar un importe a retirar
// y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
// entregar.
// Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se
// deberán entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
// billetes de $100.
// Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se
// deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0
// billetes de $100.
// Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se
// deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0
// billetes de $500.
// Recordatorio. Considerar en todos los casos que el importe a retirar es en todos
// los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o
// $10.
int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int importe,mil,quinientos,doscientos,cien,sobrante;

    cout<<"Ingrese el Importe a Retirar:"<<endl;
    cin>>importe;

    mil=importe/1000;
    sobrante=importe%1000;

    quinientos=sobrante/500;
    sobrante=sobrante%500;

    doscientos=sobrante/200;
    sobrante=sobrante%200;
    cien=sobrante/100;

    cout<<mil<<" 1000|"<<quinientos<<" 500|"<<doscientos<<" 200|"<<cien<<" 100|";

}
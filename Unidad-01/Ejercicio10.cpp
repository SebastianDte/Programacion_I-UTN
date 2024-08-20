#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    // Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
    // por pantalla a cuantos días y horas equivalen.
    // Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que
    // equivalen a 1 día y 2 horas.
    // Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que
    // equivalen a 3 días y 0 horas.
    // Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que
    // equivalen a 0 días y 20 horas.

    int horas,dias;
    
    cout<<"Ingrese las horas"<<endl;
    cin>>horas;
    if(horas > 24){
        dias = horas / 24;
        horas = horas % 24;
    }

    cout<<"Las horas equivalen a : " << dias<<" Dias "<<" y "<<horas<<" horas";
    


}
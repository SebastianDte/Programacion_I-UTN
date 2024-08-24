#include <iostream>
#include <locale.h>
using namespace std;
// Hacer un programa para ingresar por teclado una cantidad de minutos y
// mostrar por pantalla a cuántos días, horas y minutos equivalen.
// Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que
// equivalen a 1 día, 1 hora y 20 minutos.
// Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que
// equivalen a 0 día, 8 horas y 0 minutos.
int main()
{
    setlocale(LC_CTYPE, "Spanish");

    int minutos,dias,horas;

    cout<<"Ingrese los minutos" << endl;
    cin>>minutos;
    dias = minutos / 1440;
    minutos = minutos % 1440;
    horas = minutos / 60;  
    minutos = minutos % 60;  

     cout<<"Las horas equivalen a : " << dias<<" Dias "<<" y "<<horas<<" horas " << minutos << "Minutos";
    
}
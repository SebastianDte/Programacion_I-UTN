#include <iostream>
#include <locale.h>
using namespace std;
// Este ejercicio lo resolverán en la parte de código de la materia.
// El costo de un desarrollo de un proyecto de software se calcula en base al
// lenguaje que se necesita:
// Nombre   Tipo    Valor hora
// C/C++    'C'     $ 7500
// C#       '#'     $ 6100
// Python   'P'     $ 5400
// Go       'G'     $ 5000
// Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más
// al costo del proyecto.
// Le solicitan un programa que permita calcular el costo total de un proyecto
// basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o
// no (bool)
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    
    bool urgente = false;
    int cantHoras = 0;
    char lenguaje,opcion = 0;
    float total=0;
    cout<<"Seleccione un lenguaje para su proyecto: "<<endl;
    cout<<"C/C++ = 'C' | C# = '#' | Python = 'P' | Go = 'G' "<<endl;
    cin>>lenguaje;
    cout<<"Cuantas horas llevará su proyecto?"<<endl;
    cin>>cantHoras;
    cout<<"Lo nesecita con Urgencia ? Presione 'S' si es urgente - 'N' Si no es urgente."<<endl;
    cin>>opcion;
    if(opcion=='S')urgente=true;
    
    switch (lenguaje)
    {
    case 'C':
        total = 7500 * cantHoras;
        break;
    case '#':
        total = 6100 * cantHoras;
    case 'P':
        total = 5400 * cantHoras;
    case 'G':
        total = 5000 * cantHoras;
    default:
        cout<<"Respuesta Incorrecta."<<endl;
        break;
    }

    if(urgente)total=total*125/100;
    cout<<"El total es de: " << total << endl;
    
}
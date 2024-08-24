#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar por teclado la fecha de nacimiento de una
// persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar
// la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular
// luego la edad en años de esa persona y listar por pantalla.
// Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
// es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en
// diciembre.
// Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
// es 26/2/2019 la edad de esa persona es 19.
// Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
// es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir
// los 19 años.

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    
    int dia,mes,año,diaA,mesA,añoA;

    cout<<"Ingrese su fecha de Nacimiento: "<<endl;
    cout<<"Día: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Año: ";
    cin>>año;

    cout<<"Ingrese fecha actual: ";
    cout<<"Día: ";
    cin>>diaA;
    cout<<"Mes: ";
    cin>>mesA;
    cout<<"Año: ";
    cin>>añoA;

    int edad = añoA - año;
   
    if(mesA < mes)
        edad--;
    if(mesA==mes&&diaA<dia)
        edad--;

    cout<<"La edad es: " <<edad<<endl;
    

}
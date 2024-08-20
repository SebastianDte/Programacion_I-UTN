#include <iostream>
using namespace std;

int main()
{
    // Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
    // por un operario y el valor que se le paga por hora trabajada y listar por pantalla
    // el sueldo que le corresponda.

    int horasTrabajadas,valorHora;

    cout << "Ingrese la cantidad de Horas Trabajadas: " << endl;
    cin >> horasTrabajadas;
    cout << "Ingrese el valor por hora: " << endl;
    cin >> valorHora;

    int sueldo = horasTrabajadas * valorHora;
    cout << "Su sueldo es de: " << "$" << sueldo;

    
}

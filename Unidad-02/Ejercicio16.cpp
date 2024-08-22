#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
// obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
// siguientes condiciones:
// - “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
// - “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
// - “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
// exámenes.
// - “Recursa la materia”, si no aprobó ningún examen parcial.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int nota1,nota2,nota3,nota4;

    cout<<"Ingrese las notas de los examenes: "<<endl;
    cout<<"Nota 1: " <<endl;  
    cin>>nota1;
    cout<<"Nota 2: " <<endl;  
    cin>>nota2;
    cout<<"Nota 3: " <<endl;  
    cin>>nota2;
    cout<<"Nota 4: " <<endl;  
    cin>>nota4;

    if(nota1>=7 && nota2>=7 && nota3>=7 && nota4>=7)
    cout<<"Promociona"<<endl;
    else if(nota1>=4 && nota2>=4 && nota3 >=4 && nota4>=4 )
    cout<<"Rinde Examen Final"<<endl;
    else if(nota1<4 && nota2<4 && nota3<<4 && nota4<4)
    cout<<"Recursa la materia"<<endl;
    else
    cout<<"Recupera parciales"<<endl;
}
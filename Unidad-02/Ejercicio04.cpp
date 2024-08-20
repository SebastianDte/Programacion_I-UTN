#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa para ingresar por teclado dos números y luego informar por
// pantalla la diferencia entre ambos.
// Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5.
// Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
// Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
// Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO
// porque la diferencia absoluta siempre es un valor positivo.
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int n1,n2;

    cout<<"Ingrese un Número: "<<endl;
    cin>>n1;
    cout<<"Ingrese otro Número: "<<endl;
    cin>>n2;

    int diferencia = n1 - n2;
    if(diferencia < 0){
        diferencia= -diferencia;
    }
    cout << "El valor absoluto de la diferencia entre " << n1 << " y " << n2 << " es: " << diferencia << endl;


}
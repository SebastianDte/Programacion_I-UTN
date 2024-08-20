#include <iostream>
#include <locale.h>
using namespace std;
// El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
// frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
// Micilina y 7 mg de Ácido Sinítico.
// Nos solicitan un programa donde se ingrese la cantidad de frascos de un
// pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
// Sinítico que son necesarios para elaborarlos.
int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int frascos,betamol,micilina,acidoSinitico;

    cout<<"Ingrese la cantidad de Frascos: "<<endl;
    cin>>frascos;

    int pildoras = frascos * 75;
    betamol = 45 * pildoras;
    micilina = 2 * pildoras * 1000;
    acidoSinitico = 7 * pildoras;

    cout<<"Betamol:"<<betamol<<"mg"<<endl;
    cout<<"micilina:"<<micilina<<"mg"<<endl;
    cout<<"Ácido Sinítico:"<<acidoSinitico<<"mg"<<endl;

}
#include <iostream>
#include <locale.h>
using namespace std;
// El Laboratorio V&V hace frascos de p�ldoras para aprender a programar. Cada
// frasco contiene 75 p�ldoras y cada p�ldora contiene 45 mg de Betamol, 2 grs de
// Micilina y 7 mg de �cido Sin�tico.
// Nos solicitan un programa donde se ingrese la cantidad de frascos de un
// pedido y muestre la cantidad de miligramos de Betamol, Micilina y de �cido
// Sin�tico que son necesarios para elaborarlos.
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
    cout<<"�cido Sin�tico:"<<acidoSinitico<<"mg"<<endl;

}
#include <iostream>
#include <locale.h>
using namespace std;
// 22 Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su
// sucursal en Villa Aberdeen. Se sabe que para producir caramelos tienen los
// siguientes costos:
// - Costo de alquiler de $10000
// - Costo por caramelo producido de $2.50
// - Costo por mantenimiento cada 100 caramelos de $5000
// Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
// mes, informar:
// - "El presupuesto es suficiente para cubrir los costos de $XXXX"
// - "El presupuesto no es suficiente, necesita un crédito de $XXXX"
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    const float costoAlquiler=10000,carameloCosto=2.50,costoMantenimiento=5000;
    float presupuesto=0,caramelosMantenimiento=0,caramelosSobrantes=0,totalPagar=0,credito=0;
    int totalCaramelos=0;

    cout<<"Ingrese su presupuesto inicial"<<endl;
    cin>>presupuesto;
    cout<<"Cúantos caramelos quiere producir?";
    cin>>totalCaramelos;

    caramelosMantenimiento = (int)totalCaramelos / 100;

    totalPagar+=totalCaramelos*carameloCosto;
    totalPagar+=caramelosMantenimiento*costoMantenimiento;
    totalPagar+=costoAlquiler;
    credito=totalPagar - presupuesto;
    if(credito<0)credito=-credito;

    if(presupuesto>totalPagar)cout<<"El presupuesto es suficiente para cubrir los costos de: $" << totalPagar << endl;
    else cout<< "El presupuesto no es suficiente, necesita un crédito de:$ " << credito <<  endl;


    
    
}
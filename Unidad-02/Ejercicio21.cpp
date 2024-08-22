#include <iostream>
#include <locale.h>
using namespace std;

// Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40
// marrones y 49 grises. Se pide hacer un programa donde se ingresen tres
// ventas. Cada venta está compuesta por:
// - Cantidad de carteras
// - Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)
// Calcular e informar:
// - Cantidad total de carteras vendidas en total.
// - Cuántas carteras quedaron de cada tipo.
// - Los colores de carteras que no se vendieron.
// NOTA: Ninguna venta superará las 10 carteras.

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int opcion=0,carterasBlancas=45,carterasNegras=50,carterasMarrones=40,CarterasGrises=49,cantidadCarteras=0;
    int venta1=0,venta2=0,venta3=0,acuCarteras=0;
    cout<<"Venta 1: " <<endl;
    cout<<"Ingrese la cantidad de carteras que desea Comprar: "<<endl;
    cin>>cantidadCarteras;
    cout<<"Seleccione el Color de las Carteras:1-Blancas,2-Negras,3-Marrones,4-Grises"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        carterasBlancas=carterasBlancas-cantidadCarteras;
        
        break;
    
    default:
        break;
    }
    
    

    
}
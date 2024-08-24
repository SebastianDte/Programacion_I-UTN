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
    float acuCarteras = 0;
    cout<<"Venta 1: " <<endl;
    cout<<"Ingrese la cantidad de carteras que desea Comprar: "<<endl;
    cin>>cantidadCarteras;
    if(cantidadCarteras>10)cout<<"No puedo comprar más de 10 carteras"<<endl;
    else{
        cout<<"Seleccione el Color de las Carteras:1-Blancas,2-Negras,3-Marrones,4-Grises"<<endl;
        cin >> opcion;
        acuCarteras += cantidadCarteras;

        switch (opcion)
    {
    case 1:
        carterasBlancas=carterasBlancas-cantidadCarteras;
        break;
    case 2:
        carterasNegras=carterasNegras-cantidadCarteras;
        break;
    case 3:
        carterasMarrones=carterasMarrones-cantidadCarteras;
        break;
    case 4:
        CarterasGrises=CarterasGrises-cantidadCarteras;
        break;
    default:
        cout<<"Opcion no valida"<<endl;
        break;
    }
    }

    

    cout<<"Venta 2: " <<endl;
    cout<<"Ingrese la cantidad de carteras que desea Comprar: "<<endl;
    cin>>cantidadCarteras;
    if(cantidadCarteras>10)cout<<"No puedo comprar más de 10 carteras"<<endl;
    else{
        cout<<"Seleccione el Color de las Carteras:1-Blancas,2-Negras,3-Marrones,4-Grises"<<endl;
        cin >> opcion;
        acuCarteras += cantidadCarteras;

        switch (opcion)
    {
    case 1:
        carterasBlancas=carterasBlancas-cantidadCarteras;
        break;
    case 2:
        carterasNegras=carterasNegras-cantidadCarteras;
        break;
    case 3:
        carterasMarrones=carterasMarrones-cantidadCarteras;
        break;
    case 4:
        CarterasGrises=CarterasGrises-cantidadCarteras;
        break;
    default:
        cout<<"Opcion no valida"<<endl;
        break;
    }

    cout<<"Venta 3: " <<endl;
    cout<<"Ingrese la cantidad de carteras que desea Comprar: "<<endl;
    cin>>cantidadCarteras;
     if(cantidadCarteras>10)cout<<"No puedo comprar más de 10 carteras"<<endl;
    else{
        cout<<"Seleccione el Color de las Carteras:1-Blancas,2-Negras,3-Marrones,4-Grises"<<endl;
        cin >> opcion;
        acuCarteras += cantidadCarteras;

        switch (opcion)
    {
    case 1:
        carterasBlancas=carterasBlancas-cantidadCarteras;
        break;
    case 2:
        carterasNegras=carterasNegras-cantidadCarteras;
        break;
    case 3:
        carterasMarrones=carterasMarrones-cantidadCarteras;
        break;
    case 4:
        CarterasGrises=CarterasGrises-cantidadCarteras;
        break;
    default:
        cout<<"Opcion no valida"<<endl;
        break;
    }
    }
    }

    cout<<"Venta 4: " <<endl;
    cout<<"Ingrese la cantidad de carteras que desea Comprar: "<<endl;
    cin>>cantidadCarteras;
    if(cantidadCarteras>10)cout<<"No puedo comprar más de 10 carteras"<<endl;
    else{
        cout<<"Seleccione el Color de las Carteras:1-Blancas,2-Negras,3-Marrones,4-Grises"<<endl;
        cin >> opcion;
        acuCarteras += cantidadCarteras;

        switch (opcion)
    {
    case 1:
        carterasBlancas=carterasBlancas-cantidadCarteras;
        break;
    case 2:
        carterasNegras=carterasNegras-cantidadCarteras;
        break;
    case 3:
        carterasMarrones=carterasMarrones-cantidadCarteras;
        break;
    case 4:
        CarterasGrises=CarterasGrises-cantidadCarteras;
        break;
    default:
        cout<<"Opcion no valida"<<endl;
        break;
    }
    }

    cout<<"Se vendieron en total: " << acuCarteras << " Carteras" << endl;
    
    cout<<"Quedaron: " << carterasBlancas << " Carteras Bancas" << endl;
    cout<<"Quedaron: " << carterasNegras << " Carteras Negras" << endl;
    cout<<"Quedaron: " << carterasMarrones << " Carteras Marrones" << endl;
    cout<<"Quedaron: " << CarterasGrises << " Carteras Grises" << endl;
    
    if(carterasBlancas==45)cout<<" No se vendieron Carteras Blancas" <<endl;
    if(carterasMarrones==40)cout<<" No se vendieron Carteras Marrones" <<endl;
    if(carterasNegras==50)cout<<" No se vendieron Carteras Negras" <<endl;
    if(CarterasGrises==49)cout<<" No se vendieron Carteras Grises" <<endl;


}
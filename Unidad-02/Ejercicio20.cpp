#include <iostream>
#include <locale.h>
using namespace std;

// Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego,
// calcular e informar:
// - La cantidad de personas mayores a 30 años que midan más de 1.8
// metros.
// - El promedio de altura de las personas mayores a 30 años.
// - La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
// - La cantidad de personas cuya edad sea de 20, 30 o 40 años.

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int edad1,edad2,edad3,edad4,edad5,contadorM=0,contBajitos=0,contEdadS=0;
    float alt1,alt2,alt3,alt4,alt5,acuPromedio=0,PromedioM=0;

    cout<<"Ingrese las edades: " << endl;
    cout<<"Edad 1: ";
    cin>>edad1;
    cout<<"Edad 2: ";
    cin>>edad2;
    cout<<"Edad 3: ";
    cin>>edad3;
    cout<<"Edad 4: ";
    cin>>edad4;
    cout<<"Edad 5: ";
    cin>>edad5;
    cout<<"Ingrese las alturas: " <<endl;
    cout<<"Altura 1: " << endl;
    cin>>alt1;
    cout<<"Altura 2: " << endl;
    cin>>alt2;
    cout<<"Altura 3: " << endl;
    cin>>alt3;
    cout<<"Altura 4: " << endl;
    cin>>alt4;
    cout<<"Altura 5: " << endl;
    cin>>alt5;

    if(edad1>30&&alt1>1.8){contadorM++,acuPromedio+=alt1;}
    if(edad2>30&&alt2>1.8){contadorM++,acuPromedio+=alt2;}
    if(edad3>30&&alt3>1.8){contadorM++,acuPromedio+=alt3;}
    if(edad4>30&&alt4>1.8){contadorM++,acuPromedio+=alt4;}
    if(edad5>30&&alt5>1.8){contadorM++,acuPromedio+=alt5;}

    if(alt1>=1.7 && alt1<=1.8)contBajitos++;
    if(alt2>=1.7 && alt2<=1.8)contBajitos++;
    if(alt3>=1.7 && alt3<=1.8)contBajitos++;
    if(alt4>=1.7 && alt4<=1.8)contBajitos++;
    if(alt5>=1.7 && alt5<=1.8)contBajitos++;

    if(edad1 == 20 || edad1 == 30 || edad1 == 40)contEdadS++;
    if(edad2 == 20 || edad2 == 30 || edad2 == 40)contEdadS++;
    if(edad3 == 20 || edad3 == 30 || edad3 == 40)contEdadS++;
    if(edad4 == 20 || edad4 == 30 || edad4 == 40)contEdadS++;
    if(edad5 == 20 || edad5 == 30 || edad5 == 40)contEdadS++;

    if(contadorM>0)PromedioM=acuPromedio / contadorM;

    cout<<" Cantidad de personas mayores a 30 años que miden más de 1.8 metros." << endl;
    cout<<"Promedio de altura de las personas mayores a 30 años: " << PromedioM << endl;
    cout<<"Cantidad de personas con altura entre 1.7 y 1.8: " << contBajitos << endl;   
    cout<<"cantidad de personas cuya edad sea de 20, 30 o 40 años: " << contEdadS << endl;
}
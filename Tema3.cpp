#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
protected:

     int Edad; 
     char Nombre[10]; 

public:
     void Informacion (int x, char y[10])
     {
        Edad = x;
        strcpy(y, Nombre);
     }

};

class Zebra:public Animal
{
    public:

    void Mensaje_Zebra()
    {
    cout<< "El nombre de la zebra "<< Nombre <<" y tiene "<< Edad << " " << "Años de edad. La zebre viene del zoologico de Santo Domingo. \n";
    }
};

class Delfin: public Animal
{
    public:

    void Mensaje_Delfin()
    {
    cout<< "El nombre del delfin "<< Nombre << " y tiene "<< Edad << " " << "Años de edad. El Delfin viene de Ocean World en Puerto Plata. \n";  
    }
};


int main ()
{
    Zebra zebr;
    Delfin delf;
    char N1[10]="Raya";
    char N2[10]="Azul";

    zebr.Informacion (9, N1);
    delf.Informacion (5, N2);

    zebr.Mensaje_Zebra();
    delf.Mensaje_Delfin();

    return 0;
}
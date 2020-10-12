#include <iostream>
using namespace std;

class Madre{
public:
    void Mostrar ()
    {
        cout << "Madre: Funcion de la madre\n";
    }
};

class Hija : public Madre{
public:
    void Mostrar ()
    {
        cout << "Hija: Funcion de la hija\n";
    }
};

int main ()
{
    Hija Katherine; //Si se quisiera se pudiera ingresar a la madre para desplegar por pantalla con el mismo orden usado anteriormente 
    Katherine.Mostrar();
    return 0;
}
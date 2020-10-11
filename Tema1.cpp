#include<cmath>
#include <iostream>

using namespace std;

class Figura
{
protected:
    float Base, Altura;
public:
    void MargenesFigura (float x, float y)
    {
        Base = x;
        Altura = y;
    }
};

class Rectangulo: public Figura
{
public:
    float AreaDelRectangulo ()
    {
        return (Base * Altura);
    }
};

class Triangulo: public Figura
{
public:
    float AreaDelTriangulo ()
    {
        return (Base * Altura / 2);
    }
};

int main ()
{

    Rectangulo rect;
    Triangulo trian;
    rect.MargenesFigura (20,56);//Aqui se pueden editar los valores de cada figura
    trian.MargenesFigura (50,108); //Aqui se pueden editar los valores de cada figura
    
    cout << rect.AreaDelRectangulo() << endl;
    cout << trian.AreaDelTriangulo() << endl;
    return 0;
};
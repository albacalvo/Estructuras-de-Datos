#ifndef AFICIONADO_HPP
#define AFICIONADO_HPP
#include <iomanip>
#include <iostream>
using namespace std;
class Aficionado
{
public:
    Aficionado();
    ~Aficionado();
    /*Constructor 
    crearAficionado: int -> int*/
    void crearAficionado(int ID, int horaLlegada);
    /*Muestra por pantalla el aficionado*/
    void escribir();
    /*Devuelve si el aficionado es socio o no 
     * esSocio: -> bool*/
    bool esSocio();
    /*Devuelve el ID del aficionado 
     * getID: -> int*/
    int getID();
    /*Devuelve la hora de llegada del aficionado 
     * getHoraLlegada: -> int*/
    int getHoraLlegada();
    /*Cambia el valor de la hora de llegada*/
    void setHoraLlegada(int horaLlegada);

private:
    int ID;
    int horaLlegada;
};

#endif // AFICIONADO_HPP

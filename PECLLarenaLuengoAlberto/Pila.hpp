#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"

class Pila
{
public:
    Pila();
    ~Pila();
    /*Inserta el aficionado en la pila 
     * insertar: Aficionado -> */
    void insertar(Aficionado afi);
    /*Elimina el aficionado de la cima de la pila y lo devuelve
     * extraer: -> Aficionado */
    Aficionado extraer();
    /*Muestra por pantalla los aficionados almacenados en la pila*/
    void mostrar();
    /*Devuelve el numero de aficionados almacenados en la pila
     * contar: -> int*/
    int contar();

private:
    pNodoPila ultimo;
};

#endif // PILA_HPP
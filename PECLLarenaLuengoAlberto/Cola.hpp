#ifndef COLA_HPP
#define COLA_HPP
#include "NodoCola.hpp"

class Cola
{
public:
    Cola();
    ~Cola();
    /*Inserta el aficionado en la cola
     * insertar: Aficionado*/
    void insertar(Aficionado afi);
    /*Borra el primer aficionado de la cola y lo devuelve
     * eliminar: -> Aficionado*/
    Aficionado eliminar();
    /*Muestra por pantalla los aficionados almacenados en la cola*/
    void mostrar();
    /*Devuelve el numero de aficionados almacenados en la cola
     * contar: -> int*/
    int contar();
    /*Devuelve un boolean indicando si la cola esta vacia
     * esVacia: -> bool*/
    bool esVacia();
    
private:
    pNodoCola primero, ultimo;
};

#endif // COLA_HPP
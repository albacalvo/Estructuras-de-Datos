#ifndef LISTA_HPP
#define LISTA_HPP
#include "NodoLista.hpp"

class Lista
{
public:
    Lista();
    ~Lista();
    /*Inserta ordenadamente afi en la lista
     * insertar_orden: Aficionado -> */
    void insertar_orden(Aficionado afi);
    /*Muestra por pantalla todos los aficionados de la lista*/
    void mostrar();
    /*Devuelve un booleano indicando si la lista esta vacia
     * esVacia: -> bool*/
    bool esVacia();
    /*Muestra por pantalla el primer socio de la lista*/
    void primerSocio();
    /*Muestra por pantalla el ultimo socio de la lista*/
    void ultimoSocio();
    /*Muestra por pantalla el primer simpatizante de la lista*/
    void primerSimp();
    /*Muestra por pantalla el ultimo simpatizante de la lista*/
    void ultimoSimp();
    /*Devuelve el primer aficionado de la lista y lo elimina de la misma*/
    Aficionado elimInicial();

private:
    pNodoLista primero, ultimo;
    int longitud;
};

#endif // LISTA_HPP
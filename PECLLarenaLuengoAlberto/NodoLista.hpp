#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP
#include "Aficionado.hpp"

class NodoLista
{
public:
    NodoLista(Aficionado afi, NodoLista* sig = NULL, NodoLista* ant = NULL);
    ~NodoLista();

private:
    Aficionado aficionado;
    NodoLista* siguiente;
    NodoLista* anterior;

    friend class Lista;
};
typedef NodoLista* pNodoLista;
#endif // NODOLISTA_HPP

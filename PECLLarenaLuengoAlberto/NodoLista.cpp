#include "NodoLista.hpp"

NodoLista::NodoLista(Aficionado afi, NodoLista* sig, NodoLista* ant)
{
    aficionado=afi;
    siguiente=sig;
    anterior=ant;
}

NodoLista::~NodoLista()
{
}


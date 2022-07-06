#include "NodoArbol.hpp"

NodoArbol::NodoArbol(Aficionado aficionado, NodoArbol* izq, NodoArbol* der)
{
    this->aficionado = aficionado;
    this->izq = nullptr;
    this->der = nullptr;
}

NodoArbol::~NodoArbol()
{
}
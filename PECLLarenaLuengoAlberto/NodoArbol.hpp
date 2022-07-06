#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Aficionado.hpp"
#include "Lista.hpp"

using namespace std;
class NodoArbol
{
public:
    NodoArbol(Aficionado aficionado,NodoArbol* izq = NULL, NodoArbol* der = NULL);
    ~NodoArbol();

private:
    Aficionado aficionado;
    NodoArbol* izq;
    NodoArbol* der;

    friend class Arbol;
};
typedef NodoArbol* pnodoAbb;
#endif // NODOARBOL_HPP

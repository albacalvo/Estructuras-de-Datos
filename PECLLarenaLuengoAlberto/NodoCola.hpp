#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP
#include "Aficionado.hpp"


class NodoCola
{
public:
    NodoCola(Aficionado afi, NodoCola* sig = NULL);
    ~NodoCola();

private:
    Aficionado aficionado;
    NodoCola* siguiente;

    friend class Cola;
};

typedef NodoCola* pNodoCola;

#endif // NODOCOLA_HPP
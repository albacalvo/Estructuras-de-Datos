#include "NodoCola.hpp"

NodoCola::NodoCola(Aficionado afi, NodoCola* sig)
{
    aficionado = afi;
    siguiente = sig;
}

NodoCola::~NodoCola()
{
}
#include "Cola.hpp"
#include "NodoCola.hpp"

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
}
void Cola::insertar(Aficionado afi)
{
    pNodoCola nuevo;
    nuevo = new NodoCola(afi);
    if(ultimo)
        ultimo->siguiente = nuevo;
    ultimo = nuevo;
    if(!primero)
        primero = nuevo;
}
Aficionado Cola::eliminar()
{
    pNodoCola nodo;
    Aficionado afi;
    nodo = primero;
    if(!nodo)
        return Aficionado();
    primero = nodo->siguiente;
    afi = nodo->aficionado;
    delete nodo;
    if(!primero)
        ultimo = NULL;
    return afi;
}

int Cola::contar()
{
    int n=0;
    pNodoCola aux = primero;
    while(aux){
        aux = aux->siguiente;
        n+=1;
    }
    return n;
}
void Cola::mostrar()
{
    pNodoCola aux=primero;
    while(aux){
        aux->aficionado.escribir();
        aux = aux->siguiente;
        }
        cout << endl;
}
bool Cola::esVacia(){
    return primero==NULL;
    }
Cola::~Cola()
{
    while(primero)
        eliminar();
}
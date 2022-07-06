#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
}
void Pila::insertar(Aficionado afi)
{
    pNodoPila nuevo;
    nuevo = new NodoPila(afi, ultimo);
    ultimo = nuevo;
}
Aficionado Pila::extraer()
{
    pNodoPila nodo;
    Aficionado afi;
    if(!ultimo)
        return Aficionado(); /*era return 0*/

    nodo = ultimo;
    ultimo = nodo->siguiente;
    afi = nodo->aficionado;

    delete nodo;
    return afi;
}
void Pila::mostrar() //esto no se si va bien
{
    pNodoPila aux = ultimo;
    while(aux) {
        aux->aficionado.escribir();
        aux = aux->siguiente;
    }
    cout << endl;
}
int Pila::contar(){
    int n=0;
    pNodoPila aux = ultimo;
    while(aux){
        aux = aux->siguiente;
        n+=1;
        }
    return n;
}

Pila::~Pila()
{
    pNodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}
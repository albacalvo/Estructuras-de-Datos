#include "Lista.hpp"

Lista::Lista()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}
void Lista::insertar_orden(Aficionado afi)
{
    pNodoLista nuevo, aux;
    nuevo = new NodoLista(afi);
    if(esVacia()) { // Si la lista esta vacia hacemos que sea unitaria
        primero = nuevo;
        ultimo = nuevo;
    } else if(afi.esSocio()) { // Si es socio:
        if(afi.getHoraLlegada() <
            primero->aficionado.getHoraLlegada()) { // si la hora es menor, pasar a ser el nuevo primero
            nuevo->siguiente = primero;
            primero->anterior = nuevo;
            primero = nuevo;
        } else {
            aux = primero;
            while(aux != NULL && aux->aficionado.getHoraLlegada() < afi.getHoraLlegada() && aux->aficionado.esSocio()) {
                aux = aux->siguiente;
            }
            if(aux == NULL) { // Si aux es nulo pasara a ser el ultimo
                ultimo->siguiente = nuevo;
                nuevo->anterior = ultimo;
                ultimo = nuevo;
            } else {
                nuevo->siguiente = aux;
                aux->anterior->siguiente = nuevo;
                nuevo->anterior = aux->anterior;
                aux->anterior = nuevo;
            }
        }
    } else { // Sino es socio:

        if(afi.getHoraLlegada() > ultimo->aficionado.getHoraLlegada() || ultimo->aficionado.esSocio()) { //
            nuevo->anterior = ultimo;
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
        } else {
            aux = ultimo;
            while(aux->aficionado.getHoraLlegada() > afi.getHoraLlegada() && !aux->aficionado.esSocio()) {
                aux = aux->anterior;
            }
            nuevo->anterior = aux;
            aux->siguiente->anterior = nuevo;
            nuevo->siguiente = aux->siguiente;
            aux->siguiente = nuevo;
        }
    }

    longitud = longitud + 1;
}

bool Lista::esVacia()
{
    return (longitud == 0);
}

void Lista::mostrar()
{
    pNodoLista aux = primero;
    while(aux) {
        aux->aficionado.escribir();
        aux = aux->siguiente;
    }
    cout << endl;
}
void Lista::primerSocio()
{
    cout << "El primer socio es: " << setw(20);
    primero->aficionado.escribir();
}
void Lista::ultimoSocio()
{
    pNodoLista aux = primero;
    while(aux->aficionado.esSocio()) {
        aux = aux->siguiente;
    }
    cout << "El último socio es: " << setw(20);
    aux->anterior->aficionado.escribir();
}
void Lista::primerSimp()
{
    pNodoLista aux = primero;
    while(aux->aficionado.esSocio()) {
        aux = aux->siguiente;
    }
    cout << "El primer simpatizante es: " << setw(10);
    aux->aficionado.escribir();
}
void Lista::ultimoSimp()
{
    cout << "El último simpatizante es: " << setw(10);
    ultimo->aficionado.escribir();
}
Aficionado Lista::elimInicial()
{
pNodoLista aux;
if(!esVacia()){
    aux=primero;
    primero=primero->siguiente;
    if(primero==NULL){
        ultimo=NULL;
        }else{
            primero->anterior=NULL;
            }
    aux->siguiente=NULL;
    longitud=longitud-1;
    }
    return aux->aficionado;
    }
Lista::~Lista()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

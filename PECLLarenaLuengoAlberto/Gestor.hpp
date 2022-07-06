#ifndef GESTOR_HPP
#define GESTOR_HPP
#include "Cola.hpp"
#include "Lista.hpp"
#include "Pila.hpp"
#include "Arbol.hpp"
#include <stdlib.h>
#include <time.h>
#include <string>

class Gestor
{
public:
    Gestor();
    ~Gestor();
    /*Devuelve el numero de aficionados almacenados en la pila
     * getNumAficionados: -> int*/
    int getNumAficionados();
    /*Devuelve el numero de aficionados almacenados en la cola
     * getNumSociosEnCola: -> int*/
    int getNumSociosEnCola();
    /*Devuelve el numero de simpatizantes almacenados en la cola
     * getNumSimpatizantesEnCola: -> int*/
    int getNumSimpatizantesEnCola();
    /*Genera 10 aficionados de forma aleatoria y los almacena en la pila*/
    void genera10Aficionados();
    /*Muestra los aficionados almacenados en la pila*/
    void muestraAficionados();
    /*Borra los aficionados almacenados en la pila*/
    void borraAficionados();
    /*Almacena los aficionados almacenados en la pila en la cola de simpatizantes y socios*/
    void encolarAficionados();
    /*Muestra los aficionados almacenados en la cola de socios*/
    void muestraSocios();
    /*Muestra los aficionados almacenados en la cola de simpatizantes*/
    void muestraSimpatizantes();
    /*Vacia la cola de socios y de simpatizantes*/
    void vaciaColas();
    /*Almacena y muestra de forma ordenada los aficionados de las colas de socios y sipatiazntes en una lista*/
    void muestraAficionadosEnLista();
    /*Muestra los primeros y ultimos socios y simpatizantes de la lista*/
    void buscaSocios();
    /*Reinicia el programa*/
    void reiniciar();
    /*Almacena los aficionados almacenados en la lista en el ABB*/
    void crearABB();
    /*Muestra por pantalla el árbol*/
    void dibujaABB();
    /*Muestra por pantalla los socios ordenados por su ID*/
    void sociosOrd();
    /*Muestra por pantalla los simpatizantes ordenados por su ID*/
    void simpatizantesOrd();
    /*Muestra por pantalla los aficionados inorden*/
    void afiInorden();
    /*Muestra el primer aficionado, simpatizante y el último socio, aficionado del ABB*/
    void buscaAfis();
    /*Muestra por pantalla el número de socios almacenados en el árbol*/
    void contarSocios();
    /*Muestra por pantalla los aficionados localizados en un nodo hoja*/
    void hojas();
    /*Borra un aficionado en función de su ID del árbol*/
    void borrarID();
private:
    Pila pila;
    Cola colaSocios;
    Cola colaSimpatizantes;
    Lista lista;
    Arbol arbol;
    int afiTotales;
};

#endif // GESTOR_HPP

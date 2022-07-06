#ifndef ARBOL_HPP
#define ARBOL_HPP

#include "NodoArbol.hpp"
#include <vector>
using namespace std;

class Arbol
{
public:
    Arbol();
    void insertar(Aficionado afi);
    /*Muestra por pantalla el ABB*/
    void pintar();
    void dibujar();
    /*Muestra por pantalla los socios de forma ordenada*/
    void sociosOrd();
    /*Muestra por pantalla los socios de forma ordenada*/
    void simpOrd();
    /*Muestra por pantalla el ABB de forma ordenada*/
    void inorden();
    /*Muestra por pantalla el primer aficionado del ABB*/
    void primeroUltimo();
    /*Muestra por pantalla el numero de socios en el ABB*/
    void contarSocios();
    /*Muestra por pantalla las hojas del ABB*/
    void hojas();
    /*Borrar del ABB el aficionado con int ID*/
    void borrar(int ID);
    ~Arbol();

private:
    Aficionado afiAux;
    pnodoAbb raiz;
    /*Inserta aficionado en el ABB
     * insertar: pnodoAbb, Aficionado -> pnodoAbb*/
    pnodoAbb insertar(pnodoAbb, Aficionado);
    void pintar(pnodoAbb);
    /*Devuelve la altura desde pnodoAbb
     * altura: pnodoAbb -> int*/
    int altura(pnodoAbb);
    /*Muestra por pantalla en inorden desde pnodoAbb*/
    void inorden(pnodoAbb);
    /*Obtiene el primer aficionado desde pnodoAbb y lo almacena en afiAux*/
    void primero(pnodoAbb);
    /*Obtiene el ultimo aficionado desde pnodoAbb y lo almacena en afiAux*/
    void ultimo(pnodoAbb);
    /*Cuenta el numero de nodos desde pnodoAbb*/
    int contar(pnodoAbb);
    void hojas(pnodoAbb);
    /*Borra al aficionado con el ID pasado como parametro*/
    void borrar(int ID,pnodoAbb &nodo);
    /*Une dos ABB de busqueda*/
    pnodoAbb unirABB(pnodoAbb izq ,pnodoAbb der);
    void
    dibujarNodo(vector<string>& output, vector<string>& linkAbove, pnodoAbb nodo, int nivel, int minPos, char linkChar);
};

#endif // ARBOL_HPP
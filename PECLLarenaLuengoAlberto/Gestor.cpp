#include "Gestor.hpp"

Gestor::Gestor()
{
    afiTotales = 0;
}

int Gestor::getNumAficionados()
{
    return pila.contar();
}
int Gestor::getNumSociosEnCola()
{
    return colaSocios.contar();
}
int Gestor::getNumSimpatizantesEnCola()
{
    return colaSimpatizantes.contar();
}
bool repeticion(int n, int num[]) // Comprueba que el numero no esta repetido
{
    for(int i = 0; i < 10; i++) {
        if(num[i] == n) {
            return true;
        }
    }
    return false;
}

void Gestor::genera10Aficionados()
{
    srand(time(NULL));
    int id, num[10], h;
    Aficionado afi;
    for(int i = 0; i < 10; i++) {
        do {
            id = 1 + rand() % 10;
        } while(repeticion(id, num));
        num[i] = id;
        h = rand() % 60;
        afi.crearAficionado(id + afiTotales, h);
        pila.insertar(afi);
    }
    afiTotales = afiTotales + 10;
}

void Gestor::muestraAficionados()
{
    pila.mostrar();
}

void Gestor::encolarAficionados()
{
    Aficionado afi;
    int nAficionados = getNumAficionados();
    for(int i = 0; i < nAficionados; i++) {
        afi = pila.extraer();
        if(afi.esSocio())
            colaSocios.insertar(afi);
        else
            colaSimpatizantes.insertar(afi);
    }
}

void Gestor::muestraSocios()
{
    cout << "Cola de Socios: " << endl;
    colaSocios.mostrar();
}

void Gestor::muestraSimpatizantes()
{
    cout << "Cola de Simpatizantes: " << endl;
    colaSimpatizantes.mostrar();
}
void Gestor::borraAficionados()
{
    pila.~Pila();
}

void Gestor::vaciaColas()
{
    colaSocios.~Cola();
    colaSimpatizantes.~Cola();
}
void Gestor::muestraAficionadosEnLista()
{
    while(!colaSocios.esVacia()) {
        lista.insertar_orden(colaSocios.eliminar());
    }
    while(!colaSimpatizantes.esVacia()) {
        lista.insertar_orden(colaSimpatizantes.eliminar());
    }
    lista.mostrar();
}
void Gestor::buscaSocios()
{
    if(!lista.esVacia()) {
        lista.primerSocio();
        lista.ultimoSocio();
        lista.primerSimp();
        lista.ultimoSimp();
    }
}

void Gestor::reiniciar()
{
    afiTotales = 0;
    borraAficionados();
    vaciaColas();
    lista.~Lista();
    arbol.~Arbol();
}
void Gestor::crearABB()
{
    while(!lista.esVacia()) {
        arbol.insertar(lista.elimInicial());
    }
}
void Gestor::dibujaABB()
{
    arbol.dibujar();
}
void Gestor::sociosOrd()
{
    arbol.sociosOrd();
}
void Gestor::simpatizantesOrd()
{
    arbol.simpOrd();
}
void Gestor::afiInorden()
{
    arbol.inorden();
}
void Gestor::buscaAfis()
{
    arbol.primeroUltimo();
}
void Gestor::contarSocios()
{
    arbol.contarSocios();
}
void Gestor::hojas()
{
    arbol.hojas();
}
void Gestor::borrarID()
{
    std::string str;
    int a;
    cout << "Indique el ID que desea borrar: ";
    cin >> str;
    cout << endl;
    if(sscanf(str.c_str(), "%d", &a) != 1) {
        cout << "ERROR: ID no valido, vuelva a intentarlo." << endl;
        borrarID();
    } else {
        arbol.borrar(a);
        arbol.dibujar();
    }
}
Gestor::~Gestor()
{
}

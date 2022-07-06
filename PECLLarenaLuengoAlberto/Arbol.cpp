// Arbol.cpp - Implementación de la clase Arbol
// Fecha: 04-12-2020
// Creado por: Hamid

#include "Arbol.hpp"

Arbol::Arbol()
{
    Aficionado afiRaiz;
    afiRaiz.crearAficionado(0, 0);
    raiz = new NodoArbol(afiRaiz);
}
void Arbol::insertar(Aficionado afi)
{
    raiz = insertar(raiz, afi);
}
pnodoAbb Arbol::insertar(pnodoAbb nodo, Aficionado afi)
{
    if(!nodo) {
        return new NodoArbol(afi);
    }
    if(afi.getID() <= nodo->aficionado.getID() || (nodo->aficionado.getID() == 0 && afi.esSocio())) {
        nodo->izq = insertar(nodo->izq, afi);
    } else {
        nodo->der = insertar(nodo->der, afi);
    }
    return nodo;
}
void Arbol::pintar()
{
    pintar(raiz);
    cout << '\n';
}
void Arbol::pintar(pnodoAbb nodo)
{
    if(!nodo)
        return;
    pintar(nodo->izq);
    cout << nodo->aficionado.getID() << " ";
    pintar(nodo->der);
}
int Arbol::altura(pnodoAbb nodo)
{
    if(!nodo)
        return 0;
    return 1 + max(altura(nodo->izq), altura(nodo->der));
}

void Arbol::dibujarNodo(vector<string>& output,
    vector<string>& linkAbove,
    pnodoAbb nodo,
    int nivel,
    int p,
    char linkChar)
{
    if(!nodo)
        return;

    int h = output.size();
    string SP = " ";

    if(p < 0) {
        string extra(-p, ' ');
        for(string& s : output)
            if(!s.empty())
                s = extra + s;
        for(string& s : linkAbove)
            if(!s.empty())
                s = extra + s;
    }
    if(nivel < h - 1)
        p = max(p, (int)output[nivel + 1].size());
    if(nivel > 0)
        p = max(p, (int)output[nivel - 1].size());
    p = max(p, (int)output[nivel].size());

    if(nodo->izq) {
        string izqdato = SP + to_string(nodo->izq->aficionado.getID()) + SP;
        dibujarNodo(output, linkAbove, nodo->izq, nivel + 1, p - izqdato.size(), 'L');
        p = max(p, (int)output[nivel + 1].size());
    }

    int space = p - output[nivel].size();
    if(space > 0)
        output[nivel] += string(space, ' ');
    string nododato = SP + to_string(nodo->aficionado.getID()) + SP;
    output[nivel] += nododato;

    space = p + SP.size() - linkAbove[nivel].size();
    if(space > 0)
        linkAbove[nivel] += string(space, ' ');
    linkAbove[nivel] += linkChar;

    if(nodo->der)
        dibujarNodo(output, linkAbove, nodo->der, nivel + 1, output[nivel].size(), 'R');
}
void Arbol::dibujar()
{
    int h = altura(raiz);
    vector<string> output(h), linkAbove(h);
    dibujarNodo(output, linkAbove, raiz, 0, 5, ' ');

    for(int i = 1; i < h; i++) {
        for(int j = 0; j < linkAbove[i].size(); j++) {
            if(linkAbove[i][j] != ' ') {
                int size = output[i - 1].size();
                if(size < j + 1)
                    output[i - 1] += string(j + 1 - size, ' ');
                int jj = j;
                if(linkAbove[i][j] == 'L') {
                    while(output[i - 1][jj] == ' ')
                        jj++;
                    for(int k = j + 1; k < jj - 1; k++)
                        output[i - 1][k] = '_';
                } else if(linkAbove[i][j] == 'R') {
                    while(output[i - 1][jj] == ' ')
                        jj--;
                    for(int k = j - 1; k > jj + 1; k--)
                        output[i - 1][k] = '_';
                }
                linkAbove[i][j] = '|';
            }
        }
    }

    cout << '\n' << '\n';
    for(int i = 0; i < h; i++) {
        if(i)
            cout << linkAbove[i] << '\n';
        cout << output[i] << '\n';
    }
    cout << '\n' << '\n';
}
void Arbol::sociosOrd()
{
    inorden(raiz->izq);
}
void Arbol::simpOrd()
{
    inorden(raiz->der);
}
void Arbol::inorden()
{
    inorden(raiz);
}

void Arbol::inorden(pnodoAbb nodo)
{
    if(nodo != NULL) {
        inorden(nodo->izq);
        if(nodo->aficionado.getID() != 0) {
            nodo->aficionado.escribir();
        }
        inorden(nodo->der);
    }
}
void Arbol::primeroUltimo()
{
    Aficionado primerAfi, ultimoSocio, primerSimp, ultimoAfi;
    afiAux.crearAficionado(0, 60);
    primero(raiz);
    primerAfi = afiAux;
    if(afiAux.esSocio()) {  //Si el aficionado no es socio, primerAfi será el mismo que primerSimp
        afiAux.setHoraLlegada(60);
        primero(raiz->der);
    }
    primerSimp = afiAux;
    afiAux.setHoraLlegada(0);
    ultimo(raiz);
    ultimoAfi = afiAux;
    if(!afiAux.esSocio()) { //Si el aficionado es socio, ultimoSocio será el mismo que ultimoSocio
        afiAux.setHoraLlegada(0);
        ultimo(raiz->izq);
    }
    ultimoSocio = afiAux;
    cout << "Primer aficionado en acceder al estadio: " << setw(10);
    primerAfi.escribir();
    cout << "Ultimo socio en acceder al estadio: " << setw(20);
    ultimoSocio.escribir();
    cout << "Primer simpatizante en acceder al estadio: " << setw(10);
    primerSimp.escribir();
    cout << "Ultimo aficionado en acceder al estadio: " << setw(10);
    ultimoAfi.escribir();
}
void Arbol::primero(pnodoAbb nodo)
{
    if(nodo != NULL) {
        primero(nodo->izq);
        if(nodo->aficionado.getID() != 0 && afiAux.getHoraLlegada() > nodo->aficionado.getHoraLlegada()) {
            afiAux = nodo->aficionado;
        }
        primero(nodo->der);
    }
}
void Arbol::ultimo(pnodoAbb nodo)
{
    if(nodo != NULL) {
        ultimo(nodo->izq);
        if(nodo->aficionado.getID() != 0 && afiAux.getHoraLlegada() < nodo->aficionado.getHoraLlegada()) {
            afiAux = nodo->aficionado;
        }
        ultimo(nodo->der);
    }
}
void Arbol::contarSocios()
{
    int numSocios;
    numSocios = contar(raiz->izq);
    cout << endl << "Socios en el ABB: " << numSocios << endl;
}
int Arbol::contar(pnodoAbb nodo)
{
    int aux;
    if(nodo == 0) {
        aux = 0;
    } else {
        aux = 1 + contar(nodo->der) + contar(nodo->izq);
    }
    return aux;
}
void Arbol::hojas()
{
    hojas(raiz);
}
void Arbol::hojas(pnodoAbb nodo)
{
    if(nodo->der == NULL && nodo->izq == NULL) {
        nodo->aficionado.escribir();
    } else {
        if(nodo->izq != NULL) {
            hojas(nodo->izq);
        }
        if(nodo->der != NULL) {
            hojas(nodo->der);
        }
    }
}
void Arbol::borrar(int ID)
{
    if(ID % 2 == 0) {
        borrar(ID, raiz->izq);
    } else {
        borrar(ID, raiz->der);
    }
}
void Arbol::borrar(int ID, pnodoAbb& nodo)
{
    if(nodo != NULL) {
        if(ID < nodo->aficionado.getID()) {
            borrar(ID, nodo->izq);
        } else if(ID > nodo->aficionado.getID()) {
            borrar(ID, nodo->der);
        } else {
            pnodoAbb paux = nodo;
            nodo = unirABB(nodo->izq, nodo->der);
            delete paux;
        }
    }
}
pnodoAbb Arbol::unirABB(pnodoAbb izq, pnodoAbb der)
{
    if(izq == NULL) {
        return der;
    }
    if(der == NULL) {
        return izq;
    }
    pnodoAbb centro = unirABB(izq->der, der->izq);
    izq->der = centro;
    der->izq = izq;
    return der;
}
Arbol::~Arbol()
{
    raiz->der = NULL;
    raiz->izq = NULL;
}

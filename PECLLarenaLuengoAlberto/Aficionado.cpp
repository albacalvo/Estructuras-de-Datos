#include "Aficionado.hpp"

Aficionado::Aficionado()
{
    ID = 0;
    horaLlegada = 0;
}
void Aficionado::crearAficionado(int ID, int horaLlegada)
{
    this->ID = ID;
    this->horaLlegada = horaLlegada;
}
int Aficionado::getID()
{
    return this->ID;
}
int Aficionado::getHoraLlegada()
{
    return this->horaLlegada;
}
void Aficionado::setHoraLlegada(int horaLlegada)
{
    this->horaLlegada=horaLlegada;
}
void Aficionado::escribir()
{
        char* txt;
    txt = " no es socio"; 
    if(esSocio()){
        txt = " es socio";
    }
    cout << "\tEl aficionado " << setw(2) << this->ID << setw(12) << txt << " y llego a las 18:" <<setw(2)<< this->horaLlegada <<" horas."<< endl; 
}
bool Aficionado::esSocio()
{
    if(this->ID % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
Aficionado::~Aficionado()
{
}

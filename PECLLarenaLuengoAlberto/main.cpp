#include "Aficionado.hpp"
#include "Gestor.hpp"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    Gestor gestor;
    char opcion;
    do {
        cout << "\n\t----------------------------------------------------------------------\n";
        cout << "\t" << gestor.getNumAficionados() << " Aficionados en la pila. " << gestor.getNumSociosEnCola()
             << " Socios en cola. " << gestor.getNumSimpatizantesEnCola() << " Simpatizantes en cola.\n ";
        cout << "\t----------------------------------------------------------------------\n\n";

        cout << "\t0. Generar 10 aficionados de forma aleatoria.\n";
        cout << "\t1. Consultar todos los aficionados generados en la Pila (pendientes de entrar en las colas).\n";
        cout << "\t2. Borrar los aficionados generados en la pila.\n";
        cout << "\t3. Simular llegada de los aficionados en las colas.\n";
        cout << "\t4. Consultar la cola de aficionados socios.\n";
        cout << "\t5. Consultar la cola de aficionados no socios.\n";
        cout << "\t6. Borrar los todos los aficionados de las colas.\n";
        cout << "\t7. Simular la entrada de los aficionados al estadio (a la lista).\n";
        cout << "\t8. Buscar en la lista el socio y el simpatizante que más temprano y más tarde han llegado al "
                "estadio.\n";
        cout << "\t9. Reiniciar el programa.\n";
        cout << "\tX. Crear ABB.\n";
        cout << "\tA. Dibujar ABB en consola.\n";
        cout << "\tB. Mostrar socios de menor a mayor por ID.\n";
        cout << "\tC. Mostrar no socios de menor a mayor por ID.\n";
        cout << "\tD. Mostrar aficionados en inorden\n";
        cout << "\tE. Buscar el primer aficionado y simpatizante y el ultimo aficionado y socio que han accedido al "
                "estadio.\n";
        cout << "\tF. Contar aficionados con ID par.\n";
        cout << "\tG. Mostrar aficionados almacenados en nodo hoja.\n";
        cout << "\tH. Eliminar por ID.\n";

        cout << "\tS. Salir.\n\n";

        cout << "\tIndique la opcion deseada: ";
        cin >> opcion;
        // system("clear"); // MAC
        system("cls"); // Windows
        switch(opcion) {

        case '0':
            gestor.genera10Aficionados();
            break;
        case '1':
            gestor.muestraAficionados();
            break;
        case '2':
            gestor.borraAficionados();
            break;
        case '3':
            gestor.encolarAficionados();
            break;
        case '4':
            gestor.muestraSocios();
            break;
        case '5':
            gestor.muestraSimpatizantes();
            break;
        case '6':
            gestor.vaciaColas();
            break;
        case '7':
            gestor.muestraAficionadosEnLista();
            break;
        case '8':
            gestor.buscaSocios();
            break;
        case '9':
            gestor.reiniciar();
            break;
        case 'X':
            gestor.crearABB();
            break;
        case 'A':
            gestor.dibujaABB();
            break;
        case 'B':
            gestor.sociosOrd();
            break;
        case 'C':
            gestor.simpatizantesOrd();
            break;
        case 'D':
            gestor.afiInorden();
            break;
        case 'E':
            gestor.buscaAfis();
            break;
        case 'F':
            gestor.contarSocios();
            break;
        case 'G':
            gestor.hojas();
            break;
        case 'H':
            gestor.borrarID();
            break;
        case 'S':
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion incorrecta!\n\n";
            break;
        }
    } while(opcion != 'S');
    return 0;
}

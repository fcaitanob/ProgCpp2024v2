#include <stdlib.h>
#include <iostream>

using namespace std;

// Declaracion de funciones y variables
string STR1 = "aaaabbbbccccdddd";
string STR2 = "cccc";

void opcionUno();

int main()
{
    int opc = 0;
    do {

        cout << "Menu principal\n";
        cout << "1. Programa uno\n";
        cout << "0. Fin\n";
        cin >> opc;

        switch(opc) {
        case 1:
            opcionUno();
            break;
        case 0:
            cout << "Fin del programa\n";
            break;
        default:
            cout << "Opcion no valida\n";
            break;
        };
    } while (opc != 0) ;
    return 0;
}


void opcionUno() {
    cout << "Estoy en el case opcion Uno\n";
    cout << "El string uno tiene: " << STR1 << "\n";
    cout << "El string dos tiene: " << STR2 << "\n";
    // Presiones cualquier tecla para continuar
    system("pause");

    return;
};



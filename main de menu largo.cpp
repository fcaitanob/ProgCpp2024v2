#include <stdlib.h>
#include <iostream>

using namespace std;

// Declaracion de funciones y variables
string STR1 = "aaaabbbbccccdddd";
string STR2 = "cccc";

void dspVar();
void ingVar(int);
int  largoStr(string);
void pruebaTodo();

int main()
{
    int opc = 0;
    do {

        cout << "Menu principal\n";
        cout << "1. Despliego variables globales\n";
        cout << "2. Modifico STR1\n";
        cout << "99. Prueba de todas las funciones\n";
        cout << "0. Fin\n";
        cin >> opc;

        switch(opc) {
        case 1:
            dspVar();
            break;
        case 2:
            ingVar(1);
            break;
        case 99:
            pruebaTodo();
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


void dspVar() {
    cout << "Despliego variables globales\n";
    cout << "El string uno tiene: " << STR1 << "\n";
    cout << "  El largo es: " << largoStr(STR1) << "\n";
    cout << "El string dos tiene: " << STR2 << "\n";
    cout << "  El largo es: " << largoStr(STR2) << "\n";
    // Presiones cualquier tecla para continuar
    //system("pause");
    return;
};

void ingVar(int par1) {
    string ingreso="";
    cout << "Modifico variables globales " << par1 << "\n";
    cout << "para salir sin modificar ingrese f <enter>\n";
    cout << "Ingrese variable: \n";
    cin  >> ingreso;
    if (ingreso != "f") {
        switch (par1) {
            case 1:
                STR1 = ingreso;
                break;
            default:
                break;
        }
    };
    dspVar();
    return;
};

int largoStr(string p1) {

    int x = 0;
    while (p1[x] != '\0') {
        x++;
    }
    return x;
};

void pruebaTodo() {
    //---------------------------------------
    cout << "Prueba de largoStr(string)\n";
    if (largoStr("abcd") == 4
        && largoStr("") == 0
    ) {
        cout << "  OK\n";

    } else {
        cout << "  Error\n";
    };
    return;
};









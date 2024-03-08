#include "Contenedor.h"
#include "SEdades.h"
#include "SPeso.h"
int main() {
    int respu, eMin, eMax;
    double pes;

// TRABAJANDO CON COLECCION... TEMA DELEGACION SOBRE SELECTOR
// creando coleccion...

    Contenedor* CO = new Contenedor(20); // CENTRO DE COMPUTO DE LA UNA
    Contenedor* CM = nullptr;
// CREANDO ESTUDIANTES
    Persona* per1 = new Persona("1111", "Benjamin", 21, 70 , "SJ", 1.85);
    Persona* per2 = new Persona("2222", "Lucio", 22, 65, "CAR", 1.70);
    Persona* per3 = new Persona("3333", "Percibal", 23, 66, "HER", 1.50);
    Persona* per4 = new Persona("4444", "Lorena", 24, 68, "PUN", 1.77);
    Persona* per5 = new Persona("5555", "Loreta",24 , 75, "LIM", 1.76);

    CO->agregaPersona(*per1);
    CO->agregaPersona(*per2);
    CO->agregaPersona(*per3);
    CO->agregaPersona(*per4);
    CO->agregaPersona(*per5);

// MENU
    cout << "================= MENU ====================" << endl;
    cout << "Digite la seleccion que desea observar" << endl;

    cout << "1. Rango de edades " << endl;
    cout << "2. Por peso " << endl;
    cout << "3. Rango de estatura " << endl;
    cout << "4. Lugar " << endl;

    cout << "Eleccion: "; cin >> respu;
    system("cls");

    if (respu == 1) {
        cout << "===== Seleccion por rango de edades ====" << endl;
        cout << "Digite la edad minima: "; cin >> eMin;
        cout << "Digite la edad maxima: "; cin >> eMax;
        CM = CO->seleccionar(*new SEdades(eMin, eMax));
        cout << CM->toString() << endl;
    }
    else if (respu == 2) {
        cout << "Seleccion por peso..." << endl;
        cout << "Digite el peso: "; cin >> pes;
        cout << CO->seleccionar(*new SPeso(pes))->toString() << endl;
    }

    system("pause > 0");
}
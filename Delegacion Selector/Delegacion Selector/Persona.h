#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Persona {
private:
    string cedula;
    string nombre;
    int edad;
    double peso;
    string lugar;
    double estatura;
public:
    Persona(string ced, string nom, int ed, double pe, string lug, double estatura)
            :cedula(ced), nombre(nom), edad(ed), peso(pe), lugar(lug) {}
    virtual ~Persona() {}
    string getCedula() { return cedula; }
    string getNombre() { return nombre; }
    int getEdad() { return edad; }
    double getPeso() { return peso; }
    string getLugar() { return lugar; }
    double getEstatura() { return estatura; }
    string toString() {
        stringstream s;
        s << "Yo soy: " << nombre << " con cedula: "
          << cedula << " edad: " << edad
          << " y peso: " << peso << " Kgr." << "Lugar: "<< lugar << endl;
        return s.str();
    }
};
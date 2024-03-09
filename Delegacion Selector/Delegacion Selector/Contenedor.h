#pragma once
#include"Persona.h"
#include"Selector.h"

class Contenedor {
private:
	Persona** vec;
	int can;
	int tam;
public:
    Contenedor(int taman) {
        vec = new Persona * [taman];
        can = 0;
        tam = taman;
        for (int i = 0; i < taman; i++)
            vec[i] = NULL;
    }
    virtual ~Contenedor() {
        for (int i = 0; i < can; i++) {
            delete vec[i];//Se libera la memoria de cada persona
        }
        delete[] vec;//Se libera la memoria del vector
    }
    bool agregaPersona(Persona& p) {
        if (can < tam) {
            vec[can++] = new Persona(p.getCedula(), p.getNombre(),p.getEdad(),p.getPeso() , p.getLugar() ,p.getEstatura());//Aqui se duplica la persona y se agrega al vector momentaneo
            return true;
        }
        else
            return false;
    }

    Contenedor* seleccionar(Selector& selec) {
        Contenedor* ContenedorEsp = new Contenedor(can);
        for (int i = 0; i < can; i++) {
            if(selec.seleccionar(*vec[i])) {
                ContenedorEsp->agregaPersona(*vec[i]);
            }
        }
        return ContenedorEsp;


    }

    string toString() {
        stringstream s;
        s << "-------------------SELECCION------------------" << endl;
        for (int i = 0; i < can; i++)
            cout << vec[i]->toString() << endl;
        return s.str();
    }
};
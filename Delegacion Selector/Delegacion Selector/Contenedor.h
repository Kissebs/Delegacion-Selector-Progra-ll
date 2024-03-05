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
			delete vec[i];
		}
		delete[]vec;
	}
	bool agregaPersona(Persona& p) {
		if (can < tam) {
			vec[can++] = (Persona*)&p;
			return true;
		}
		else
			return false;
	}

	Contenedor* seleccionar(Selector& selector_) {
		Contenedor* vecAux = new Contenedor(can);
		for (int i = 0; i < tam; i++) {
			if (selector_.seleccionar(*vec[i])==true)
				vecAux->agregaPersona(*vec[i]);
		}

		return vecAux;
	
	}
	
	string toString() {
		stringstream s;
		s << "-------------------SELECCION------------------" << endl;
		for (int i = 0; i < can; i++)
			cout << vec[i]->toString() << endl;
		return s.str();
	}
};
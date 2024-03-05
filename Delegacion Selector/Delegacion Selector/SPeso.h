#pragma once
#include "Selector.h"
class SPeso : public Selector {
private:
	double peso;

public:
	SPeso(double peso_) : Selector("Selector para edades ") {
		peso = peso_;
	}
	virtual ~SPeso();

	virtual bool seleccionar(Persona& persona_) {
		if (persona_.getPeso() == peso) {
			return true;

		}
		else return false;
	}

};
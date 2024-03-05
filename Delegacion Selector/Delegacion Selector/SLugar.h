#pragma once
#include "Selector.h"
class SLugar : public Selector {
private:
	string lugar;

public:
	SLugar(string lugar_) : Selector("Selector para edades ") {
		lugar = lugar_;
	}
	virtual ~SLugar();

	virtual bool seleccionar(Persona& persona_) {
		if (persona_.getLugar() == lugar) {
			return true;

		}
		else return false;
	}

};
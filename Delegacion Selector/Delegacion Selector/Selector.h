#pragma once
#include "Persona.h"

class Selector {
protected:
	string descripcion;
public:
	Selector(string descripcion_) : descripcion(descripcion_) {}
	virtual ~Selector() {}
	virtual bool seleccionar(Persona& persona_)=0;
	virtual string getDescripcion() {
		return descripcion;
	};


};

#pragma once
#include "Persona.h"

class Selector {
protected:
    string descripcion;
public:

    Selector(string des) : descripcion(des) {}
    virtual ~Selector() {}

    virtual bool seleccionar(Persona&) = 0; // M.V.P
    virtual string getDescripcion() { return descripcion; }

};

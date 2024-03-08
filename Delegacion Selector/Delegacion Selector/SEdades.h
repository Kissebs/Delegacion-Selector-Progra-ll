#pragma once

#include "Selector.h"

class SEdades : public Selector {
private:
    int edadMin;
    int edadMax;
public:
    SEdades(int min, int max) : Selector("Selector para Edades"), edadMin(min), edadMax(max) {}
    virtual ~SEdades() { }

    virtual bool seleccionar(Persona& per) {
        if (per.getEdad() >= edadMin && per.getEdad() <= edadMax) {
            return true;
        }
        else {
            return true;
        }
    }
    virtual string getDescripcion() { return descripcion; }
};
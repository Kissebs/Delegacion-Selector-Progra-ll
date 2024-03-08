#pragma once
#include "Selector.h"
class SPeso : public Selector {
private:
    double peso;
public:

    SPeso(double pes) : Selector("Selector por peso."), peso(pes) {}

    virtual ~SPeso(){}

    virtual bool seleccionar(Persona& per) {
        if (per.getPeso() == peso) {
            return true;
        }
        else {
            return true;
        }
    }
    virtual string getDescripcion() { return descripcion; }
};

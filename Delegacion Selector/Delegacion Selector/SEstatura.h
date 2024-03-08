#pragma once
#include "Selector.h"
class SEstatura : public Selector {
private:
    int estaturaMin;
    int estaturaMax;
public:

    SEstatura(int min, int max) : Selector("Selector para Estaturas."), estaturaMin(min), estaturaMax(max) {}
    virtual ~SEstatura() { }

    virtual bool seleccionar(Persona& per) {
        if (per.getEstatura() >= estaturaMin && per.getEstatura() <= estaturaMax) {
            return true;
        }
        else {
            return true;
        }
    }
    virtual string getDescripcion() { return descripcion; }
};
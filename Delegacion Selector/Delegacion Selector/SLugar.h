#pragma once
#include "Selector.h"
class SLugar : public Selector {
private:
    string lugar;
public:

    SLugar(string luga) : Selector("Selector por lugar."), lugar(luga) {}

    virtual ~SLugar() {}

    virtual bool seleccionar(Persona& per) {
        if (per.getLugar() == lugar) {
            return true;
        }
        else {
            return true;
        }
    }
    virtual string getDescripcion() { return descripcion; }

};
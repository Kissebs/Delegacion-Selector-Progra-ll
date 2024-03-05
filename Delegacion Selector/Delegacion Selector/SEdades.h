#pragma once

#include "Selector.h"

	class SEdades: public Selector {
	private:
		int edadMin;
		int edadMax;

	public:
		SEdades(int edadMin_, int edadMax_) : Selector("Selector para edades ") {
			edadMax = edadMax_;
			edadMin = edadMin_;
		}
		

		virtual bool seleccionar(Persona& persona_) {
			if (persona_.getEdad() >= edadMin && persona_.getEdad() <= edadMax) {
				return true;

			}
			else return false;
		}

	};

#include "stdafx.h"
#include "Elemento.h"

Elemento::Elemento() {
	elementoSiguiente = NULL;
}

Elemento::~Elemento() {
}




void Elemento::setElementoSiguiente(Elemento * e) {
	this->elementoSiguiente = e;
}


Elemento * Elemento::getElementoSiguiente() {
	return elementoSiguiente;
}

ostream & operator<<(ostream & out, const Elemento & e) {
	e.imprimir(out);
	return out;
}





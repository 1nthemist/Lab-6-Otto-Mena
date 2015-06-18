#pragma once

#include <iostream>
using namespace std;

class Elemento {

	friend ostream & operator<<(ostream &, const Elemento &);

protected:
	Elemento();

public:

	Elemento * getElementoSiguiente();
	Elemento *elementoSiguiente;
	void setElementoSiguiente(Elemento *);
	virtual void imprimir(ostream &) const = 0;
	virtual ~Elemento();

};

ostream & operator<<(ostream &, const Elemento &);


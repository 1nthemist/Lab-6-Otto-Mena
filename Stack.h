#pragma once
#include "Lista.h"

class Stack : protected Lista{
	friend ostream & operator<<(ostream &, Stack &);

public:
	Stack();
	~Stack();
	void push(Elemento*);
	Elemento* peek();
	Elemento* pop();
	void imprimir(Elemento *, ostream &, int i);
};

ostream & operator<<(ostream &, Stack &);
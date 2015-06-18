// Lab 6.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "Lista.h" 
#include "Stack.h"

int _tmain(int argc, _TCHAR* argv[])
{

	Stack a;
	cout << "El stack a tiene los siguientes elementos: " << endl;
	for (int i = 0; i < 10; i++)
	{
		a.push(new ElementoInt(i));  //se agregan 10 elementos en la ultima posicion cada uno
		cout << *a.peek() << endl;   //se imprime cada elemento
		delete a.pop();              //se hace pop del elemento y se elimina
	}

	Stack b;
	cout << "El stack b tiene los siguientes elementos: " << endl;
	for (int i = 0; i < 10; ++i) {
		b.push(new ElementoDouble((rand() % 100) / 3.457));  //se nuevo se añaden 10 elementos
		Elemento*auxiliar = b.pop();
		cout << *auxiliar << endl;      //observamos que el pop tambien nos devuelve el pointer a cada elemento
		delete auxiliar;
	}														


	 

	system("pause");
	return 0;
}

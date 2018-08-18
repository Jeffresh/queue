#include "lib_colas.hpp"

Cola<int> invsec(Cola<int> C, int a, int b)
{

	Pila<int> aux;
	Cola<int> res;

	while(C.frente()!= a && !C.vacia())
	{
		res.push(C.frente());
		C.pop();
	}

	while(C.frente()!=b && !C.vacia())
	{
		aux.push(C.frente());
		C.pop();
	}

	if( !C.vacia())
	{
	aux.push(C.frente());
	C.pop();
	}

	while(!aux.vacia())
	{
		res.push(aux.tope());
		aux.pop();
	}

	while(!C.vacia() && !C.vacia())
	{
		res.push(C.frente());
		C.pop();
	}


	return res;

}







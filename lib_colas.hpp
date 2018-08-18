
// elementos posiciones impar colas igual posiciones par pilas

#include "cola_enla.hpp"
#include "pila_enla.hpp"
#include <iostream>

template<typename T>
bool isomorfica(Cola<T>, Pila<T>);

template<typename T>
bool isomorfica(Cola<T> C, Pila<T> P)
{

	T ec,ep;

	do
	{
		P.pop();
		if(!P.vacia())
		{
			ep = P.tope();
			P.pop();
		}

		ec= C.frente(); C.pop();
		if(!C.vacia())
			C.pop();



		std::cout<<ec<<","<<ep<<std::endl;


	}while (ep==ec && !C.vacia() && !P.vacia());


	return ep==ec;


}




Cola<int> invsec(Cola<int>);


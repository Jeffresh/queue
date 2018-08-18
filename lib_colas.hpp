

// elementos posiciones impar colas igual posiciones par pilas
#ifndef isomorfica
#define isomorfica 

#include "pila_enla.hpp"
#include "cola_enla.hpp"
#include <iostream>



template<typename T>
bool isomorfica(Cola<T> C, Pila<T> P)
{

	int i = 1;
	T a,b;
	bool seguir = true;

	while( seguir &&  !C.vacia() && !P.vacia())
	{
		if(i%2==1)
			a=C.frente();

		else
		{
			b= P.tope();

			seguir = a==b;
		}

		C.pop();
		P.pop();


		i++;

	}

	

	return C.vacia() && P.vacia();


}

#endif // isomorfica



Cola<int> invsec(Cola<int>);


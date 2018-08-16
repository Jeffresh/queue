#include "lib_colas.hpp"

template<typename T>
bool isomorfica(Cola<T> C, Pila<T> P)
{

	int i = 0;
	T a,b;

	while( a == b &&  !C.vacia() && !P.vacia())
	{
		i++;
		a = C.tope();C.pop();C.pop();
		P.pop(); b = P.tope(); P.pop();
	}


	return C.vacia() && P.vacia();


}
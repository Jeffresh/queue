#include "lib_colas.hpp"

int main()
{
	std::cout<<"Tu puta madre";
	
	Cola<int> C{};
	Pila<int> P{};

	for(int i = 1 ; i <=10 ; i++)
	{
		if(i%2 ==1)
		{
			P.push(i);
			C.push(69);
		}
		else
		{
			C.push(i);
			P.push(96);
		}


	}

	isomorfica(C,P);

	if(1)
		std::cout<<"Son isomorficas"<<std::endl;
	else
		std::cout<<"No son isomorficas"<<std::endl;





	

}
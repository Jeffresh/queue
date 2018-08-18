#include "lib_colas.hpp"

int main()
{
	
	Cola<int> C;
	Pila<int> P;

	for(int i = 1 ; i <5 ; i++)
	{
		if(i%2 ==1)
		{
			C.push(i);
		}
		else
		{
			C.push(96);
		}


	}

	for(int i = 5 ; i >=1 ; i--)
	{
		if(i%2 ==1)
		{
			P.push(96);
		}
		else
		{
			P.push(i-1);
		}


	}






	if(isomorfica(C,P))
		std::cout<<"Son isomorficas"<<std::endl;
	else
		std::cout<<"No son isomorficas"<<std::endl; 






	

}
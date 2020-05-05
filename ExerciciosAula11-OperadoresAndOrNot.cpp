#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int numero;
	
	numero = 1;
	
	/*
	
	 Faixa de Valores: 1 2 3 4 5 6 7 8 9 10
	 vamos testar valores > 4 e < 7 no And
	 Vamos testar valores < 3 ou > 8 no Or
	 1 = true , 0 = false no NOT
 	 	
	*/
	
	/*
	if(numero > 4 && numero < 7)
	{
		
		cout << "\n\nValor aceito\n";
		
	}else
	{
		cout << "\n\nValor nao aceito\n";
	}
	*/
	
	/*
	if(numero < 3 || numero > 8)
	{
		cout << "\n\nValor aceito\n";
	}else
	{
		cout << "\n\nValor nao aceito\n";
	}
	*/
	
	if(!numero)
	{
		cout << "\n\nVou ao clube\n";	
	}else
	{
		cout << "\n\nVou ao cinema\n";	
	}	
	
	return 0;
}

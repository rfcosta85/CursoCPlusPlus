#include <iostream>

using namespace std;

int main(void)
{
	// Aula 09: Comando If e Else (Parte 1)
	
	int num = 100;
	int num2 = 50;
	char opc = 's';
	
	if(num >= num2)
	{
		cout << num << " MAIOR ou IGUAL " << num2;
	}else
	{
		cout << num << " MENOR que " << num2;
	}	
	
	return 0;
}

#include <iostream>

using namespace std;

int main(void)

{
	int num = 10;
	
	cout << num << "\n\n";
	
	// Invertendo o valor de uma vari�vel
	
	// M�todo tradicional:
	
	num *= -1;
	
	cout << num << "\n\n";
	
	// Usando operador de invers�o
	
	num = 10;
	
	cout << -num <<"\n\n"; // Nessa opera��o o valor da vari�vel num foi alterado apenas de forma momentanea, apenas no ato de escrever, continuando a vari�vel com seu valor original.
	
	cout << num << "\n\n"; // A prova da senten�a acima est� nessa instru��o.
	
	num = -num; // Aqui temos o num recebendo ele mesmo com o sinal invertido, essa opera��o ir� inverter o sinal da vari�vel num de forma permanente
	cout << num << "\n\n";
	
	return 0;
}

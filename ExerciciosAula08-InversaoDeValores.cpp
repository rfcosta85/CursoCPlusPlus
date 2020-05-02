#include <iostream>

using namespace std;

int main(void)

{
	int num = 10;
	
	cout << num << "\n\n";
	
	// Invertendo o valor de uma variável
	
	// Método tradicional:
	
	num *= -1;
	
	cout << num << "\n\n";
	
	// Usando operador de inversão
	
	num = 10;
	
	cout << -num <<"\n\n"; // Nessa operação o valor da variável num foi alterado apenas de forma momentanea, apenas no ato de escrever, continuando a variável com seu valor original.
	
	cout << num << "\n\n"; // A prova da sentença acima está nessa instrução.
	
	num = -num; // Aqui temos o num recebendo ele mesmo com o sinal invertido, essa operação irá inverter o sinal da variável num de forma permanente
	cout << num << "\n\n";
	
	return 0;
}

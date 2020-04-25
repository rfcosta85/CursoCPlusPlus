#include <iostream>

using namespace std;

int numero1, numero2; // Variáveis globais

int main(void)
{
	int numero3, numero4, resultados, resultados2, resultados3, resultados4, resultados5; // Variáveis locais a função main
	
	numero1 = 11;
	numero2 = 3;
	numero3 = 5;
	numero4 = 2;
	
	resultados = (numero1 + numero2 + numero3 + numero4) - 10;
	
	resultados2 = numero1 + numero2 * numero4;
	
	resultados3 = (numero1 + numero2) * numero4;
	
	resultados4 = numero1/numero2; // Divisão
	
	resultados5 = numero1 % numero2; // Resto da divisão (Famoso módulo)
	
	cout << numero1 << " + " << numero2 << " + " << numero3 << " + " << numero4 << " - " << " 10 " << " = " << resultados << "\n";
	cout << numero1 << " + " << numero2 <<  " * " << numero4  << " = " << resultados2 << "\n";
	cout << "(" << numero1 << " + " << numero2 << ")" <<  " * " << numero4  << " = " << resultados3 << "\n";
	cout << numero1 << " / " << numero2 << " = " << resultados4 << "\n";
	cout << numero1 << " % " << numero2 << " = " << resultados5 << "\n";
	
	return 0;
}

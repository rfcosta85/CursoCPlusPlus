#include <iostream>

using namespace std;

int numero1, numero2; // Vari�veis globais

int main(void)
{
	int numero3, numero4, resultados, resultados2, resultados3, resultados4, resultados5; // Vari�veis locais a fun��o main
	
	numero1 = 11;
	numero2 = 3;
	numero3 = 5;
	numero4 = 2;
	
	resultados = (numero1 + numero2 + numero3 + numero4) - 10;
	
	resultados2 = numero1 + numero2 * numero4;
	
	resultados3 = (numero1 + numero2) * numero4;
	
	resultados4 = numero1/numero2; // Divis�o
	
	resultados5 = numero1 % numero2; // Resto da divis�o (Famoso m�dulo)
	
	cout << numero1 << " + " << numero2 << " + " << numero3 << " + " << numero4 << " - " << " 10 " << " = " << resultados << "\n";
	cout << numero1 << " + " << numero2 <<  " * " << numero4  << " = " << resultados2 << "\n";
	cout << "(" << numero1 << " + " << numero2 << ")" <<  " * " << numero4  << " = " << resultados3 << "\n";
	cout << numero1 << " / " << numero2 << " = " << resultados4 << "\n";
	cout << numero1 << " % " << numero2 << " = " << resultados5 << "\n";
	
	return 0;
}

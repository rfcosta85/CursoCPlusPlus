#include <iostream>

using namespace std;

int main (void)
{
	int numero1, numero2;
	
	numero1 = 0;	
	
	cout << numero1 << "\n\n";
	numero1 = numero1 + 1;
	
	cout << numero1 << "\n\n";
		
	numero1 += 1; // Uma outra froma de se ter um incremeto
	
	cout << numero1 << "\n\n";
	
	
	numero1 -= 1;
	cout << numero1 << "\n\n";
	
	numero1 -= 5;
	cout << numero1 << "\n\n";
	
	numero1 ++; // Mais uma outra forma de incremento
	cout << numero1 << "\n\n";
	
	numero1 --; // Mais uma outra forma de decremento
	cout << numero1 << "\n\n";
	
	numero1 *= 2; // Podemos tamb�m usar o operador multiplica��o
	cout << numero1 << "\n\n";
	
	numero1 /= 2; // Usando o operador de divis�o
	cout << numero1 << "\n\n";	
	
	cout << ++numero1 << "\n\n"; // pr� incrmento
	

	cout << numero1++ << "\n\n"; // p�s incremento
	
	cout << numero1 << "\n\n";
	
	
	return 0;
}

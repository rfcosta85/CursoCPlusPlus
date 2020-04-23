#include <iostream>


using namespace std;

int main (void)

{

	int vidas = 0;
	char letra = 'B';
	double decimal = 5.2;
	float decimal2 = 5.2;
	bool vivo = true;
	string nome = "Rodrigo";
	
	cout << "Digite o numero de  vidas: ";
	cin >> vidas;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	cout << "Digite a quantidade de dinheiro: ";
	cin >> decimal;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	
	
	cout << "vidas: " << vidas << "\n";
	cout << "Letra: " << letra << "\n";
	cout << "Decimal: "<< decimal << "\n";
	cout << "Decimal 2: " << decimal2 << "\n";
	cout << "Vivo: " << vivo << "\n";
	cout << "Nome: " << nome << "\n";
		
	return 0;
}

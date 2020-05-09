#include <iostream>
#include <cstdlib>

using namespace std;

/*
		Aula#13 - Comando Switch Case
		
		sintaxe: switch(expressao)
		{
			case const1:
				comandos;
				break;
			case const2:
				comandos;
				brake;
			default:
				comandos;
		}
	*/

int main(void)
{
	int valor;
	
	/*
	cout << "Selecione uma cor: ";	
	cout << "[1] = Verde, [2] = Azul, [3] = Vermelho: ";	
	cin >> valor;
	
	system("cls");
	
	switch(valor)
	{
		case 1:
			cout << "Cor Selecionada: Verde\n";
			break;
		case 2:
			cout << "Cor Selecionada: Azul\n";
			break;
		case 3:
			cout << "Cor Selecionada: Vermelho\n";
			break;
		default:
			cout << "Valor Selecionado: Invalido!";
	}
	*/ 
	
	//Apresentando uma ótica diferente para o mesmo resultado:
	
	cout << "Selecione uma cor: ";	
	cout << "[1,2,3] = Verde, [4,5,6] = Azul: ";	
	cin >> valor;
	
	system("cls");
	
	switch(valor)
	{
		case 1:			
		case 2:			
		case 3:
			cout << "Cor Selecionada: Verde\n";
			break;
			
		case 4:
		case 5:
		case 6:
			cout << "Cor Selecionada: Azul\n";
			break;
			
		default:
			cout << "Valor Selecionado: Invalido!";
	}
	
	cout << "\nPrograma Finalizado!";
		
	return 0;
}

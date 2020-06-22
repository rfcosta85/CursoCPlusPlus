#include <iostream>
#include <cstdlib>
#include <locale>
#include <ctype.h>
#define IPI 0.08
#define PRICE 25000.00
#define DISCOUNT 0.035
#define INCREASEOFFACTORY 0.02

using namespace std;

int main(void)
{
	setlocale(LC_ALL,"");
	
	int unsigned short model;
	
	char choise, choiseUpper;	
	
	do
	{	
		
		system("cls");
	
		cout << "----------------------------------------\n";
		cout << "Fábrica de Automóvel Estácio\n";
		cout << "Estácio Car 2020 \n";
		cout << "----------------------------------------\n";
		cout << "O modelo conta com 4 opções de utilitários\n";
		cout << "Modelos:\n";
		cout << "------------------------------------------\n";
		cout << "0- Básico\n";
		cout << "1- Trio elétrico\n";
		cout << "2- Ar condicionado\n";
		cout << "3- Direção Hidráulica\n";
		cout << "4- Completo\n";
		cout << "------------------------------------------\n";
		
		cout << "Escolha a sua opção: ";
		cin >> model;	
			
		
		switch(model)
		{
		
			case 0:
			{
				
				cout << "Esse modelo não conta com adicionais como ar condicionado e vidros elétricos\n";
				cout << "----------------------------------------------------------------------------\n";
				cout << "Preço: R$: " << (PRICE * IPI) + PRICE;
				
				break;
			} 
			
			case 1: 
			{
				cout << "Trio Elétrico.\n";
				cout << "Esse modelo conta com alarme, vidro elétrico e tranca elétrica.\n";
				cout << "Mais segurança e comodidade para o seu veículo.\n";
				cout << "---------------------------------------------------------------\n";
				
				cout << "Preço: R$: " << ((PRICE * IPI) + PRICE) * INCREASEOFFACTORY + (PRICE * IPI) + PRICE; 
				
				break;
			}	
			
			
			case 2:
			{
				
				cout << "Ar Condicionado. \n";
				cout << "Esse modelo conta com ar condicionado.\n";
				cout << "Dirija sem se preocupar com o calor externo.\n";	
				cout << "-------------------------------------------\n";
				
				cout << "Preço: R$: " << (PRICE * INCREASEOFFACTORY) + PRICE;
				break;				
			}
			
			case 3:
			{
				
				cout << "Direção Hidráulica.\n";
				cout << "Este modelo conta com uma direção Hidráulica.\n";
				cout << "Mais segurança e comodidade para o seu veículo.\n";
				cout << "-----------------------------------------------\n";
				
				cout << "Preço: R$: " << (PRICE * INCREASEOFFACTORY) + PRICE;
				break;
			}
			
			case 4:
			{
				cout << "Completo.\n";
				cout << "Este modelo conta com todos os adicionais disponíveis.\n";
				cout << "Segurança, conforto e comodidade. tudo em um só pacote.\n";
				cout << "-------------------------------------------------------\n";					
				
				cout << "Preço: R$: " << (((PRICE * IPI) + PRICE) + (((PRICE * IPI) + PRICE) * INCREASEOFFACTORY) + ((PRICE * INCREASEOFFACTORY) * 2)) * DISCOUNT + (PRICE * IPI) + PRICE;
				break;
				
				default:
					
					cout << "Imbecil! não sabe ler? Escolha os modelos de 0 a 4!";					
			}				
		
		}		
		
		
		cout << "\nDeseja simular outro modelo (S/N)? ";
		cin >> choise;
		
		choiseUpper = toupper(choise);
		
		if(choiseUpper != 'S' && choiseUpper != 'N')
	{
		cout << "\nInfelizmente você é um imbecil que não sabe a diferença entre S e N e assim encerramos o programa para você deixar de ser imbecil!\n";
		break;
	}
				
		
	}
	while(choiseUpper != 'N');
	
	
	
	
	return 0;
}


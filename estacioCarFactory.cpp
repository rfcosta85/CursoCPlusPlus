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
		cout << "F�brica de Autom�vel Est�cio\n";
		cout << "Est�cio Car 2020 \n";
		cout << "----------------------------------------\n";
		cout << "O modelo conta com 4 op��es de utilit�rios\n";
		cout << "Modelos:\n";
		cout << "------------------------------------------\n";
		cout << "0- B�sico\n";
		cout << "1- Trio el�trico\n";
		cout << "2- Ar condicionado\n";
		cout << "3- Dire��o Hidr�ulica\n";
		cout << "4- Completo\n";
		cout << "------------------------------------------\n";
		
		cout << "Escolha a sua op��o: ";
		cin >> model;	
			
		
		switch(model)
		{
		
			case 0:
			{
				
				cout << "Esse modelo n�o conta com adicionais como ar condicionado e vidros el�tricos\n";
				cout << "----------------------------------------------------------------------------\n";
				cout << "Pre�o: R$: " << (PRICE * IPI) + PRICE;
				
				break;
			} 
			
			case 1: 
			{
				cout << "Trio El�trico.\n";
				cout << "Esse modelo conta com alarme, vidro el�trico e tranca el�trica.\n";
				cout << "Mais seguran�a e comodidade para o seu ve�culo.\n";
				cout << "---------------------------------------------------------------\n";
				
				cout << "Pre�o: R$: " << ((PRICE * IPI) + PRICE) * INCREASEOFFACTORY + (PRICE * IPI) + PRICE; 
				
				break;
			}	
			
			
			case 2:
			{
				
				cout << "Ar Condicionado. \n";
				cout << "Esse modelo conta com ar condicionado.\n";
				cout << "Dirija sem se preocupar com o calor externo.\n";	
				cout << "-------------------------------------------\n";
				
				cout << "Pre�o: R$: " << (PRICE * INCREASEOFFACTORY) + PRICE;
				break;				
			}
			
			case 3:
			{
				
				cout << "Dire��o Hidr�ulica.\n";
				cout << "Este modelo conta com uma dire��o Hidr�ulica.\n";
				cout << "Mais seguran�a e comodidade para o seu ve�culo.\n";
				cout << "-----------------------------------------------\n";
				
				cout << "Pre�o: R$: " << (PRICE * INCREASEOFFACTORY) + PRICE;
				break;
			}
			
			case 4:
			{
				cout << "Completo.\n";
				cout << "Este modelo conta com todos os adicionais dispon�veis.\n";
				cout << "Seguran�a, conforto e comodidade. tudo em um s� pacote.\n";
				cout << "-------------------------------------------------------\n";					
				
				cout << "Pre�o: R$: " << (((PRICE * IPI) + PRICE) + (((PRICE * IPI) + PRICE) * INCREASEOFFACTORY) + ((PRICE * INCREASEOFFACTORY) * 2)) * DISCOUNT + (PRICE * IPI) + PRICE;
				break;
				
				default:
					
					cout << "Imbecil! n�o sabe ler? Escolha os modelos de 0 a 4!";					
			}				
		
		}		
		
		
		cout << "\nDeseja simular outro modelo (S/N)? ";
		cin >> choise;
		
		choiseUpper = toupper(choise);
		
		if(choiseUpper != 'S' && choiseUpper != 'N')
	{
		cout << "\nInfelizmente voc� � um imbecil que n�o sabe a diferen�a entre S e N e assim encerramos o programa para voc� deixar de ser imbecil!\n";
		break;
	}
				
		
	}
	while(choiseUpper != 'N');
	
	
	
	
	return 0;
}


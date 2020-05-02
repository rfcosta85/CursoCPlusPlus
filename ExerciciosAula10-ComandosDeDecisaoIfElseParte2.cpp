#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	
	// Comando GoTo - Aula 10: Comando If e Else (Parte 2)
	// O Goto direiciona o ponteiro de exercução do nosso programa. Então se a instrução encontrar um Goto, a instrução irá pular para a laybel direcionada pelo ponteiro e seguirá a execução 
	
	int nota1, nota2;
	float media;
	char opcao;
	
	// Criando um GoTo
	// Criando a laybel >> Para definirmos uma Laybel, precisamos inserir : no final da variável
	
	inicio: // Essa laybel será associada ao Goto - Então nessa parte da instrução ele é nulo.
	system("cls");
	
	/* Vamos determinar 3 intervalos. (notas >=60) <Aprovado>; 
	(notas >=40 e <60) <Recuperação>; 
	(notas <40) <Reprovado>
	*/
	
	cout << "Digite o valor da primeira nota: ";
	cin >> nota1;
	
	cout << "Digite o valor da segunda nota: ";
	cin >> nota2;
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 60)
	{
		cout << "\n\nMedia do aluno: " << media << ", Aluno Aprovado!";	
			
 	}else if (media >= 40 and media < 60)
 		{
 			
 			cout << "\n\nMedia do aluno: " << media << ", Aluno em Recuperacao!";
 			
		}else
			
			{
				cout << "\n\nMedia do aluno: " << media << ", Aluno Reprovado!";
			}
			
	cout << "\n\nDigitar outras notas? [s/n]: ";
	cin >> opcao;	
	
	if(opcao == 's' or opcao == 'S')
	{
		goto inicio;
	}
	
	return 0;
}

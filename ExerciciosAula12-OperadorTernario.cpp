#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	// Essa aula iremos tratar sobre o operador ternário
	// nota >= 60 Aluno Aprovado se não Aluno Reprovado
	// (expressão) ? valor1 : valor2   Operador Ternário - Onde o ? representa o se e o : representa o senao.
	
	int nota1, nota2, resultado;
	string status;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	system("cls");
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	resultado = (nota1+nota2) /2;
	
	/*
	(resultado >= 60) ? status = "Aprovado!" : status = "Reprovado!"; // Operador ternário.
	*/
	
	status = (resultado >=60) ? "Aprovado!" : "Reprovado!"; // Atribuindo o operador ternário na variável.
	
	cout << "\nSituacao do aluno: " << " Media: " << resultado << " ,portanto, aluno: " << status;
	
	return 0;
}

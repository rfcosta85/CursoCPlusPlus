#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	// Essa aula iremos tratar sobre o operador tern�rio
	// nota >= 60 Aluno Aprovado se n�o Aluno Reprovado
	// (express�o) ? valor1 : valor2   Operador Tern�rio - Onde o ? representa o se e o : representa o senao.
	
	int nota1, nota2, resultado;
	string status;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	system("cls");
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	resultado = (nota1+nota2) /2;
	
	/*
	(resultado >= 60) ? status = "Aprovado!" : status = "Reprovado!"; // Operador tern�rio.
	*/
	
	status = (resultado >=60) ? "Aprovado!" : "Reprovado!"; // Atribuindo o operador tern�rio na vari�vel.
	
	cout << "\nSituacao do aluno: " << " Media: " << resultado << " ,portanto, aluno: " << status;
	
	return 0;
}

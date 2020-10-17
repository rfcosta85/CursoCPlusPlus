#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cstdint>
#include <string.h>
#include <stdio.h>

using namespace std;

struct DADOS_ALUNO
{

    int CodAluno;
    char nome[100];
    int Turma;

};

int main(void)
{   

    struct DADOS_ALUNO AlunoA;
    AlunoA.CodAluno = 10;
    strcpy(AlunoA.nome, "Gabriela");
    AlunoA.Turma = 250;

    cout << "Nome do aluno: " << AlunoA.nome;
    cout << "\n\nCódigo do Aluno: " << AlunoA.CodAluno;
    cout << "\n\nTurma do Aluno: " << AlunoA.Turma << "\n\n";

    return 0;
}

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{

    struct exemplo
    {

        int inscricao;
        char nome[31];

    }auxiliar,candidatos[] = {1989, "JOÃO RENATO", 1962, "MARIA TEREZA"};

    cout << "\nAntes da Comparação\n";

    cout << "\n" << candidatos[0].inscricao << "\t" << candidatos[0].nome;
    cout << "\n" << candidatos[1].inscricao << "\t" << candidatos[1].nome;

    if(candidatos[0].inscricao > candidatos[1].inscricao)
    {

        auxiliar = candidatos[0];
        candidatos[0] = candidatos[1];
        candidatos[1] = auxiliar;

    }

    cout << "\n\nApós a Comparação\n";

    cout << "\n" << candidatos[0].inscricao << "\t" << candidatos[0].nome;
    cout << "\n" << candidatos[1].inscricao << "\t" << candidatos[1].nome;

    cout << "\n\n";

    cout << "Pressione enter duas vezes para sair...\n";

    getchar();
    getchar();

    return 0;
}
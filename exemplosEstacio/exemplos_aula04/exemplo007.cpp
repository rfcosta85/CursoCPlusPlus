#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

struct dados
{
    
    char nome[31]; int codigo; float alt;

};

void maiuscula(char n[]);
void selecao(dados vetor[], int tamanho);

int main(void)
{

    int x; dados atleta[5];

    for(x = 0; x < 5; x++)
    {

        cout << "\nNome do atleta: "; cin.getline(atleta[x].nome,31);
        
        maiuscula(atleta[x].nome);
        
        while(strlen(atleta[x].nome) < 30)
        {
            strcat(atleta[x].nome, " ");
        }

        cout << "\nCodigo do atleta: "; cin >> atleta[x].codigo;
        cout << "\nAltura: "; cin >> atleta[x].alt; cin.get();

    }

    selecao(atleta, 5);

    cout << "\nCodigo\tNome\t\t\tAltura\n";

    for(x=0; x<5; x++)
    {
        cout << "\n" << atleta[x].codigo << "\t" << atleta[x].nome << "\t" << atleta[x].alt;
    }

    cout << "\n";

    getchar();
    getchar();

    return 0;
}

void maiuscula(char n[])
{

    int x;
    
    for(x = 0; x < strlen(n); x++)
    {

        n[x] = toupper(n[x]);

    }

}

void selecao(dados vetor[], int tamanho)
{

    int j, i, auxiliar; 
    dados temporario;

    for(i = 0; i < tamanho - 1; i++)
    {

        auxiliar = i;

        for(j = i+1; j < tamanho; j++)
        {

            if(strcmp(vetor[auxiliar].nome, vetor[j].nome) > 0)
            {
                auxiliar = j;
            }

            temporario = vetor[auxiliar];
            vetor[auxiliar] = vetor[i];
            vetor[i] = temporario;

        }

    }

}
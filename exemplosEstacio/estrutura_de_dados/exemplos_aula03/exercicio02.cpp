#include <iostream>
#include <stdlib.h>

/*Defina uma estrutura que armazene dados
Declare variáveis, supondo 1 atleta e construa um programa, atribuindo os valores dos membros, um a um, após a declaração.*/

using namespace std;

int main()
{

    struct fichaAtleta
    {
    
        char nomedoAtleta[30], esporte[30],categoria[30],telefone[10],ano_nascimento[5];
        float ajudaDeCusto;

    }atleta;

    cout <<"nome do atleta: ";
    cin.getline(atleta.nomedoAtleta,30);

    cout <<"esporte: ";
    cin.getline(atleta.esporte,30);

    cout <<"categoria: ";
    cin.getline(atleta.categoria,30);

    cout <<"Valor da ajuda de custo: R$";
    cin >> atleta.ajudaDeCusto;
    cin.get();

    cout <<"telefone: ";
    cin.getline(atleta.telefone,10);

    cout <<"ano de nascimento: ";
    cin.getline(atleta.ano_nascimento,5);

    cout << "\nnome do atleta: " << atleta.nomedoAtleta;
    cout << "\nesporte: " << atleta.esporte << "\t categoria: " << atleta.categoria;
    cout << "\nvalor da ajuda de custo: R$" << atleta.ajudaDeCusto;
    cout << "\ntelefone: " << atleta.telefone << "\tano_nascimento: " << atleta.ano_nascimento;

    cout << "\n\nPressione Enter duas vezes para sair...";

    cout << "\n\n";

    getchar();
    getchar();
    
    

}
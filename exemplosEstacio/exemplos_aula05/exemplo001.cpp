#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

void insere(int codigo[], int &t, int tamanho);
void exibe(int codigo[], int t);
void elemento(int codigo[], int t);

int main(void)
{

    int tamanho, codigoProduto[5], opcao;

    //Inicialização
    tamanho = 0;

    do
    {
    
        system("clear");
        cout <<"\nMenu - LISTA \n";
        cout <<"\n0 - Reiniciar a LISTA";
        cout <<"\n1 - Inserir código na LISTA";
        cout <<"\n2 - Exibir LISTA";
        cout <<"\n3 - Exibe tamanho da LISTA";
        cout <<"\n4 - Exibe um elemento da LISTA";
        cout <<"\n5 - Sair";
        cout <<"\nOpção: ";
        cin >> opcao;
        system("clear");

        switch(opcao)
        {

            case 0: //reinicialização

            tamanho = 0;
            break;

            case 1: insere(codigoProduto, tamanho, 5);
            break;

            case 2: exibe(codigoProduto, tamanho);
            break;

            case 3: cout << "\nTamanho da Lista: " << tamanho;
            break;

            case 4: elemento(codigoProduto, tamanho);
            break;
            
            case 5: cout <<"\nFinalizando o programa da LISTA\n";
            break;

            default: cout <<"\nOpção inválida\n";

        }

        cout <<"\n\n"; 

        cout <<"\n\nPressione enter para sair...";
        
        getchar();
        getchar();

    } while (opcao !=5);
    

    return 0;
}

void insere(int codigo[], int &t, int tamanho)
{

    int produto;
    if(tamanho == t)
    {

        cout <<"\nAtenção! Lista cheia\n";
        
    }else
    {
        
        cout <<"\nDigite o código do produto a ser inserido: ";
        cin >> produto;
        codigo[t] = produto;
        t++;

    }    

}

void exibe(int codigo[], int t)
{

    int x;
    
    if(t == 0)
    {

        cout <<"\nAtenção! Lista vazia\n";

    }else
    {
        
        cout <<"\nRelação dos códigos\n";
        for(x = 0; x < t; x++)
        {

            cout <<"\n" << codigo[x];

        }
    }    

}

void elemento(int codigo[], int t)
{

    int produto, posicao;

    if(t == 0)
    {

        cout <<"\nAtenção! Lista vazia\n";

    }else
    {
        cout <<"\nQual posição que deseja? ";
        cin >> posicao;
        posicao--;

        if(posicao >= t)
        {

            cout <<"\nAtenção! Nenhum código armazenado ou posição inexistente\n";

        }else
        {
            
            cout <<"\nCódigo: " << codigo[posicao] <<"\n";

        }
        
    }
    

}

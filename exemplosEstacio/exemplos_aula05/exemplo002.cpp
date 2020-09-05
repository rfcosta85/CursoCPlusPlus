#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

void insere(int matricula[], int m, int &t, int tamanho);
void exibe(int matricula[], int t);
int buscaSequencial(int matricula[], int m, int t);
void remove(int matricula[], int m, int &t);

int main(void)
{

    int tamanho, matricula[5], mat, posicao, opcao;

    //Inicialização 
    tamanho = 0;

    do
    {

        cout <<"Menu 1 - LISTA\n";
        cout <<"\n0 - Reiniciar lista";
        cout <<"\n1 - Inserir matrícula na LISTA";
        cout <<"\n2 - Exibir LISTA";
        cout <<"\n3 - Procurar matrícula na LISTA";
        cout <<"\n4 - Remover matrícula da LISTA";
        cout <<"\n5 - Sair";
        cout <<"\nOpção: ";
        cin >> opcao;

        system("clear");

        switch (opcao)
        {
        case 0:

            tamanho = 0;

            break;

        case 1: 

            cout << "\nDigite a matrícula a ser inserida: ";
            cin >> mat;

            insere(matricula, mat, tamanho, 5);

            break;

        case 2: 

            exibe(matricula, tamanho);
            break;

        case 3: 

            cout << "\nQual matrícula a ser procurada? ";
            cin >> mat;
            posicao = buscaSequencial(matricula, mat, tamanho);

            if(posicao == -1)
            {

                cout <<"\nAtenção! Lista Vazia\n";            

            }else if (posicao == -2)
            {

                cout << "\nAtenção! Matrícula não encontrada\n";

            }else
            {

                cout <<"\nMatrícula encontrada na posição: " << posicao+1 << "\n";

            }
            break;

            case 4: 

            cout << "\nQual a matrícula a ser removida? ";
            cin >> mat;

            remove(matricula, mat, tamanho);
            break;

            case 5:

            cout << "\nFinalizando o programa da LISTA\n";
            break;        

            default: 

            cout <<"\nOpção inválida!";

        }

        cout <<"\n\n";
        cout <<"\n\nPressiona enter para sair...";

        getchar();
        getchar();

    }while(opcao !=5);

    return 0;
}

void insere(int matricula[], int m, int &t, int tamanho)
{

    if(tamanho == t)
    {

        cout <<"\nAtenção! Lista cheia\n";
        
    }else
    {
        
        matricula[t] = m;
        t++;

    }    

}

void exibe(int matricula[], int t)
{

    int x;

    if(t == 0)
    {

        cout <<"\tAtenção! Lista vazia\n";

    }else
    {
        cout << "\nRelação das matrículas\n";

        for(x = 0; x < t; x++)
        {
            cout << "\n" << matricula[x];
        }

    }    

}

int buscaSequencial(int matricula[], int m, int t)
{

    int x;

    if(t == 0)
    {

        return -1; // testa lista vazia

        for(x = 0; x < t; x++)
        {
            if(matricula[x] == m)
            {
                
                return x; // retorna o deslocamento do endereço base

            }
            
        }

        return -2; // percorreu toda a lista e não achou

    }
}

void remove(int matricula[], int m, int &t)
{

    int posicao, x;

    posicao = buscaSequencial(matricula, m , t);

    if(posicao == -1)
    {

        cout << "\nAtenção Matrícula não encontrada\n";

    }else
    {
        // desloca todos os elementos da lista, se necessário, deixando vazios ao final

        for(x = posicao; x < t-1; x++)
        {

            matricula[x] = matricula[x+1];
            t--; // atualiza o tamanho da lista
            cout <<"\nMatrícula Removida\n";

        }

    }
    

}
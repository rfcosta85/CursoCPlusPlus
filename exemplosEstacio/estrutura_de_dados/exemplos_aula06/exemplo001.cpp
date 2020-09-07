#include <iostream>
#include <stdlib.h>
#include <cstring>
#define TAM 5

using namespace std;

void empilha(int p[], int &t, int v);
int desempilha(int p[], int &t, int &v);
void acessoTopo(int p[], int &t);
void situacaoPilha(int p[], int &t);

int main(void)
{
    
    int opcao, valor, topo = -1, pilha[TAM], resposta;

    do
    {
        
        system("clear");
        system("color f0");

        cout << "\nPILHA(LIFO - Last In - First Out) \n\n";
        cout << "\n1 - Inserir um valor na pilha";
        cout << "\n2 - Remover um valor da pilha";
        cout << "\n3 - Mostrar o elemento do topo da pilha";
        cout << "\n4 - Mostrar situação da pilha";
        cout << "\n5 - Sair";
        cout << "\nOpção: ";
        cin >> opcao;

        system("clear");

        switch(opcao)
        {

            case 1:
                
                cout << "Digite o valor a ser empilhado: ";
                cin >> valor;
                empilha(pilha,topo,valor);
                break;

            case 2:

                resposta = desempilha(pilha,topo, valor);
                
                if(resposta == 0)
                {

                    cout << "\nATENÇÃO. Pilha vazia \n\n";

                } else
                {
                    
                    cout << "\nValor removido: " << valor;

                }

                break;

            case 3:

                acessoTopo(pilha, topo);

                break;

            case 4: 

                situacaoPilha(pilha,topo); 

                break;

            case 5:

                cout <<"\nPrograma básico da PILHA\n"; 

                break;

            default:

                cout <<"\nOPÇÃO INVÁLIDA\n";              

        }

        cout << "\n\n";
        cout << "\n\nDigite enter para sair...";

        getchar();
        getchar();

    } while (opcao !=5);
    

    return 0;
}

/*Insere*/

void empilha(int p[], int &t, int v)
{

    if(t == TAM -1)
    {

        cout << "\nATENÇÃO! Pilha cheia\n";

    }else
    {
        
        t++; //atualiza o topo
        p[t] = v; //Pilha recebe valor

    }    

}

/*Remove*/
int desempilha(int p[], int &t, int &v)
{

    if(t == -1)
    {

        return 0;

    }else
    {
        v = p[t]; //Guarda o valor do topo
        t--; // atualiza o topo
        return 1;

    }    

}

/*Mostra o topo*/
void acessoTopo(int p[], int &t)
{

    if(t == -1)
    {

        cout << "\nATENÇÃO. Pilha VAzia\n";

    }else
    {
        
        cout <<"\nElemento do topo da PILHA: " << p[t];

    }    

}

/*Mostra situação da pilha*/
void situacaoPilha(int p[], int &t)
{

    if(t == -1)
    {

        cout <<"\nATENÇÃO. Pilha Vazia\n";

    }else if (t == TAM - 1)
    {
        
        cout << "\nATENÇÃO! Pilha Cheia\n";

    }else
    {
        cout << "\nTotal de elementos na pilha: " << t+1 << "\n";
        cout << "\n\nEspaço disponível na pilha: " << TAM - (t+1) << "\n";
    }   

}
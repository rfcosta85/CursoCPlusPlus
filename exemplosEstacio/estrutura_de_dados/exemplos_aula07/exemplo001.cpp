#include <iostream>
#include <stdlib.h>
#include <cstring>
#define TAM 5

using namespace std;

//variavel global

struct queue
{

    float f[TAM];
    int inicio, fim;    

};

void enfileira(queue &fil);
void desenfileira(queue &fil);
void elemPrimeiro(queue &fil);
void situacaoFila(queue &fil);

int main()
{

    char resposta[10];
    int opcao;
    queue fila;
    //Inicializa a fila
    fila.inicio = 0;
    fila.fim = -1;

    do
    {
        
        system("clear");

        cout << "\nFILA( FIFO - First in First Out)\n\n";
        cout << "\n1- Inserir um valor na fila";
        cout << "\n2- Remover um valor da fila";
        cout << "\n3- Mostrar o elemento do inicio da fila";
        cout << "\n4- Mostrar situação da fila";
        cout << "\n5- Sair";
        cout << "\nOpção: ";
        cin >> resposta;
        opcao = atoi(resposta);
        system("clear");

        switch(opcao)
        {

            case 1: enfileira(fila);
            break;

            case 2: desenfileira(fila);
            break;

            case 3: elemPrimeiro(fila);
            break;

            case 4: situacaoFila(fila);
            break;

            case 5: cout << "\nPrograma básico da FILA\n";
            break;

            default: cout << "\nOPÇÃO INVÁLIDA!\n";

        }

        cout << "\n\n";        

        getchar();
        getchar();


    } while (opcao !=5);

      

}

void enfileira(queue &fil)
{

    float valor;

    if(fil.fim == TAM - 1) // Testando se a fila está cheia
    {

        cout << "\nATENÇÃO. Fila Cheia\n";

    }else
    {
        cout << "Digite o valor a ser enfileirado: ";
        cin >> valor;
        fil.fim++; //atualiza o final da fila
        fil.f[fil.fim] = valor; //guarda o valor final da fila
    }    

}

void desenfileira(queue &fil)
{

    if(fil.inicio > fil.fim)
    {

        cout << "\nATENÇÃO. Fila Vazia\n";

    }else
    {
        
        cout << "\nValor Removido: " << fil.f[fil.inicio]; // exibe o valor "removido" 0
        fil.inicio++; //atualiza o início do fila

    }    

}

void elemPrimeiro(queue &fil)
{

    if(fil.inicio > fil.fim)
    {

        cout << "\nATENÇÃO; Fila Vazia\n";

    }else
    {
        
        cout << "\nElemento do início da fila: " << fil.f[fil.inicio];

    }    

}

void situacaoFila(queue &fil)
{

    if(fil.inicio > fil.fim)
    {

        cout << "\nATENÇÃO. Fila Vazia\n";

    }else
    {
        
        cout << "\nTotal de elementos na fila: " << fil.fim - fil.inicio + 1 << "\n";
        cout << "\n\nEspaço disponível na fila: " << TAM - (fil.fim + 1) << "\n";
        cout << "\n\nPosição do primeiro elemento da fila: " << fil.inicio << "\n";
        cout << "\n\nPosição do último elemento da fila: " << fil.fim << "\n";
        cout << "\nPARA FINS DIDÁTICOS, EXIBINDO A FILA\n";
        cout << "\nValor\tposição no Vetor\n";

        for(int x = fil.inicio; x <= fil.fim; x++)
        {

            cout << "\n" << fil.f[x] << "\t" << x;

        }

    }    

}
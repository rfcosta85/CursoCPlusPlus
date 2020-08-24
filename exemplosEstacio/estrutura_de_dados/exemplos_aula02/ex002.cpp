#include <iostream>
#include <stdlib.h>

using namespace std;

void menu()
{

    system("clear");
    cout << "\nMenu\n";
    cout << "\n1-Pilha";
    cout << "\n2-Fila";
    cout << "\n3-Lista";
    cout << "\n4-Árvore";
    cout << "\n5-Grafo";
    cout << "\n6-Sair";
    cout << "\nOpção:";

}

int main(void)
{

    int opcao;

    do
    {

        menu();
        cin >> opcao;
        switch(opcao)
        {

            case 1: cout << "\nMétodo de acesso: LIFO\n";
            break;
            case 2: cout << "\nMétodo de acesso: FIFO\n";
            break;
            case 3: cout << "\nVamos estudar Lista";
            break;
            case 4: cout << "\nNão vamos estudar Árvore\n";
            break;
            case 5: cout << "\nNão vamos estudar Grafo\n";
            break;
            case 6: cout << "\nObrigada por estudar\n";
            break;
            default: cout << "\nOpção Inválida\n";

        }

        getchar();
        getchar();
        
    } while (opcao != 6);    

    cout << "\n\n";

    return 0;

}
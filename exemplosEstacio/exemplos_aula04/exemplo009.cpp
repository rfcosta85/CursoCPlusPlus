#include <iostream>
#include <stdlib.h>
#include <cstring>
#define tamanho 10

using namespace std;

int main(void)
{

    int op, l, inicio, fim, meio, procura, matricula[] = {2,4,5,6,13,15,18,23,29,30};
    float cr[] = {8,9,7.8,8,6,10,9,9,9.7,9,9};

    /*Exibe e Procura*/

    do
    {
        
        system("clear");

        cout << "\nMatrículas\n\n"; 

        for(l = 0; l < tamanho; l++)
        {

            cout <<"\n" << l+1 << " - " << matricula[l];

        }

        cout << "\n\n1 - Procura";
        cout << "\n2 - Sair";
        cout << "\nOpção: ";
        cin >> op;

        if(op==1)
        {

            /*Pesquisa Binaria*/

            cout << "\nDigite a matrícula a ser procurada: ";
            cin >> procura;

            inicio = 0;
            fim = tamanho -1;

            meio = (inicio + fim) / 2;

            cout << "\n" << inicio << "\t" << meio << "\t" << fim; //Pode Retirar

            while(procura != matricula[meio] && inicio != fim)
            {
                if(procura > matricula[meio])
                {
                    inicio = meio + 1;
                }else
                {
                    fim = meio;
                }

                meio = (inicio + fim) / 2;

                cout << "\n" << inicio << "\t" << meio << "\t" << fim;
                
            }

            if (matricula[meio] == procura)
            {
                
                cout << "\ncr : " << cr[meio] << endl;

            }else
            {
                
                cout << "\nMatricula não encontrada\n";

            }
            
            

        }else if (op == 2)
        {

            cout << "\nFim\n";
            
        }else
        {
            cout << "\nOpção Inválida\n";
        }

        cout << "\n\n";

        cout << "\n\nPressione Enter para sair...";

        getchar();
        getchar();        
        

    } while (op != 2);
    

    return 0;
}
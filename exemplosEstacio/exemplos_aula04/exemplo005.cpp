#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

void selecao(int vetor[],int tamanho);

int main(void)
{

    int x, vetor[] = {13,23,8,1};

    system("clear");

    cout << "\nAntes da chamada da função - SELEÇÃO \n\t\t";

    for(x= 0; x < 4; x++)
    {
        cout << vetor[x] << "\t";
    }

    cout << "\n";

    selecao(vetor,4);
    
    cout << "\n\nDepois da chamada da função - SELEÇÃO \n\t\t";

    for(x = 0; x < 4; x++)
    {
        cout << vetor[x] << "\t";
    }

    cout << "\n\n";

    cout << "\n\nPressione o enter duas vezes para sair...\n";

    getchar();
    getchar(); 

    return 0;

} 

void selecao(int vetor[], int tamanho)
{

    int j, i, auxiliar, a , temporario;

    for(i = 0; i < tamanho - 1 ; i++)
    {

        cout << "\ni = " << i << "\tantes\t";

        for(a = 0; a < 4; a++)
        {
            cout << vetor[a] << "\t";
            
        }  

        auxiliar = i;        

        for(j = i + 1; j < tamanho; j++)
        {
            if(vetor[auxiliar] > vetor[j])
            {
                
                auxiliar = j;

            }
            
            temporario = vetor[auxiliar];
            vetor[auxiliar] = vetor[i];
            vetor[i] = temporario;
            cout << "\ni = " << i << "\tdepois\t";
        }

        for(a = 0; a < 4; a++)
        {
            cout << vetor[a] << "\t";
        }

    }

}
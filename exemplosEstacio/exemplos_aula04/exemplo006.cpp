#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

void insercao(int vetor[], int tamanho);

int main()
{

    int x, vetor[] = {13,23,3,8,1};

    system("clear");

    cout << "\nAntes da chamada da função - INSERÇÃO\n\t\t"; 

    for(x = 0; x < 4; x++)
    {
        
        cout << vetor[x] << "\t";

    }

    cout << vetor[x] << "\t";

    cout << "\n";

    insercao(vetor, 5);

    cout << "\n\nDepois da chamada da função - INSERÇÃO\n\t\t";

    for(x = 0; x < 5; x++)
    {

        cout << vetor[x] << "\t";

    }

    cout << "\n";

    getchar();
    getchar();

    return 0;
}

void insercao(int vetor[], int tamanho)
{

    int j, i, auxiliar, a;

    for(i=1; i < tamanho; i++)
    {

        auxiliar = vetor[i];
        cout << "\ni = " << i << "\tantes\t";

    }

    for(a = 0; a < 4; a++)
    {

        cout << vetor[a] << "\t";

    }

    for(j= 1; j > 0 && auxiliar < vetor[j-1]; j--)
    {

        vetor[j] = vetor[j-1];
        cout << "\n\tdurante\t";

        for(a = 0; a < 4; a++)
        {

            cout << vetor[a] << "\t";

        }

        vetor[j] = auxiliar;
        cout << "\n\tdepois\t";

        for(int a = 0; a < 4; a++)
        {
            cout << vetor[a] << "\t";
        }

    }

}
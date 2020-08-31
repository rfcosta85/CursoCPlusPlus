#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{

    char vetor[] = {'M', 'C'}, auxiliar;

    cout << "\nAntes da Comparação\n";
    cout << "\n" << vetor[0] << "\t" << vetor[1];

    if(vetor[0] > vetor[1])
    {

        auxiliar = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = auxiliar;

    }

    cout << "\nApós a comparação\n";
    cout << "\n" << vetor[0] << "\t" << vetor[1];
    cout << "\n\n";

    cout << "\nPressione enter duas vezes para sair...\n";

    getchar();
    getchar();

    return 0;
}
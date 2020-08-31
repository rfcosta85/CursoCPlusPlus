#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main(void)
{

    char vetor[][13] = {"João Renato", "Anita Maciel"}, auxiliar[13];

    cout << "\nAntes da Comparação\n";
    cout << "\n" << vetor[0] << "\t" << vetor[1];

    if(strcmp (vetor[0], vetor[1]) > 0)
    {

        strcpy(auxiliar, vetor[0]);
        strcpy(vetor[0], vetor[1]);
        strcpy(vetor[1], auxiliar);

    } 

    cout << "\n\nApós a Comparação\n";
    cout << "\n" << vetor[0] << "\t" << vetor[1];
    cout << "\n\n";

    cout << "\n\nPressione enter duas vezes para sair...\n";

    getchar();
    getchar();

    return 0;
}

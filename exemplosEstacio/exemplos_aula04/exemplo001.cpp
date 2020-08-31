#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{

    double vetor[] = {67.250, 54.500}, auxiliar;

    cout << "\nAntes da comparação\n";
    cout << "\n" << vetor[0] << "\t" << vetor[1];

    if(vetor[0] > vetor[1])
    {

        auxiliar = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = auxiliar;

    }

    cout << "\n\nApós a comparação\n";
    cout << "\n" << vetor[0] << "\t" << vetor[1];
    cout << "\n\n";

    cout << "Pressione Enter duas vezes para sair....\n";

    getchar();
    getchar();

    return 0;
}
#include <iostream>
#include <stdlib.h>
#define Tamanho 10

using namespace std;

void dobro(double[], double[], int tam);

int main(void)
{

    double numeros[Tamanho], numerosDobro[Tamanho];

    for(int x = 0; x < Tamanho; x++)
    {
        
        cout << "\nNumero " << x+1 << ": ";
        cin >> numeros[x];

    }

    dobro(numeros,numerosDobro,Tamanho);

    cout << "\nOriginal\tDobro\n";

    for(int x = 0; x < Tamanho; x++)
    {
        cout << "\n" << numeros[x] << "\t\t" << numerosDobro[x];
    } 

    cout << "\n\n";

    getchar();
    getchar();

    return 0;
}

void dobro(double v1[], double v2[], int tam)
{

    for(int x = 0; x < tam; x++)
    {
        v2[x] = v1[x] * 2;
    }

}
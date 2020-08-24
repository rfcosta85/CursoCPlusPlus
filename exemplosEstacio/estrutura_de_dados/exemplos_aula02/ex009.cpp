#include <iostream>
#include <stdlib.h>

using namespace std;

int contaMaioresQueH(double[], int tam, double altP);

int main(void)
{

    double alturas[4], procurarAltura;

    for(int x = 0; x < 4; x++)
    {
        cout << "\nAltura " << x+1 << ": ";
        cin >> alturas[x];
    }

    cout << "\n\nQual a altura mínima? ";
    cin >> procurarAltura;

    cout << "\nRelação das alturas\n";

    for(int x= 0; x < 4; x++)
    {

        cout << alturas[x] << "\t";

    }

    contaMaioresQueH(alturas, 4, procurarAltura);

    cout << "\n\nTotal das alturas maiores que 8: " <<contaMaioresQueH(alturas, 4, procurarAltura);
    cout << "\n\n";

    getchar();
    getchar();

    return 0;
}

int contaMaioresQueH(double alts[], int tam, double altP)
{

    int conta = 0;
    for(int x = 0; x < tam; x++)
    {
        if(alts[x] >= altP)
        {
            conta++;
        }        
    }

    return conta;

}
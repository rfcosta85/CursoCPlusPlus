#include <iostream>
#include <stdlib.h>

using namespace std;

void linha(char c, int n);

int main(void)
{

    cout << "ESTÁCIO\n";

    linha('=', 7);

    cout << "\nEstrutura de Dados\n";

    linha('*', 19);

    cout << "\nEnsino a Distância\n";

    linha('@', 18);

    cout << "\n\n";

    getchar();
    getchar();

    return 0;
}

void linha(char c, int n)
{

    for(int i = 1; i <= n; i++)
    {

        cout << c;

    }

}
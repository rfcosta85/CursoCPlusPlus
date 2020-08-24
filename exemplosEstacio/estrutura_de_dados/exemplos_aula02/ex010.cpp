#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

void arredonda(double a[], int tam);

int main(void)
{

    double notas[6];

    for(int x= 0; x < 5; x++)
    {
        cout << "\nNota " << x+1 << ": ";
        cin >> notas[x];
    }

    cout <<"\nRelação das notas originais\n";

    for(int x = 0; x < 5; x++)
    {
        cout << notas[x] << "\t";
    }

    arredonda(notas, 5);

    cout << "\n\nRelação das notas arredondadas para cima\n";

    for(int x = 0; x < 5; x++)
    {

        cout << notas[x] << "\t";

    }

    cout << "\n\n";

    getchar();
    getchar();

    return 0;
}

void arredonda(double a[], int tam)
{

    for(int x= 0; x < tam; x++)
    {
        a[x] = ceil(a[x]);
    }

}
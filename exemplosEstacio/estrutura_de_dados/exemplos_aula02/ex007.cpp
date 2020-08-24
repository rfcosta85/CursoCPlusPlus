#include <iostream>
#include <stdlib.h>

using namespace std;

void troca(float &, float &);

int main()
{

    float n1, n2;

    cout << "\nDigite o primeiro número: ";
    cin >> n1;

    cout << "\nDigite o segundo número: ";
    cin >> n2;

    troca(n1,n2);

    cout << "\nApós a troca: " <<n1<<"\t"<<n2;
    cout <<"\n\n";

    getchar();
    getchar();

    return 0;

}

void troca(float &a, float &b)
{
    float aux;
    aux = a;
    a = b;
    a = aux;
}
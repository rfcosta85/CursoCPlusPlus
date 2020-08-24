#include <iostream>
#include <stdlib.h>

using namespace std;

int areaRetangulo(int base, int altura);

int main(void)
{

    int basePrincipal, alturaPrincipal;
    
    cout << "Digite a base de um retângulo: ";
    cin >> basePrincipal;

    cout << "\nDigite a altura de um retângulo: ";
    cin >> alturaPrincipal;

    cout << "\nÁrea: " << areaRetangulo(basePrincipal, alturaPrincipal) << " m²";

    getchar();
    getchar();

    cout << "\n\n";

    return 0;

    
}

int areaRetangulo(int base, int altura)
{

    return base * altura;

}
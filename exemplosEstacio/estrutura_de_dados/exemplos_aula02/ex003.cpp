#include <iostream>

using namespace std;

void reajuste()
{

    float valor, percentual, reajustado;

    cout << "\nDigite o valor que derevá ser reajustado: R$";
    cin >> valor;

    cout << "\nDigite o valor do percentual de ajuste de 0 a 100: ";
    cin >> percentual;

    reajustado = valor + valor * percentual/100;

    cout << "\nValor reajustado R$" << reajustado;

}

int main(void)
{

    reajuste();

    cout << "\n\n";

    getchar();
    getchar();

    return 0;
}
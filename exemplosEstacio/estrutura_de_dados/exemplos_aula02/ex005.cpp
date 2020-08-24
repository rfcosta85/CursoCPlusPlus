#include <iostream>
#include <stdlib.h>

using namespace std;

int descobreIdade(int anoAtual, int anoNascimento);

int main(void)
{

    int ano, nascimento;

    cout << "Digite o ano do seu nascimento: ";
    cin >> nascimento;

    cout << "\nDigite o ano atual: ";
    cin >> ano;

    cout << "\nVocê terá até 31 de Dezembro de " << ano << " " << descobreIdade(ano,nascimento) << " anos.";

    getchar();
    getchar();

    cout << "\n\n";

    return 0;
    
}

int descobreIdade(int anoAtual, int anoNascimento)
{

    return anoAtual - anoNascimento;

}
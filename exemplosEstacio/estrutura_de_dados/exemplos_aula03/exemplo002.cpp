#include <iostream>
#include <stdlib.h>
#include <cstring> //Da suporte ao char tipo ou ao wchar_t tipo, dependendo se o símbolo MBCS ou  símbolo Unicode está definido no momento da compilação, ele também retém os caracteres nulos nos dados de caracteres armazenados para dar suporte à conversão em LPCWSTR.
// o strcmp é uma classe da biblioteca cstring e ela serve para compararmos a primeira string de cada string.

using namespace std;

int main()
{

    struct prod
    {

        char nomeProd[21];
        float valor;
        
    }produto1 = {"Martelo", 35.90}, produto2 = {"Furadeira", 256.75}, aux;

    if(strcmp(produto1.nomeProd,produto2.nomeProd) > 0)
    {

        aux = produto1;
        produto1 = produto2;
        produto2 = aux;

    }

    cout << "\nNome do Produto 1: " << produto1.nomeProd << "\t" << produto1.valor;
    cout << "\nNome do Produto 2: " << produto2.nomeProd << "\t" << produto2.valor;

    cout << "\n\n";

    getchar;
    getchar;
    

}
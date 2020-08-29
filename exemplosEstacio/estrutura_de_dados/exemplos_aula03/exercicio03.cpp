#include <iostream>
#include <stdlib.h>
#define TAM 1000

/*Tomando como base o array de estruturas, construa um programa que armazene código e preço de compra de 1000 produtos, calcule um reajuste de 60% para venda e exiba código, valor de compra e venda. Observação: Para que você pudesse visualizar a entrada e a saída, foi usada a diretiva define que criou a constante TAM com valor 3 (deveria ser 1000)*/

using namespace std;

int main()
{

    struct cadastroDoProduto
    {

        int codigo;
        float precoCompra, precoVenda;        

    };

    cadastroDoProduto produtos[TAM];
    int i, numero;

    for(i = 0; i < TAM ; i++)
    {

        cout <<"\nCodigo do produto 0-1000: ";
        cin >> numero;

        while (numero < 0 || numero > 1000)
        {
            
            cout << "\nCódigo Inválido";
            cout << "\nCódigo do produto 0-1000: ";
            cin >> numero;
        }

        produtos[i].codigo = numero;
        cout << "\nPreço de compra: ";
        cin >> produtos[i].precoCompra;
        produtos[i].precoVenda = produtos[i].precoCompra * 1.6;       

    }

    system("clear");
    
    cout << "\n\nCódigo\tCompra\tVenda\n";

    for(i = 0; i < TAM; i++)
    {

        cout <<"\n" << produtos[i].codigo << "\t" << produtos[i].precoCompra << "\t" << produtos[i].precoVenda;
        
    }

    cout << "\n\nPressione Enter duas vezes para sair...";
    cout << "\n\n";

    getchar();
    getchar();

}
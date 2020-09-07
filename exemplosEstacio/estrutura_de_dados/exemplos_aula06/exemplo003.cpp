#include <iostream>
#include <stdlib.h>
#include <cstring>
#define TAM 40

using namespace std;

void empilha(int p[], int &t, int v);
int desempilha(int p[], int &t, int &v);

int main(void)
{

    float n;//Para possibilitar a entrada de número maior do que o inteiro permite
    int numero, resto, pilha[TAM], sinal, topo = -1; //Inicialização da pilha através de topo = -1

    cout << "\n############################################################";
    cout << "\n###                                                      ###";
    cout << "\n###  Converte número de base decimal para base binária   ###";
    cout << "\n###                                                      ###";
    cout << "\n############################################################\n";

    cout << "\nDigite um número positivo até 2147483520. Qualquer outro, sai: ";
    cin >> numero;

    if(numero > 2147483520 || numero < -2147483520)
    {

        exit(0); //Limita intervalo de inteiro no dev-cpp, embora seja maior

    }else
    {
        
        numero = (int) numero; //converte real para inteiro

    }

    while (numero >= 0)
    {
        do // inicio do trecho que empilha os restos que irão gerar o número binário
        {
            
            resto = numero % 2;
            empilha(pilha,topo, resto);
            numero /= 2;

        } while (numero > 0); // Fim do trecho de empilhamento

        cout << "\nConvertido para binário: ";
        sinal = desempilha(pilha, topo, resto); //inicio do trecho que desempilha todos

        while(sinal == 1) //Os restos que irão exibir o número binário
        {

            cout << resto;
            sinal = desempilha(pilha,topo,resto);

        } //Fim do trecho de desempilhamento

        topo =- 1;

        cout << "\n\nDigite número positivo até 2147483520. Qualquer outro sai: ";
        cin >> numero;

        if(numero > 2147483520 || numero < -2147483520)
        {

            exit(0); // Maximo permitido no Dev-Cpp

        }else
        {
            
            numero = (int) numero;

        }
        
        cout << "\n\n";
        cout << "\n\nPressione enter para sair...";

        getchar();
        getchar();
        
    }    

    return 0;
}

void empilha(int p[], int &t, int v)
{

    if(t == TAM - 1) // Este teste não é necessário porque já limitei a entrada
    {

        cout << "\nATENÇÃO! Pilha Cheia\n"; // Mantive para usar o mesmo trecho

    }

    else
    {
        
        t++; //atualiza o topo
        p[t] = v; //pilha recebe valor

    }    

}

int desempilha(int p[], int &t, int &v)
{

    if(t == -1)
    {

        return 0;

    }else
    {
       
        v = p[t]; //guarda o valor do topo
        t--; // atualiza o topo
        return 1;

    }    

}
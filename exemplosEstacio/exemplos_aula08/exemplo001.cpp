#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

struct nodo 
{

    int num;
    struct nodo* prox;

};

int main()
{

    nodo *temp, *lista = NULL;

    //primeiro nó

    temp = new nodo;
    temp -> num = 23;
    temp -> prox = lista;
    lista = temp;

    //segundo nó

    temp = new nodo;
    temp -> num = 13;
    temp -> prox = lista;
    lista = temp;

    //terceiro nó 

    temp = new nodo;
    temp -> num = 15;
    temp -> prox = lista;
    lista = temp;

    //quarto nó

    temp = new nodo;
    temp -> num = 18;
    temp -> prox = lista;
    lista = temp;

    //listando

     cout << "\nInserindo n° na frente - Listando";
     cout << "\nValor do 1° n°: " << lista -> num;
     cout << "\nValor do 2° n°: " << lista -> prox -> num;
     cout << "\nValor do 3° n°: " << lista -> prox -> prox -> num;
     cout << "\nValor do 4° n°: " << lista -> prox -> prox -> prox -> num;

     //liberando

     delete lista;
     lista = 0;
     cout << "\n\n";
     getchar();
     getchar();

}
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cctype>

/*Construa um array de estruturas com duas variáveis. O único membro da estrutura é um array de carácter (vetor de char) que deverá ser capaz de armazenar até 20 caracteres sem incluir o terminador. Os valores  deverão ser lidos via teclado.Na saída, cada letra de cada vetor de char deverá ser exibida em uma linha, sendo que uma linha em branco separará as letras dos dois vetores. Além disso, a primeira letra da primeira palavra tem que estar em maiúscula mesmo que o usuário não tenha digitado assim.*/

using namespace std;

int main()
{

    struct caracter
    {
        
        char palavra[21];
        
    }palavras[2];

    int x,y;

    for(x = 0; x < 2; x++)
    {

        cout << "\nPalavra: ";
        cin.getline(palavras[x].palavra,21);

    }

    palavras[0].palavra[0] = toupper(palavras[0].palavra[0]);

    system("clear");

    for(x = 0; x < 2; x++)
    {

        for(y = 0; palavras[x].palavra[y] != '\0'; y++)
        {

            cout << "\n" << palavras[x]. palavra[y];            
            
        }

        cout << "\n\n";

    }    

    cout << "\nPressione Enter duas vezes para sair";
    cout << "\n\n";

    getchar();
    getchar();

}
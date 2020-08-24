#include <iostream>

using namespace std;

void asteriscos()
{
    
    for(int i = 1; i <= 20; i++)
    {

        cout << "*";

    }

}

int main(void)
{

    cout << "Estudo de funções\n";
    asteriscos();
    cout << "\nConhecendo o tipo void\n";
    asteriscos();
    cout << "\nSem parametros\n";
    asteriscos();
    cout << "\n\n";
    return 0;
}
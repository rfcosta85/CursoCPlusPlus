#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void)
{
    int a = 6, b = 4, x;
    float resultado;

    cout << "Exemplo triângulo Retângulo";
    cout << "\n\nPara encontrar o valor de X,precisamos utilizar o Teorema de Pitágoras.";

    x = pow(b,2) + pow(a,2);
    resultado = sqrt(x);

    cout << "\n\n" << setprecision(2) << "O valor de x será: " << resultado << "\n\n";


    return 0;

}
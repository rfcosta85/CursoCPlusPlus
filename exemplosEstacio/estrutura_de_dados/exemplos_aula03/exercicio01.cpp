#include <iostream>
#include <stdlib.h>

/*Defina uma estrutura que armazene todos os dados de uma ficha
Declare variáveis, supondo dois pacientes e construa um programa lendo os dados via teclado.
Exiba os dados exceto o telefone.*/

using namespace std;

int main()
{

    struct fichaPaciente
    {
        
        char nomeDoPaciente[30];
        float peso, altura;    

    }paciente1, paciente2;
    
    float imcPaciente1, imcPaciente;
    string classificacao;

    cout << "Nome do 1° Paciente: ";
    cin.getline(paciente1.nomeDoPaciente,30);
    
    cout << "altura: ";
    cin >> paciente1.altura;
    cin.get();

    cout << "peso: ";
    cin >> paciente1.peso;
    cin.get();

    imcPaciente1 = paciente1.peso / (paciente1.altura * paciente1.altura);

    if(imcPaciente1 < 18.5)
    {
        
        classificacao = "Magreza";

    } else if (imcPaciente1 >= 18.5  && imcPaciente1 < 24.9)
    {
        
        classificacao = "Normal";

    } else if (imcPaciente1 >= 25 && imcPaciente1 < 29.9)
    {

        classificacao = "Sobrepeso";

    } else if (imcPaciente1 >= 30 && imcPaciente1 < 39.9)
    {

        classificacao = "Obesidade";
    } else
    {
        
        classificacao = "Obesidade Grave";

    }
    
    
    
    
    
    cout << "nome do paciente: " << paciente1.nomeDoPaciente;
    cout << "\naltura: " << paciente1.altura << "\tpeso: " << paciente1.peso; 
    cout << "\nimc: " << imcPaciente1 << "\tclassificação: " << classificacao;
    
    cout <<"\n\nPressione enter duas vezes para sair...";
    cout << "\n\n";

    getchar();
    getchar();

}
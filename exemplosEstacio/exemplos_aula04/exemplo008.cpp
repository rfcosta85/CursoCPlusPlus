#include <iostream>
#include <stdlib.h>
#include <cstring>
#define tam 5

using namespace std;

int main(void)
{

    int l, op, matProcura, pos, achou, matricula[] = {2,4,5,6,13};
    float cr[] = {8,9,7.8,6,10};

    do
    {
        
        system("clear");
        
        cout << "\n1- Lista";
        cout << "\n2- Procura";
        cout << "\n3- Sair";
        cout << "\nOpção: ";
        cin >> op;

        switch (op)
        {
        
        case 1:
            
            cout << "\nMatriculas\n\n";
            
            for(l = 0; l < tam; l++)
            {

                cout << "\n" << l+1 << " - " << matricula[l];

            }
            
            break;

            case 2: /*Trecho de procura*/

                cout << "\nQual matricular a ser procurada? ";
                cin >> matProcura;
                achou = 0;

                for(l = 0; l < tam && achou == 0; l++)
                {

                    if(matProcura == matricula[l])
                    {

                        achou = 1; pos = l;

                    }

                }

                if(achou == 1)
                {

                    cout <<"\ncr: " << cr[pos] << endl;

                }else
                {
                    
                    cout << "\nMatricula não achada\n";

                }

                break;

                case 3:

                cout << "\nMatricula não achada\n";

                break;                
        
        default:

            cout << "\nOpção Inválida!";
            break;
        }        

        cout << "\n\n";

        cout << "\n\nPressione Enter para sair...";

        getchar();
        getchar();

    } while (op != 3);
    

    return 0;
}
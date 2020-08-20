#include <iostream>

using namespace std;

// The Instructions will use matrix to show the table of Brazilian League First Division 2020 till fixture 4

int main(void)
{

    string table[21][11];

    table[0][0] = "1";
    table[0][1] = "Internacional";
    table[0][2] = "9";
    table[0][3] = "4";
    table[0][4] = "3";
    table[0][5] = "0";
    table[0][6] = "1";
    table[0][7] = "7";
    table[0][8] = "2";
    table[0][9] = "5";
    table[0][10] = "75";

    table[1][0] = "2";
    table[1][1] = " Atlético-MG ";
    table[1][2] = "9";
    table[1][3] = "4";
    table[1][4] = "3";
    table[1][5] = "0";
    table[1][6] = "1";
    table[1][7] = "7";
    table[1][8] = "4";
    table[1][9] = "3";
    table[1][10] = "75";

    table[2][0] = "3";
    table[2][1] = " Vasco       ";
    table[2][2] = "6";
    table[2][3] = "2";
    table[2][4] = "2";
    table[2][5] = "0";
    table[2][6] = "0";
    table[2][7] = "4";
    table[2][8] = "1";
    table[2][9] = "3";
    table[2][10] = "100";

    table[3][0] = "4";
    table[3][1] = " Bahia       ";
    table[3][2] = "6";
    table[3][3] = "2";
    table[3][4] = "2";
    table[3][5] = "0";
    table[3][6] = "0";
    table[3][7] = "3";
    table[3][8] = "1";
    table[3][9] = "2";
    table[3][10] = "100"; 
    
       

    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 11; j++)
        {
            cout << table[i][j] << "|";
        }

        cout << "\n";
    }
    
    cout << "\n\n\n";

    return 0;
}
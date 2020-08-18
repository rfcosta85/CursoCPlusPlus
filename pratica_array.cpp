#include <iostream>

using namespace std;


// Brazilian League 2020 Database for all results till 3° round

int main(void)
{

    string game[10], round[38];    

    game[0] = "Fortaleza 0 x 2 Atlético Pr \n";     
    game[1] = "Coritiba 0 x 1 Internacional \n";    
    game[2] = "Sport 3 x 2 Ceara \n";
    game[3] = "Flamengo 0 x 1 Atlético Mg\n";
    game[4] = "Santos 1 x 1 Redbull Bragantino \n";
    game[5] = "Grêmio 1 x 0 FLuminense\n";
    game[6] = "Botafogo x Bahia\n";
    game[7] = "Palmeiras x Vasco\n";
    game[8] = "Corinthians x Atlético Go\n";
    game[9] = "Goiás x São Paulo\n";

    cout << "- BRAZILIAN LEAGUE - Fixture 1\n\n";

    for(int i = 0; i <= 9; i++)
    {
       
        round[0] = game[i];
        cout << round[0] << "\n";

    }

    cout << "----------------------------------\n\n";
    cout << "- BRAZILIAN LEAGUE - Fixture 2\n\n";

    game[0] = "Redbull Bragantino 1 x 1 Botafogo\n";
    game[1] = "Atlético Mg 3 x 2 Corinthians\n";
    game[2] = "Atlético Pr 2 x 1 Goiás\n";
    game[3] = "Bahia 1 x 0 Coritiba\n";
    game[4] = "Atlético Go 3 x 0 Flamengo\n";
    game[5] = "Fluminense 1 x 1 Palmeiras\n";
    game[6] = "Ceará 1 x 1 Grêmio\n";
    game[7] = "São Paulo 1 x 0 Fortaleza\n";
    game[8] = "Internacional 2 x 0 Santos\n";
    game[9] = "Vasco 2 x 0 Sport\n";

    for(int i = 0; i <= 9; i++)
    {
       
        round[1] = game[i];
        cout << round[1] << "\n";

    }

    cout << "----------------------------------\n\n";
    cout << "- BRAZILIAN LEAGUE - Fixture 3\n\n";

    game[0] = "Grêmio 3 x 0 Corinthians\n";
    game[1] = "Coritiba 0 x 1 Flamengo\n";
    game[2] = "Palmeiras 1 x 1 Goiás\n";
    game[3] = "Atlético Mg 2 x 0 Ceará\n";
    game[4] = "Vasco 2 x 1 São Paulo\n";
    game[5] = "Bahia 2 x 1 RedBull Bragantino\n";
    game[6] = "Fluminense 2 x 1 Internacional\n";
    game[7] = "Atlético Go 1 x 1 Sport\n";
    game[8] = "Fortaleza 0 x 0 Botafogo\n";
    game[9] = "Santos 3 x 1 Atlético Pr\n";

    for(int i = 0; i <= 9; i++)
    {
       
        round[1] = game[i];
        cout << round[1] << "\n";

    }

    cout << "----------------------------------\n\n\n";

    return 0;
}
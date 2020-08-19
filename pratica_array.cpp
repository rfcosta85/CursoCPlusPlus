#include <iostream>

using namespace std;


// Brazilian League 2020 Database for all results till 3° round

int main(void)
{

    string game[10], round[38], home[10], away[10];
    int homeScore[10], awayScore[10], totalScore[10], overMeio = 0, overUmMeio = 0, overDoisMeio = 0, overTresMeio = 0, overQuatroMeio = 0, overCincoMeio = 0, overSeiMeio = 0;       

    game[0] = home[0] = "Fortaleza " ; away[0] =" Atlético Pr";homeScore[0] = 0; awayScore[0] = 2;totalScore[0] = homeScore[0] + awayScore[0];
    game[1] = home[1] = "Coritiba " ; away[1] = " Internacional";homeScore[1] = 0; awayScore[1] = 1;totalScore[1] = homeScore[1] + awayScore[1];
    game[2] = home[2] = "Sport "; away[2] = " Ceará"; homeScore[2] = 3; awayScore[2] = 2;totalScore[2] = homeScore[2] + awayScore[2];
    game[3] = home[3] = "Flamengo "; away[3] = " Atlético Mg";homeScore[3] = 0; awayScore[3] = 1; totalScore[3] = homeScore[3] + awayScore[3];
    game[4] = home[4] = "Santos "; away[4] = " RedBull Bragantino";homeScore[4] = 1; awayScore[4] = 1; totalScore[4] = homeScore[4] + awayScore[4];
    game[5] = home[5] = "Grêmio "; away[5] = " Fluminense";homeScore[5] = 1; awayScore[5] = 0; totalScore[5] = homeScore[5] + awayScore[5];    

    
    
    cout << "- BRAZILIAN LEAGUE - Fixture 1\n\n";

    for(int i = 0; i <= 5; i++)
    {
        if(totalScore[i] > 0)
        {
            overMeio += 1;
            if (totalScore[i] > 1)
            {
                overUmMeio += 1;
            }
            
        } 
        
        
        cout << home[i] << homeScore[i] << " x " << awayScore[i] << away[i] << "\n\n";
        
    }

    cout << "----------------------------------\n\n";
    cout << "Total de over 0.5 na rodada: " << overMeio<< "\n\n";
    cout << "Total de over 1.5 na rodada: " << overUmMeio<< "\n\n";

    

    cout << "----------------------------------\n\n";
    cout << "- BRAZILIAN LEAGUE - Fixture 2\n\n";

    game[0] = home[0] = "RedBull Bragantino "; away[0] = " Botafogo"; homeScore[0] = 1; awayScore[0] = 1;totalScore[0] = homeScore[0] + awayScore[0];
    game[1] = home[1] = "Atlético Mg "; away[1] = " Corinthians"; homeScore[1] = 3; awayScore[1] = 2;totalScore[1] = homeScore[1] + awayScore[1];
    game[2] = home[2] = "Atlético Pr "; away[2] = " Goiás"; homeScore[2] = 2; awayScore[2] = 1;totalScore[2] = homeScore[2] + awayScore[2];
    game[3] = home[3] = "Bahia "; away[3] = " Coritiba"; homeScore[3] = 1; awayScore[3] = 0;totalScore[3] = homeScore[3] + awayScore[3];
    game[4] = home[4] = "Atlético Go "; away[4] = " Flamengo"; homeScore[4] = 3; awayScore[4] = 0;totalScore[4] = homeScore[4] + awayScore[4];
    game[5] = home[5] = "Fluminense "; away[5] = " Palmeiras"; homeScore[5] = 1; awayScore[5] = 1;totalScore[5] = homeScore[5] + awayScore[5];
    game[6] = home[6] = "Ceará "; away[6] = " Grêmio"; homeScore[6] = 1; awayScore[6] = 1;totalScore[6] = homeScore[6] + awayScore[6];
    game[7] = home[7] = "São Paulo "; away[7] = " Fortaleza"; homeScore[7] = 1; awayScore[7] = 0;totalScore[7] = homeScore[7] + awayScore[7];
    game[8] = home[8] = "Internacional "; away[8] = " Santos"; homeScore[8] = 2; awayScore[8] = 0;totalScore[8] = homeScore[8] + awayScore[8];
    game[9] = home[9] = "Vasco "; away[9] = " Sport"; homeScore[9] = 2; awayScore[9] = 0;totalScore[9] = homeScore[9] + awayScore[9];
   

    for(int i = 0; i <= 9; i++)
    {
       
        cout << home[i] << homeScore[i] << " x " << awayScore[i] << away[i] << "\n\n";

    }

    cout << "----------------------------------\n\n";
    cout << "- BRAZILIAN LEAGUE - Fixture 3\n\n";

    game[0] = home[0] = "Grêmio "; away[0] = " Corinthians"; homeScore[0] = 0; awayScore[0] = 0;totalScore[0] = homeScore[0] + awayScore[0];
    game[1] = home[1] = "Coritiba "; away[1] = " Flamengo"; homeScore[1] = 0; awayScore[1] = 1;totalScore[1] = homeScore[1] + awayScore[1];
    game[2] = home[2] = "Palmeiras "; away[2] = " Goiás"; homeScore[2] = 1; awayScore[2] = 1;totalScore[2] = homeScore[2] + awayScore[2];
    game[3] = home[3] = "Atlético Mg "; away[3] = " Ceará"; homeScore[3] = 2; awayScore[3] = 0;totalScore[3] = homeScore[3] + awayScore[3];
    game[4] = home[4] = "Vasco "; away[4] = " São Paulo"; homeScore[4] = 2; awayScore[4] = 1;totalScore[4] = homeScore[4] + awayScore[4];
    game[5] = home[5] = "Bahia "; away[5] = " RedBull Bragantino"; homeScore[5] = 2; awayScore[5] = 1;totalScore[5] = homeScore[5] + awayScore[5];
    game[6] = home[6] = "Fluminense "; away[6] = " Internacional"; homeScore[6] = 2; awayScore[6] = 1;totalScore[6] = homeScore[6] + awayScore[6];
    game[7] = home[7] = "Atlético Go "; away[7] = " Sport"; homeScore[7] = 1; awayScore[7] = 1;totalScore[7] = homeScore[7] + awayScore[7];
    game[8] = home[8] = "Fortaleza "; away[8] = " Botafogo"; homeScore[8] = 0; awayScore[8] = 0;totalScore[8] = homeScore[8] + awayScore[8];
    game[9] = home[9] = "Santos "; away[9] = " Atlético Pr"; homeScore[9] = 3; awayScore[9] = 1;totalScore[9] = homeScore[9] + awayScore[9];  


    for(int i = 0; i <= 9; i++)
    {
       
        cout << home[i] << homeScore[i] << " x " << awayScore[i] << away[i] << "\n\n";

    }

    
    cout << "----------------------------------\n\n\n";

    return 0;
}
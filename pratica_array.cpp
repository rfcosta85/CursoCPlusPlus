#include <iostream>

using namespace std;


// Brazilian League 2020 Database for all results till 3° round

int main(void)
{

    string game[10], home[10], away[10];
    float homeScore[10], awayScore[10], totalScore[10], overMeio = 0, overUmMeio = 0, overDoisMeio = 0, overTresMeio = 0, overQuatroMeio = 0, overCincoMeio = 0, overSeisMeio = 0, underMeio = 0, underUmMeio = 0, underDoisMeio = 0, underTresMeio = 0, underQuatroMeio = 0, underCincoMeio = 0, underSeisMeio = 0, totalGames = 0, averageOverMeio, averageOverUmMeio, averageOverDoisMeio, averageOverTresMeio, averageOverQuatroMeio, averageOverCincoMeio, averageOverSeisMeio, averageUnderMeio, averageUnderUmMeio, averageUnderDoisMeio, averageUnderTresMeio, averageUnderQuatroMeio, averageUnderCincoMeio, averageUnderSeisMeio;
           

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
            
        }else
        {
            
            underMeio += 1;

        }

        if(totalScore[i] > 1)
        {

            overUmMeio += 1;

        }else
        {
            
            underUmMeio += 1;

        }

        if(totalScore[i] > 2)
        {

            overDoisMeio += 1;

        }else
        {
            
            underDoisMeio += 1;

        }

        if(totalScore[i] > 3)
        {

            overTresMeio += 1;

        }else
        {
            
            underTresMeio += 1;

        }

        if(totalScore[i] > 4)
        {

            overQuatroMeio += 1;

        }else
        {
            
            underQuatroMeio += 1;

        }

        if(totalScore[i] > 5)
        {

            overCincoMeio += 1;

        }else
        {
            
            underCincoMeio += 1;

        }

        if(totalScore[i] > 6)
        {

            overSeisMeio += 1;

        }else
        {
            
            underSeisMeio += 1;

        }       
        
        cout << home[i] << homeScore[i] << " x " << awayScore[i] << away[i] << "\n\n";
        totalGames += 1;        
        
    }    

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
       
       if(totalScore[i] > 0)
        {
            
            overMeio += 1;                       

        }else
        {
            
            underMeio += 1;

        }

        if(totalScore[i] > 1)
        {

            overUmMeio += 1;

        }else
        {
            
            underUmMeio += 1;

        }

        if(totalScore[i] > 2)
        {

            overDoisMeio += 1;

        }else
        {
            
            underDoisMeio += 1;

        }

        if(totalScore[i] > 3)
        {

            overTresMeio += 1;

        }else
        {
            
            underTresMeio += 1;

        }

        if(totalScore[i] > 4)
        {

            overQuatroMeio += 1;

        }else
        {
            
            underQuatroMeio += 1;

        }

        if(totalScore[i] > 5)
        {

            overCincoMeio += 1;

        }else
        {
            
            underCincoMeio += 1;

        }

        if(totalScore[i] > 6)
        {

            overSeisMeio += 1;

        }else
        {
            
            underSeisMeio += 1;

        }

        cout << home[i] << homeScore[i] << " x " << awayScore[i] << away[i] << "\n\n";
        totalGames += 1;

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
       
        if(totalScore[i] > 0)
        {
            
            overMeio += 1;                       

        }else
        {
            
            underMeio += 1;

        }

        if(totalScore[i] > 1)
        {

            overUmMeio += 1;

        }else
        {
            
            underUmMeio += 1;

        }

        if(totalScore[i] > 2)
        {

            overDoisMeio += 1;

        }else
        {
            
            underDoisMeio += 1;

        }

        if(totalScore[i] > 3)
        {

            overTresMeio += 1;

        }else
        {
            
            underTresMeio += 1;

        }

        if(totalScore[i] > 4)
        {

            overQuatroMeio += 1;

        }else
        {
            
            underQuatroMeio += 1;

        }

        if(totalScore[i] > 5)
        {

            overCincoMeio += 1;

        }else
        {
            
            underCincoMeio += 1;

        }

        if(totalScore[i] > 6)
        {

            overSeisMeio += 1;

        }else
        {
            
            underSeisMeio += 1;

        }

        cout << home[i] << homeScore[i] << " x " << awayScore[i] << away[i] << "\n\n";
        totalGames += 1;

        averageOverMeio = (overMeio/totalGames) * 100;
        averageOverUmMeio = (overUmMeio/totalGames) * 100;
        averageOverDoisMeio = (overDoisMeio/totalGames) * 100;
        averageOverTresMeio = (overTresMeio/totalGames) * 100;
        averageOverQuatroMeio = (overQuatroMeio/totalGames) * 100;
        averageOverCincoMeio = (overCincoMeio/totalGames) * 100;
        averageOverSeisMeio = (overSeisMeio/totalGames) * 100;  

        averageUnderMeio = (underMeio/totalGames) * 100;        
        averageUnderUmMeio = (underUmMeio/totalGames) * 100;        
        averageUnderDoisMeio = (underDoisMeio/totalGames) * 100;        
        averageUnderTresMeio = (underTresMeio/totalGames) * 100;        
        averageUnderQuatroMeio = (underQuatroMeio/totalGames) * 100;        
        averageUnderCincoMeio = (underCincoMeio/totalGames) * 100;
        averageUnderSeisMeio = (underSeisMeio/totalGames) * 100;    
        
    }

        

    cout << "----------------------------------\n\n";
    cout << "Over 0.5: " << overMeio << "\n\n";
    cout << "Over 1.5: " << overUmMeio << "\n\n";
    cout << "Over 2.5: " << overDoisMeio << "\n\n";
    cout << "Over 3.5: " << overTresMeio << "\n\n";
    cout << "Over 4.5: " << overQuatroMeio << "\n\n";
    cout << "Over 5.5: " << overCincoMeio << "\n\n";
    cout << "Over 6.5: " << overSeisMeio << "\n\n";
    cout << "---------------\n\n";
    cout << "Under 6.5: " << underSeisMeio << "\n\n";
    cout << "Under 5.5: " << underCincoMeio << "\n\n";
    cout << "Under 4.5: " << underQuatroMeio << "\n\n";
    cout << "Under 3.5: " << underTresMeio << "\n\n";
    cout << "Under 2.5: " << underDoisMeio << "\n\n";
    cout << "Under 1.5: " << underUmMeio << "\n\n";
    cout << "Under 0.5: " << underMeio << "\n\n";
    cout << "------------------\n\n";
    cout << "Total de jogos: " << totalGames << "\n\n"; 
    cout << "------------------\n\n";   
    cout << "Average Over 0.5: " << averageOverMeio << " %\n\n";
    cout << "Average Over 1.5: " << averageOverUmMeio << " %\n\n";
    cout << "Average Over 2.5: " << averageOverDoisMeio << " %\n\n";
    cout << "Average Over 3.5: " << averageOverTresMeio << " %\n\n";
    cout << "Average Over 4.5: " << averageOverQuatroMeio << " %\n\n"; 
    cout << "Average Over 5.5: " << averageOverCincoMeio << " %\n\n";
    cout << "Average Over 6.5: " << averageOverSeisMeio << " %\n\n";
    cout << "------------------\n\n";
    cout << "Average Under 0.5: " << averageUnderMeio << " %\n\n";
    cout << "Average Under 1.5: " << averageUnderUmMeio << " %\n\n";  
    cout << "Average Under 2.5: " << averageUnderDoisMeio << " %\n\n";  
    cout << "Average Under 3.5: " << averageUnderTresMeio << " %\n\n";  
    cout << "Average Under 4.5: " << averageUnderQuatroMeio << " %\n\n";  
    cout << "Average Under 5.5: " << averageUnderCincoMeio << " %\n\n";  
    cout << "Average Under 6.5: " << averageUnderSeisMeio << " %\n\n";           
    cout << "----------------------------------\n\n\n";

    return 0;
}
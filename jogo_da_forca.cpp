#include <iostream>
#include <stdlib.h>


using namespace std;

int main(void)
{

    char word[30], letter[1], secret[30];
    int length, i, chances, hits;
    bool hit;

    chances = 6;
    length = 0;
    i = 0;
    hit = false;
    hits = 0;

    cout << "Type the secret word: "; 
    cin >> word;
    system("clear");

    while(word[i] != '\0') // O \0 mettings the finish of the word.
    {

        i++;
        length++;

    }

    for(i = 0; i < 30; i++)
    {
        secret[i] = '-';
    }

    while((chances > 0) && (hits < length))
    {

        cout << "Chances remains: " << chances << "\n\n";
        cout << "Secret Word: ";

        for(i = 0; i < length; i++)
        {
            
            cout << secret[i];

        }

        cout << "\n\nType one letter: ";
        cin >> letter[0];

        for(i = 0; i < length; i++)
        {

            if(word[i] == letter[0])
            {

                hit = true;
                secret[i] = word[i];
                hits++;

            }

        }

        if(!hit)
        {

            chances--;

        }

        hit = false;
        system("clear");
    }

    if(hits == length)
    {
        
        cout << "You Win!\n";

    }else
    {
    
        cout << "What a shame! You Lost!\n";

    }
    
    
    
    return 0;
}
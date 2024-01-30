//Preprocessor
#include<iostream>
using namespace std;



//Main
int main(){
    loser:
    //Introduction
    cout << "\n\n\t[---CONSOLE BASED RPG BY F2023065202---]\n\n\n\t------------------------------------------"<< "\n\n\n\tThis is a terminal based textual RPG, you play the game by\n\tentering characters according to the given prompt, which will perform actions.\n\n\n\n\t------------------------------------------" <<"\n\n\n\t[Enter 1 to Start The Game]" <<"\n\t[Enter 2 to Exit the Game]";

    //Decision making variables
    int decisionmaker=0;
    int starter=0;
    int mobdecision=0;

    //Stats
    int playerhealth=20;
    int atk=5;
    int mobhealth=0;
    int mobatk=0;

    cout << "\n\n\n\tENTER NUMBER : ";
    cin >> starter;

    if (starter==2)
    {
        return 0;
    }

    //Start Of Game
    else if(starter==1)
    {
            cout<<"\n\n\n\tYou're an adventurer in the medieval times. You've been adventuring\n\tin a forest and you come across a clearing. Amidst the clearing, there's an old cobblestone \n\tdungeon.\n\tYou have a gut feeling that there lies treasure somewhere within the dungeon. Being the\n\tadventurer that you are, you scout the outsides of the dungeon. You find two entrances.\n\tOne in the back and one in the front.\n\n\tWHICH ENTRANCE DO YOU DECIDE TO TAKE : \n\t[1 - Front Entrance]\n\t[2 - Back Entrance]\n\n\tENTER NUMBER : ";
            
            decisionmaker=0;
            cin >> decisionmaker;

            //Back Entrance
            if(decisionmaker==2){
                cout << "\n\tYou take the back entrance and stumble upon an armory. You find\n\ta dagger (+10 ATTACK), leather armour (+10 HP) which you equip.\n\tYou don't find anything else so you go back to the front entrance.";
                playerhealth+=10;
                atk+=10;
                decisionmaker=1;
            }

            //Front Entrance

                cout << "\n\tYou enter through the front entrance, you stumble upon a large\n\thall. At the end of the hall there are two doors.\n\n\tWHICH DOOR DO YOU CHOOSE : \n\t[1 - Left Door]\n\t[2 - Right Door]\n\n\tENTER NUMBER : ";
                
                decisionmaker=0;
                cin >> decisionmaker;

            //Left Entrance
            if(decisionmaker==1){
                //Goblin Encounter
                mobhealth=50;
                mobatk=4;

                cout << "\n\n\tYou open the left door and enter the room. You encounter a goblin!";
                cout << "\n\n";
                cout<<"\n        .----.";
                cout<<"\n       /       \\";
                cout<<"\n   __ /   .-.  .\\";
                cout<<"\n  /  `\\  /   \\/  \\";
                cout<<"\n  |  _ \\/   .==.==.";
                cout<<"\n  | (   \\  /____\\__\\";
                cout<<"\n   \\ \\      (_()(_()";
                cout<<"\n    \\ \\            '---._";
                cout<<"\n     \\                   \\_";
                cout<<"\n  /\\ |`       (__)________/";
                cout<<"\n /  \\|     /\\___/";
                cout<<"\n|    \\     \\||VV";
                cout<<"\n|     \\     \\|'''',";
                cout<<"\n|      \\     ______)";
                cout<<"\n\\       \\  /`";
                cout<<"\n        \\(";

                //Battle Module
                while((playerhealth>=0)&&(mobhealth>=0)){
                    //Stat Sheet:
                    cout << "\n\n\t[PLAYER DETAILS:]\n\t HP : " << playerhealth << " ATK : " << atk;
                    cout << "\n\n\t[ENEMY DETAILS:]\n\t HP : " << mobhealth << " ATK : " << mobatk;

                    //Player's turn
                    cout << "\n\n\t[PRESS 1 TO ATTACK PRESS 2 TO INTIMIDATE]\n\tENTER NUMBER : ";
                    decisionmaker=0;
                    cin >> decisionmaker;
                    if (decisionmaker==1)
                    {
                        cout<<"\n\n\tYou attack the goblin!";
                        mobhealth=mobhealth-atk;
                    }
                    if (decisionmaker==2)
                    {
                        cout<<"\n\n\tYou intimidate the goblin! His ATK drops down by 1.";
                        mobatk--;
                    }

                    //Goblin's Turn
                    cout << "\n\n\tThe goblin attacks you with his fists! You take 4 damage.";
                    playerhealth=playerhealth-mobatk;
                }
                if (playerhealth<=0)
                {
                    cout << "\n\n\tYou died!";
                    goto loser;
                }
                else if (mobhealth<=0)
                {
                    cout << "\n\n\tYou killed the goblin! You proceed to the next room where\n\tyou find treasure!";
                    cout << "\n                            _.--.";
                    cout << "\n                        _.-'_:-'||";
                    cout << "\n                    _.-'_.-::::'||";
                    cout << "\n               _.-:'_.-::::::'  ||";
                    cout << "\n             .'`-.-:::::::'     ||";
                    cout << "\n            /.'`;|:::::::'      ||_";
                    cout << "\n           ||   ||::::::'     _.;._'-._";
                    cout << "\n           ||   ||:::::'  _.-!oo @.!-._'-.";
                    cout << "\n           \\'.  ||:::::.-!()oo @!()@.-'_.|";
                    cout << "\n            '.'-;|:.-'.&$@.& ()$ -'o.'\\U||";
                    cout << "\n              `>'-.!@%()@'@_%-'_.-o _.|'||";
                    cout << "\n               ||-._'-.@.-'_.-' _.-o  |'||";
                    cout << "\n               ||=[ '-._.-\\U/.-'    o |'||";
                    cout << "\n               || '-.]=|| |'|      o  |'||";
                    cout << "\n               ||      || |'|        _| ';";
                    cout << "\n               ||      || |'|    _.-'_.-'";
                    cout << "\n               |'-._   || |'|_.-'_.-'";
                    cout << "\n                '-._'-.|| |' `_.-'";
                    cout << "\n                    '-.||_/.-'";
                    cout << "\n\n\n\t---------YOU WIN !-----------";
                    return 0;
                }
                
                
            }
            
            //Right Entrance
            else if(decisionmaker==2){
                //Caterpillar Encounter
                mobhealth=100;
                mobatk=3;
                int love=0;
                
                cout << "\n\n\tYou open the right door and enter the room. You encounter a giant caterpillar!";
                cout<<"\n                           .    .";
                cout<<"\n                           )  (";
                cout<<"\n      _ _ _ _ _ _ _ _ _ _ _(.--.)";
                cout<<"\n    {{ { { { { { { { { { { ( '_')";
                cout<<"\n     >>>>>>>>>>>>>>>>>>>>>>>`--'>";

                //Battle Module
                while((playerhealth>=0)&&(mobhealth>=0)){
                    //Stat Sheet:
                    cout << "\n\n\t[PLAYER DETAILS:]\n\t HP : " << playerhealth << " ATK : " << atk;
                    cout << "\n\n\t[ENEMY DETAILS:]\n\t HP : " << mobhealth << " ATK : " << mobatk;

                    //Player's turn
                    cout << "\n\n\t[PRESS 1 TO ATTACK PRESS 2 TO PET]\n\tENTER NUMBER : ";
                    decisionmaker=0;
                    cin >> decisionmaker;
                    if (decisionmaker==1)
                    {
                        cout<<"\n\n\tYou attack the caterpillar!";
                        mobhealth=mobhealth-atk;
                    }
                    if (decisionmaker==2)
                    {
                        cout<<"\n\n\tYou pet the caterpillar!";
                        love++;
                        if (love==1)
                        {
                            cout << "\n\tThe caterpillar snaps at you!";
                        }
                        if (love==2)
                        {
                            cout << "\n\tThe caterpillar seems to become a bit more friendly!";
                        }
                        if (love==3)
                        {
                            cout << "\n\tThe caterpillar is no longer aggressive towards you! It becomes your\n\tfriend and lets you move on to the next room, where you find a hoard\n\tof treasure!";
                            cout << "\n                            _.--.";
                            cout << "\n                        _.-'_:-'||";
                            cout << "\n                    _.-'_.-::::'||";
                            cout << "\n               _.-:'_.-::::::'  ||";
                            cout << "\n             .'`-.-:::::::'     ||";
                            cout << "\n            /.'`;|:::::::'      ||_";
                            cout << "\n           ||   ||::::::'     _.;._'-._";
                            cout << "\n           ||   ||:::::'  _.-!oo @.!-._'-.";
                            cout << "\n           \\'.  ||:::::.-!()oo @!()@.-'_.|";
                            cout << "\n            '.'-;|:.-'.&$@.& ()$ -'o.'\\U||";
                            cout << "\n              `>'-.!@%()@'@_%-'_.-o _.|'||";
                            cout << "\n               ||-._'-.@.-'_.-' _.-o  |'||";
                            cout << "\n               ||=[ '-._.-\\U/.-'    o |'||";
                            cout << "\n               || '-.]=|| |'|      o  |'||";
                            cout << "\n               ||      || |'|        _| ';";
                            cout << "\n               ||      || |'|    _.-'_.-'";
                            cout << "\n               |'-._   || |'|_.-'_.-'";
                            cout << "\n                '-._'-.|| |' `_.-'";
                            cout << "\n                    '-.||_/.-'";
                            cout << "\n\n\n\t---------YOU WIN !-----------";
                            return 0;
                        }
                        
                    }

                    //Caterpillar's Turn
                    cout << "\n\n\tThe caterpillar bites you! You take 3 damage.";
                    playerhealth=playerhealth-mobatk;
                    if (playerhealth<=0)
                    {
                        cout << "\n\n\tYou died!";
                        goto loser;
                    }
                    else if (mobhealth<=0)
                    {
                        cout << "\n\n\tYou killed the caterpillar! You proceed to the next room where\n\tyou find treasure!";
                        cout << "\n                            _.--.";
                        cout << "\n                        _.-'_:-'||";
                        cout << "\n                    _.-'_.-::::'||";
                        cout << "\n               _.-:'_.-::::::'  ||";
                        cout << "\n             .'`-.-:::::::'     ||";
                        cout << "\n            /.'`;|:::::::'      ||_";
                        cout << "\n           ||   ||::::::'     _.;._'-._";
                        cout << "\n           ||   ||:::::'  _.-!oo @.!-._'-.";
                        cout << "\n           \\'.  ||:::::.-!()oo @!()@.-'_.|";
                        cout << "\n            '.'-;|:.-'.&$@.& ()$ -'o.'\\U||";
                        cout << "\n              `>'-.!@%()@'@_%-'_.-o _.|'||";
                        cout << "\n               ||-._'-.@.-'_.-' _.-o  |'||";
                        cout << "\n               ||=[ '-._.-\\U/.-'    o |'||";
                        cout << "\n               || '-.]=|| |'|      o  |'||";
                        cout << "\n               ||      || |'|        _| ';";
                        cout << "\n               ||      || |'|    _.-'_.-'";
                        cout << "\n               |'-._   || |'|_.-'_.-'";
                        cout << "\n                '-._'-.|| |' `_.-'";
                        cout << "\n                    '-.||_/.-'";
                        cout << "\n\n\n\t---------YOU WIN !-----------";
                        return 0;
                    }
                }
            }

    }
    return 0;
}




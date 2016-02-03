/* 
    File:   main.cpp
    Author: Jenny Nguyen
    Created on January 28, 2016, 10:24 AM
    Purpose: project
 */

//system libraries
#include <iostream> //I/O
#include <ctime>    //time to set the random number seed
#include <cstdlib>  //srand and rand function
#include <iomanip>  //Formatting
#include <fstream>  //file I/O

using namespace std;

//User Libraries 

//Global Libraries 

//Function Prototypes 
void win();
void lose();
//Execution Begins Here

int main(int argc, char** argv) {
//Set the random number
srand(static_cast<unsigned int>(time(0)));

//Declare and initialize variables
bool game=true;             //Quit game when false
string player;              //Player's name
int optionD,optionT,optionS;//Player's choice:D-Dog,T-Town,S-Outside
int optionF,optionC;        //Player's choice:F-Fight,C-Castle
int playHP=30,dmg=5;        //Player's Health Points and damage
float karma=0;              //player's karma(determines Good/Bad events)
int gems=0;                 //Player's total gems
unsigned short start;

do{
//Intro 
cout<<"Enter 1 to Begin the Game."<<endl;
cout<<"Enter any other key to Quit."<<endl;
cin>>start;

switch(start){
case 1:{
    //Ask for player's name
    cout<<"What is your name?"<<endl;
    cin>>player;
    //Intro
    cout<<endl<<"Welcome to NeoQuest, "<<player<<"!"<<endl<<
    "Your Quest will be to collect 30 Gems and"<<endl<<
    "deliver them to the King. There are several"<<endl<<
    "ways you can get Gems around here."<<endl<<"You can "
    "fight monsters, explore the forest, etc..."<<endl<<"Remember,"
    " good deeds are rewarded well."<<endl;
    cout<<"Be careful though! If your Health Points"<<endl;
    cout<<"reaches 0. You would die."<<endl;
    cout<<"Be careful and good luck!"<<endl;
    
    do{
    //Town actions
    cout<<endl<<"You are currently in Neopia."<<endl;
    cout<<"What would you like to do?"<<endl;
    cout<<"1 : Go into the Forest."<<endl;
    cout<<"2 : Go to the Castle."<<endl;
    cin>>optionT;

switch(optionT){
    case 1: {
    do{
    cout<<endl<<"You are in the Forest."<<endl;
    cout<<"What would you like to do?"<<endl;
    cout<<"1 : Look for Monsters."<<endl;
    cout<<"2 : Explore the forest."<<endl;
    cout<<"3 : Return to town."<<endl;
    cin>>optionS;
    switch(optionS){
        case 1:{ 
            //Spider Monster 1
            int spdrHP=10,SPdmg=2;            //SpiderHealthPoint&Damage
            cout<<endl<<"You found a Spider Warrior!"<<endl;
        do{
            cout<<"1 : Attack."<<endl;
            cout<<"2 : Check Monster Info."<<endl;
            cout<<"3 : Do Nothing."<<endl;
            cout<<"4 : Run away."<<endl;
            cin>>optionF;
                switch(optionF){
                case 1: {
                    cout<<"You attack the Spider Warrior for"
                            " "<<dmg<<" damage!"<<endl;
                    spdrHP-=dmg;
                    cout<<"It hisses and bites you for "
                            <<SPdmg<<" damage!"<<endl;
                    playHP-=SPdmg;
                    cout<<"Your Health Points : "<<playHP<<"."<<endl;
                    break;
                }
                case 2: {
                    cout<<"Spider Warrior."<<endl;
                    cout<<"10 Health Point||2 Attack Damage."<<endl;
                    cout<<"Trap Ability: Its sticky web leaves "
                            "no chance of escaping!"<<endl;
                    break;
                }
                case 3: {
                    cout<<"Nothing happened."<<endl;
                    cout<<"Your Health Points : "<<playHP<<"."<<endl;
                    break;
                }
                case 4:{
                    cout<<"You were unable to run away!"<<endl;
                    cout<<"The Spider Warrior attacks you for"
                            " "<<SPdmg<<" damage!"<<endl;
                    playHP-=SPdmg;
                    cout<<"Your Health Points : "<<playHP<<"."<<endl;
                    break;
                }
                }
            }while(spdrHP>0&&playHP>0);
            if(spdrHP<=0&&playHP>0){
            cout<<"You defeated the Spider Warrior."<<endl;
            cout<<"+ 3 Gem(s)."<<endl;
            gems+=3;
            cout<<"You have "<<gems<<" Gem(s)."<<endl;
            }else if(spdrHP>0&&playHP<=0){
                cout<<"You Died."<<endl;
                lose();
                return 0;
            }else if(playHP<=0){
                cout<<"You Died."<<endl;
                lose();
                return 0;
            }
            break;
        }
        case 2:{
            int randEV=rand()%3+1;      //Random Event 
            int gemspls=rand()%10+1;    //gain/lose gems 1-10
            
            if(randEV==1){
            cout<<"You explored the forest for a few hours."<<endl;
            cout<<"You were not able to find anything of value."<<endl;
            }
            else if (randEV==2){
                cout<<"A random fairy blesses you."<<endl;
                cout<<"You feel a little lighter!"<<endl;
                playHP+=1;
                karma+=0.2;
                if(playHP<30){
                    cout<<" + 1 Health Points."<<endl;
                    cout<<"Your Health Points : "<<playHP<<"."<<endl;
                }
                        if(playHP>30){
                            playHP=30;
                        }
                
            }
            else if(randEV==3){
            //sleeping dog event
            cout<<endl<<"You come across a sleeping Dog."<<endl;
            cout<<"It is guarding an open chest filled with gems."<<endl;
            cout<<"1 : Quietly take the item and run away."<<endl;
            cout<<"2 : Leave the Dog and chest alone and continue "
                    "on your way."<<endl<<endl;
            cin>>optionD;
                if(optionD==1){
                    if (karma>5){
                        cout<<"You manage to grab a few gems with no problems"
                            <<endl<<"at all and before making a quiet escape."
                            <<endl<<"You feel bad for stealing."<<endl;
                            cout<<"+ "<<gemspls<<" Gem(s)."<<endl;
                            gems+=gemspls;
                            karma-=1;
                            cout<<"You have "<<gems<<" Gem(s)."<<endl;
                    }
                    else if (karma<0){
                        cout<<"As you were quietly walking towards the chest,"
                                <<endl<<"you have the sudden urge to sneeze. "
                                "Unfortunately,"<<endl<<"you sneezed and the "
                                "awakens the sleeping Dog."<<endl<<"It beings "
                                "to growls at you and you decide to run away."
                                <<endl<<"In panic, you dropped a few things "
                                "while you were running away."<<endl;
                            gems-=gemspls;
                            karma-=1;
                            if (gems<0){
                                gems=0;
                            }
                            cout<<"You have "<<gems<<" Gem(s)."<<endl;

                    }
                    else{     
                        cout<<"As you were quietly walking towards "
                            "the chest,"<<endl<<"you get a sudden urge "
                            "to sneeze. Fortunately,"<<endl<<"you were "
                            "able to resist the urge and manage to grab"
                            <<endl<<"a Gem before making your "
                            "escape."<<endl<<"+ 1 Gem."<<endl;
                            gems+=1;
                            karma-=1;
                            cout<<"You have "<<gems<<" Gem(s)."<<endl;
                    }
                }
                    if(optionD==2){
                        cout<<"You decide to leave the sleeping dog "<<endl;
                        cout<<"alone and continue on your path."<<endl;
                        karma+=0.5;
                    }
            }
        break;
        }
        case 3:{
            cout<<"You returned to town."<<endl;
            break;
        }
        }
    }while(optionS!=3);
    break;
}
    case 2:{
        cout<<endl<<"You walked to the Castle."<<endl;
        do{
            cout<<"1 : Talk to the King."<<endl;
            cout<<"2 : Leave the Castle."<<endl;
        cin>>optionC;
        switch(optionC){
            case 1:{
                cout<<"Hello "<<player<<"!"<<endl;
                cout<<"Let me see how many Gems you have!"<<endl<<endl;
                if(gems>=30){
                    cout<<"Nicely done, you have completed your task!"<<endl;
                    win();
                    return 0;
                }else{
                    cout<<"Unfortunately, that is not enough Gem(s)."<<endl<<
                    "You need will need "<<30-gems<<" more Gem(s)."<<endl<<
                    "Please come back when you have "<<endl<<
                            "collected some more Gem(s)."<<endl;
                }
            break;
            }
            case 2:{
                cout<<"You left the castle."<<endl;
                break;
            }
            }
        }while(optionC!=2);
    }
}
}while(optionT!=3);
    default:{
            cout<<"Exiting Game"<<endl;
            game=false;
        }
    }
}
}while(game);
    //Exit stage right

    return 0;
    }
void win(){
    cout<<"Congratulations!"<<endl;
    cout<<"You Won!"<<endl;
    return;
}
void lose(){
    cout<<"Sorry!"<<endl;
    cout<<"Better luck next time."<<endl;
}
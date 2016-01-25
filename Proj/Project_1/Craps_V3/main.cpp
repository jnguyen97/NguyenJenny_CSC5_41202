/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 25, 2016, 10:10 AM
     Purpose: Testing throwing dice
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //srand and rand function
#include <ctime>    //time to set the random number seed
#include <fstream>  //file I/O
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare and initialize variables
    unsigned short wins=0,losses=0,games;
    ofstream out;
    
    //Open the file
    out.open("CardGame.dat");
    
    //Input data
    cout<<"How many games of Craps would you like to play"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    while(games<10000||games>40000){
        cout<<"How many games of Craps would you like to play"<<endl;
        cout<<"Utilize a number between 10,000 and 40,000"<<endl;
        cin>>games;
    }
    //Throw the dice 
    for(int game=1;game<=games;game++){
        char die1=rand()%6+1;  //Number between[1/6]
        char die2=rand()%6+1;  //Number between[1/6]
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12)losses++;
        else if(sum==7||sum==11)wins++;
        else{
            //roll again
            bool kpRoll=true;
            do{
                die1=rand()%6+1;  //Number between[1/6]
                die2=rand()%6+1;  //Number between[1/6]
                char sum2=die1+die2;
                switch(sum2==7){
                    case true:{losses++;kpRoll=false;}
                    default:
                        if(sum==sum2){wins++;kpRoll=false;}
                }
            }while(kpRoll);
        }
    }    
        
    //Output the results to the screen
    cout<<"Out of "<<games<<" games played."<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games."<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"You won "<<wins*100.0f/games<<"% games and "<<endl;
    cout<<"You lost "<<losses*100.0f/games<<"% games."<<endl;
    
    //Output the results to a file
    out<<"Out of "<<games<<" games played."<<endl;
    out<<"You won "<<wins<<" games and "<<endl;
    out<<"You lost "<<losses<<" games."<<endl;
    out<<"Your wins and losses total = "<<wins+losses<<endl;
    out<<"Percentage wise"<<endl;
    out<<"You won "<<wins*100.0f/games<<"% games and "<<endl;
    out<<"You lost "<<losses*100.0f/games<<"% games."<<endl;
    
    //Exit stage right
    out.close();
    return 0;
}


/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 20, 2016, 8:54 AM
     Purpose: Play paper-rock-scissors with the computer
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Solution to Savitch 7thEd Chap 3 Prob 1"<<endl;
    cout<<endl<<"The Rock-Paper-Scissor Game"<<endl<<endl;
            
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));     
    
    //Declare and initialize variables 
    char computr; //The computer's play
    char player;  //The player's move
    
    //Input the player's turn
    do{
        cout<<"What is your move P, R, S?"<<endl;
        cin>>player;
        player=toupper(player);
    }while(!(player=='P'||player=='R'||player=='S'));
        
    //Computer Generated Play
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
    
    //Output the results
    cout<<"The Computer played : "<<computr<<endl;
    cout<<"The Player's move   : "<<player<<endl;
    
    //Exit stage right
    return 0;
}


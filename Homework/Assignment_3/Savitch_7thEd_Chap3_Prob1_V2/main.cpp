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
            
    //set random number seed and declare the question
    srand(static_cast<unsigned int>(time(0)));     
    char qwstion; //Question, does player want to play again?
    
    //Loop until player wants to quit
    do{
        //Declare and initialize variables 
        char computr; //The computer's play
        char player;  //The player's move

        //Input the player's turn
        do{
            cout<<"What is your move P, R, S? (｡◕‿‿◕｡)"<<endl;
            cin>>player;
            player=toupper(player);
        }while(!(player=='P'||player=='R'||player=='S'));

        //Computer Generated Play
        do{
            computr=rand()%4+80;
        }while(computr=='Q');

        //Output the moves by the computer and player :)
        cout<<endl<<"Computer played : "<<computr<<endl;
        cout<<"You played      : "<<player<<endl<<endl;

        //Determine the result
        if(computr==player){
            cout<<"Tie! No one wins! ƪ(˘‿˘)ʃ "<<endl;
        }else if(player=='P'&&computr=='R'){
            cout<<"You Won! Good job! (ﾉ ◕‿◕)ﾉ*:･ﾟ✧"<<endl;
        }else if(player=='R'&&computr=='S'){
            cout<<"You Won! Awesome! ~(˘▾˘~)"<<endl;
        }else if(player=='S'&&computr=='P'){
            cout<<"You Won! Nice! (づ｡◕‿‿◕｡)づ"<<endl;
        }else{
            cout<<"You lost! ｡゜(; ^ ;)゜｡"<<endl;
        }

        //Keep playing?
        cout<<endl<<"Would you like to play around round? (｡◕ ‿ ◕｡)"<<endl;
        cin>>qwstion;
    }while(toupper(qwstion)=='Y');
    
    //Exit stage right
    return 0;
}


/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 19, 2016, 8:35 AM
     Purpose: Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn; //Problem Solution to display
    bool reDsply=true;     //Exit Program when false
    
    //Menu to Display Solution
    do{
         //Input data
        cout<<endl<<"Assignment 3 Problem Set"<<endl;
        cout<<"Type 1 to Display Savitch 8th Chap3 Prob10"<<endl;
        cout<<"Type 2 to Display Savitch 8th Chap3 Prob11"<<endl;
        cout<<"Type 3 to Display Savitch 7th Chap3 Prob 1"<<endl;
        cout<<"Type 4 to Display Problem"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8th Chap3 Prob10"<<endl;
                cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
                //Declare variables
                unsigned int fi, fim1, fim2;//Designations in the sequence
                unsigned short nTerms;      //Number of terms in the sequence
                unsigned short counter;     //Current position in the sequence
                const char DEREPRO=5;          //Days to reproduce
                float crudWt;               //Weight of Crud
                unsigned int nDays;         //Number of Days to grow crud
                //Initialize the sequence
                fim2=fim1=1;                 //Start the sequence
                counter=2;                   //Initialize the counter
                //Input the number of terms in the sequence
                cout<<"Input the initial weight of the crud in pounds."<<endl;
                cin>>crudWt;
                cout<<"How many days will the crud be allowed to grow?"<<endl;
                cin>>nDays;
                //Calculate the number of terms
                nTerms=nDays/DEREPRO+1;
                //Output or calculate the output required
                if(nTerms==1){
                    cout<<"After "<<nDays<<" days, the crud weighs "<<fim2*crudWt
                            <<"(lbs)"<<endl<<endl;
                }else if(nTerms==2){
                    cout<<"After "<<nDays<<" days, the crud weighs "<<fim1*crudWt
                            <<"(lbs)"<<endl<<endl;
                }else{
                    do{
                        fi=fim1+fim2;
                        counter++;
                        fim2=fim1;
                        fim1=fi;
                    }while(counter<nTerms);
                     cout<<"After "<<nDays<<" days, the crud weighs "<<fi*crudWt
                            <<"(lbs)."<<endl<<endl;
                }
                    break;
                }
            case 2:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8th Chap3 Prob11"<<endl;
                cout<<endl<<"The finite sum of e^x"<<endl<<endl;
                //Declare and initialize variables for etox
                const unsigned char nTerms=13;
                float etox=1,x;           //E^x

                //Input the value x
                cout<<"Input x of e^x computation"<<endl;
                cin>>x;

                //Calculate e^x
                for(int n=1;n<=nTerms;n++){
                    //Declare and initialize variables
                    unsigned int factN=1; //N and N

                    //Calculate or map inputs to outputs
                    for(int i=1;i<=n;i++){
                        factN*=i;
                    }
                    //Calculate e^x with the above factorial
                    etox+=pow(x,n)/factN;
                }
                    //Output the results
                cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
                cout<<"The approximate value of e^"<<x<<"="<<etox<<endl;
                    break;
                }
            case 3:{
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
                    cout<<endl<<"Would you like to play around round?(｡◕ ‿ ◕｡)"<<endl;
                    cout<<"(Press Y to play or press any other key to quit.)"<<endl;
                    cin>>qwstion;
                }while(toupper(qwstion)=='Y');
    
                    break;
                }
            case 4:{
                //The problem to solve
                cout<<endl<<"Solution to Problem"<<endl;
                cout<<endl<<"The"<<endl<<endl;
                
                    break;
            }
                default:{
                    cout<<"Exiting the Program"<<endl;
                    reDsply=false;
            }
        }
    }while(reDsply);
    //Calculate or map inputs to outputs
    
    //Exit stage right
    return 0;
}


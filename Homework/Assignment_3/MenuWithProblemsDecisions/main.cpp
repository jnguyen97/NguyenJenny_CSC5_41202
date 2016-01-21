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
        cout<<"Type 1 to Display Savitch 8Ed Chap3 Prob 10"<<endl;
        cout<<"Type 2 to Display Savitch 8Ed Chap3 Prob 11"<<endl;
        cout<<"Type 3 to Display Savitch 7Ed Chap3 Prob 1"<<endl;
        cout<<"Type 4 to Display Savitch 9Ed Chap3 Prog Proj 3"<<endl;
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
                        cout<<"What is your move P, R, S? =D "<<endl;
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
                        cout<<"Tie! No one wins! O: "<<endl;
                    }else if(player=='P'&&computr=='R'){
                        cout<<"You Won! Good job! =D"<<endl;
                    }else if(player=='R'&&computr=='S'){
                        cout<<"You Won! Awesome! ^_^"<<endl;
                    }else if(player=='S'&&computr=='P'){
                        cout<<"You Won! Nice! :)"<<endl;
                    }else{
                        cout<<"You lost! =("<<endl;
                    }

                    //Keep playing?
                    cout<<endl<<"Would you like to play around round? =)"<<endl;
                    cout<<"(Press Y to play or press any other key to quit.)"<<endl;
                    cin>>qwstion;
                }while(toupper(qwstion)=='Y');
    
                    break;
                }
            case 4:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 9thEd Chap 3 Prog Proj3"<<endl;
                cout<<endl<<"The Roman Numeral Conversion Program"<<endl<<endl;

                //set random number seed
                srand(static_cast<unsigned int>(time(0)));     

                //Declare and initialize variables 
                unsigned short number=rand()%2001+1000;  //[1000,3000]
                unsigned char  n1000s,n100s,n10s,n1s;    //Number of 10^x
                cout<<"The number to convert = "<<number<<endl;

                //Calculate the number of 1000's, 100's, 10's, 1's
                n1000s=(number-number%1000)/1000; //Number of 1000's
                number=(number-n1000s*1000);      //Subtract off 1000's
                n100s=(number-number%100)/100;    //Number of 100's
                number=(number-n100s*100);        //Subtract off 100's
                n10s=(number-number%10)/10;       //Number of 10's
                n1s=(number-n10s*10);             //Subtract off 10's to get 1's

                //Output the number and its components
                cout<<"The number of 1000's  = "<<static_cast<int>(n1000s)<<endl;
                cout<<"The number of 100's   = "<<static_cast<int>(n100s)<<endl;
                cout<<"The number of 10's    = "<<static_cast<int>(n10s)<<endl;
                cout<<"The number of 1's     = "<<static_cast<int>(n1s)<<endl;

                cout<<"The Roman Numeral Equivalent = ";

                //Output the 1000's
                switch(n1000s){
                    case 3: cout<<"M";
                    case 2: cout<<"M";
                    case 1: cout<<"M";
                }
                //Output the 100's
                switch(n100s){
                    case 9: cout<<"CM";break;
                    case 8: cout<<"DCCC";break;
                    case 7: cout<<"DCC";break;
                    case 6: cout<<"DC";break;
                    case 5: cout<<"D";break;
                    case 4: cout<<"CD";break;
                    case 3: cout<<"C";
                    case 2: cout<<"C";
                    case 1: cout<<"C";
                }//Output the 100's
                switch(n10s){
                    case 9: cout<<"XC";break;
                    case 8: cout<<"LXXX";break;
                    case 7: cout<<"LXX";break;
                    case 6: cout<<"LX";break;
                    case 5: cout<<"L";break;
                    case 4: cout<<"XL";break;
                    case 3: cout<<"X";
                    case 2: cout<<"X";
                    case 1: cout<<"X";
                }
                //Output the 1's
                switch(n1s){
                    case 9: cout<<"IX";break;
                    case 8: cout<<"VIII";break;
                    case 7: cout<<"VII";break;
                    case 6: cout<<"VI";break;
                    case 5: cout<<"V";break;
                    case 4: cout<<"IV";break;
                    case 3: cout<<"III";break;
                    case 2: cout<<"II";break;
                    case 1: cout<<"I";break;
                }
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


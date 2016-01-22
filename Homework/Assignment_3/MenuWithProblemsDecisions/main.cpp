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
const float PI=4*atan(1);

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
        cout<<"Type 1  to Display Problem 1"<<endl; //Fibonacci Sequence
        cout<<"Type 2  to Display Problem 2"<<endl; //Finite Sum of e^x
        cout<<"Type 3  to Display Problem 3"<<endl; //Rock Paper Scissors
        cout<<"Type 4  to Display Problem 4"<<endl; //Roman Numeral Conversion
        cout<<"Type 5  to Display Problem 5"<<endl; //Buoyancy
        cout<<"Type 6  to Display Problem 6"<<endl; //Fahrenheit and Celsius
        cout<<"Type 7  to Display Problem 7"<<endl; //Approximate Pi
        cout<<"Type 8  to Display Problem 8"<<endl; //Prime Numbers
        cout<<"Type 9  to Display Problem 9"<<endl; //Horoscopes
        cout<<"Type 10 to Display Problem 10"<<endl; //Elements
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
                const char DEREPRO=5;       //Days to reproduce
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

                //Declare and initialize variables 
                unsigned short number;  //
                unsigned char  n1000s,n100s,n10s,n1s;    //Number of 10^x
                cout<<"Enter the number from 0 to 3000."<<endl;
                cin>>number;
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
                }cout<<endl;
                    break;
            }
            case 5:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob6"<<endl;
                cout<<endl<<"Archimedes' principle : Buoyancy"<<endl;

                //declare and initialize variables
                float weight;    // weight of sphere in pounds
                float radius;    // radius of sphere in feet
                float volume;    // volume of sphere
                float buoy;      // buoyancy
                float y = 62.4;  // specific weight of water
                const float PI = 3.1415927;

               //input the weight and radius of the sphere
                cout<<endl<<"Enter the weight of the sphere in pounds."<<endl;
                cin>>weight;
                cout<<endl<<"Enter the radius of the sphere in feet"<<endl;
                cin>>radius;

                //calculations for volume 
                volume=(4.0f/3.0f)*PI*(radius*radius*radius);
                
                //calculate buoyant force
                buoy=volume*y;

                //output if it will float or sink
                if (buoy>=weight){   
                    cout<<endl<<"The sphere will float!"<<endl;
                }else {
                    cout<<endl<<"The sphere will sink!"<<endl;
                }
                break;
            }   
            case 6:{
                 //The problem to solve
                cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob7"<<endl;
                cout<<endl<<"Fahrenheit and Celsius"<<endl;

                //declare and initialize variables
                int frnht;     //Fahrenheit
                int celsius=100;   //Celsius

                //loop until they are the same value
               do{
                    celsius--;
                    frnht=(9.0f*celsius/5.0f)+32;   
                }while (frnht!=celsius);        

                //Output the results
                cout<<endl<<"When it is "<<frnht<<" degrees Fahrenheit,"<<endl;
                cout<<"it is also "<<celsius<<" degrees in Celsius."<<endl;
                break;
            }
            case 7:{
                 //The problem to solve
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob12"<<endl;
                cout<<endl<<"The finite sum for PI"<<endl<<endl;

                //Declare and initialize variables for apprxPI
                float apprxPI=1;     //Approximate value of PI to start
                unsigned int nTerms; //Number of times to limit sum of PI
                char sign=-1;        //Alternating sign of the PI sequence

                //Input the number of terms in the sequence
                cout<<"Input number of Terms to approximate PI."<<endl;
                cin>>nTerms;

                 //Approximate PI/4
                for(int i=2,j=3;i<=nTerms;i++,j+=2){
                    apprxPI+=(sign/static_cast<float>(j));
                    sign*=-1;
                }
                apprxPI*=4;//Multiply by 4 once to approximate PI

                //Output the results
                cout<<endl<<"The exact value of PI = "<<PI<<endl<<endl;
                cout<<"The number of terms it took to approx PI = "<<nTerms<<endl<<endl;
                cout<<"The approx value of PI = "<<apprxPI<<endl;
                break;
            }
            case 8:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob5"<<endl;
                cout<<endl<<"Prime Numbers from 3 - 100"<<endl<<endl;

                //declare and initialize variables
                int i;    
                int prime=3; 
                int number=2; 

                //Output the results
                while (prime<=100){   
                    for(int i=2;i<=prime;i++){
                        number=i;
                        if(number==prime){          
                        cout<<prime<<endl;
                        }
                        else if(prime%number==0){ 
                        i+=prime;  
                        }
                    }
                    ++prime;
                } 
                break;
            }
            case 9:{
                 //The problem to solve
                cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob3"<<endl;
                cout<<endl<<"Horoscopes"<<endl<<endl;

                //declare and initialize variables
                int month;   //birth month of user 
                int day;     //birth day of user
                char answer; //question if user wants to repeat

                //loop
                do{
                    cout<<"Enter the month you were born in.(1-12)"<<endl;
                    cin>>month;
                    cout<<"Enter the day you were born.(1-31)"<<endl;
                    cin>>day;
                    if (day>31||month>12){
                    cout<<"Please enter a valid day or month"<<endl;
                    } 
                    else if (month==3&&day>=21||month==4&&day<=19){
                        cout<<"You are an Aries."<<endl; //March 21–April 19
                        if (day<=22&&day>=19){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }else if (month==4&&day>=17){
                            cout<<"Your birthday is on a cusp."<<endl;
                     }
                    }else if (month==4&&day>=20||month==5&&day<=20){
                        cout<<"You are a Taurus."<<endl;   //April 20–May 20
                        if (day<=21&&day>=19){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==5&&day>=21||month==6&&day<=21){
                        cout<<"You are a Gemini."<<endl;  //May 21–June 21 
                        if (day<=22&&day>=20){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==6&&day>=22||month==7&&day<=22){
                        cout<<"You are a Cancer."<<endl;  //June 22–July 22
                        if (day<=23&&day>=21){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }  
                    }else if (month==7&&day>=23||month==8&&day<=22){
                        cout<<"You are a Leo."<<endl;    //July 23–August 22 
                        if (day<=24&&day>=21){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==8&&day>=23||month==9&&day<=22){
                        cout<<"You are a Virgo."<<endl;    //August 23–September 22
                        if (day<=24&&day>=21){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==9&&day>=23||month==10&&day<=22){
                        cout<<"You are a Libra."<<endl;    //September 23–October 22
                        if (day<=24&&day>=21){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==10&&day>=23||month==11&&day<=21){
                        cout<<"You are a Scorpio."<<endl;   //October 23–November 21 
                        if (day<=24&&day>=22){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }else if (month==11&&day>=19){
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==11&&day>=22||month==12&&day<=21){
                        cout<<"You are a Sagittarius."<<endl; //November 22–December 21
                        if (day<=23&&day>=20){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==12&&day>=22||month==1&&day<=19){
                        cout<<"You are a Capricorn."<<endl;   //December 22–January 19
                        if (day<=23&&day>=20){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }else if (month==1&&day>=17){
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==1&&day>=20||month==2&&day<=18){  
                        cout<<"You are a Aquarius."<<endl;    //for January 20–February 18
                        if (day<=21&&day>18){          
                            cout<<"Your birthday is on a cusp."<<endl;
                        }else if (month==2&&day>=16){
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==2&&day>=19||month==3&&day<=20){
                        cout<<"You are a Pisces."<<endl;      //February 19–March 20
                        if (day<=21&&day>=18){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else { 
                        cout<<"Please enter a valid day"<<endl;
                    }   
                    //if the user would like to repeat
                    cout<<endl<<"Do you want to check another birthday?"<<endl;
                    cout<<"Press Y to check again or any other key to quit."<<endl;
                    cin>>answer;
                }while(toupper(answer)=='Y');
                break;
            }
            case 10:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob3"<<endl;
                cout<<endl<<"Horoscopes"<<endl<<endl;

                //declare and initialize variables
                int month;   //birth month of user 
                int day;     //birth day of user
                char answer; //question if user wants to repeat

                //loop
                do{
                    cout<<"Enter the month you were born in.(1-12)"<<endl;
                    cin>>month;
                    cout<<"Enter the day you were born.(1-31)"<<endl;
                    cin>>day;
                    if (day>31||month>12){
                    cout<<"Please enter a valid day or month"<<endl;
                    } 
                    else if (month==3&&day>=21||month==4&&day<=19){
                        cout<<"You are an Aries."<<endl; //March 21–April 19
                        cout<<"Your element is Fire."<<endl;
                        cout<<"You are most compatible with other "
                                "Aries, Leo, Sagittarius."<<endl;
                        if (day<=22&&day>=19){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }else if (month==4&&day>=17){
                            cout<<"Your birthday is on a cusp."<<endl;
                     }
                    }else if (month==4&&day>=20||month==5&&day<=20){
                        cout<<"You are a Taurus."<<endl;   //April 20–May 20
                        cout<<"Your element is Earth."<<endl;
                        cout<<"You are most compatible with other "
                                "Taurus, Virgo, Capricorn."<<endl;
                        if (day<=21&&day>=19){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==5&&day>=21||month==6&&day<=21){
                        cout<<"You are a Gemini."<<endl;  //May 21–June 21 
                        cout<<"Your element is Air."<<endl;
                        cout<<"You are most compatible with other "
                                "Gemini, Libra, Aquarius."<<endl;
                        if (day<=22&&day>=20){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==6&&day>=22||month==7&&day<=22){
                        cout<<"You are a Cancer."<<endl;  //June 22–July 22
                        cout<<"Your element is Water."<<endl;
                        cout<<"You are most compatible with other "
                                "Cancer, Scorpio, Pisces."<<endl;
                        if (day<=23&&day>=21){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }  
                    }else if (month==7&&day>=23||month==8&&day<=22){
                        cout<<"You are a Leo."<<endl;    //July 23–August 22 
                        cout<<"Your element is Fire."<<endl;
                        cout<<"You are most compatible with other "
                                "Leo, Aries, Sagittarius."<<endl;
                        if (day<=24&&day>=21){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==8&&day>=23||month==9&&day<=22){
                        cout<<"You are a Virgo."<<endl;    //August 23–September 22
                        cout<<"Your element is Earth."<<endl;
                        cout<<"You are most compatible with other "
                                "Virgo, Taurus Capricorn."<<endl;
                        if (day<=24&&day>=21){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==9&&day>=23||month==10&&day<=22){
                        cout<<"You are a Libra."<<endl;    //September 23–October 22
                        cout<<"Your element is Air."<<endl;
                        cout<<"You are most compatible with other "
                                "Libra, Gemini, Aquarius."<<endl;
                        if (day<=24&&day>=21){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==10&&day>=23||month==11&&day<=21){
                        cout<<"You are a Scorpio."<<endl;   //October 23–November 21 
                        cout<<"Your element is Water."<<endl;
                        cout<<"You are most compatible with other "
                                "Scorpio, Cancer, Pisces."<<endl;
                        if (day<=24&&day>=22){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }else if (month==11&&day>=19){
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==11&&day>=22||month==12&&day<=21){
                        cout<<"You are a Sagittarius."<<endl; //November 22–December 21
                        cout<<"Your element is Fire."<<endl;
                        cout<<"You are most compatible with other "
                                "Scorpio, Cancer, Pisces."<<endl;
                        if (day<=23&&day>=20){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==12&&day>=22||month==1&&day<=19){
                        cout<<"You are a Capricorn."<<endl;   //December 22–January 19
                        cout<<"Your element is Earth."<<endl;
                        cout<<"You are most compatible with other "
                                "Capricorn, Taurus, Virgo."<<endl;
                        if (day<=23&&day>=20){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }else if (month==1&&day>=17){
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==1&&day>=20||month==2&&day<=18){  
                        cout<<"You are a Aquarius."<<endl;    //for January 20–February 18
                        cout<<"Your element is Air."<<endl;
                        cout<<"You are most compatible with other "
                                "Aquarius, Gemini, Libra."<<endl;
                        if (day<=21&&day>18){          
                            cout<<"Your birthday is on a cusp."<<endl;
                        }else if (month==2&&day>=16){
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else if (month==2&&day>=19||month==3&&day<=20){
                        cout<<"You are a Pisces."<<endl;      //February 19–March 20
                        cout<<"Your element is Water."<<endl;
                        cout<<"You are most compatible with other "
                                " Pisces, Scorpio, Cancer."<<endl;
                        if (day<=21&&day>=18){        
                            cout<<"Your birthday is on a cusp."<<endl;
                        }
                    }else { 
                        cout<<"Please enter a valid day"<<endl;
                    }   
                    //if the user would like to repeat
                    cout<<endl<<"Do you want to check another birthday?"<<endl;
                    cout<<"Press Y to check again or any other key to quit."<<endl;
                    cin>>answer;
                }while(toupper(answer)=='Y');
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


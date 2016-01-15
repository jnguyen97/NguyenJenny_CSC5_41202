/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 14, 2016, 6:18 PM
     Purpose: Total test grade
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
        float score;    //score received on exercise
        float total;    //total points possible
        float scoreT;   //total score received
        float percent;  
        float totalP;   //total of total score possible?
        int   exernum=1;
        int   exer;     //number of exercise

    //Input data
    cout<<"How many exercises to input?"<<endl;
    cin>>exer;
    cout<<endl;
    
    do {
        cout<<"Please enter the score you received for exercise "<<exernum<<"."<<endl;
        cin>>score;
        cout<<"Please enter total points possible."<<endl;
        cin>>total;
        cout<<endl;
        
        exernum+=1; 
        exer-=1;
        
        totalP+=total;
        scoreT+=score;
        percent=(scoreT/totalP)*100;
        
    }
    while (exer>0);
    cout<<"Your total score is "<<scoreT<<" out of "<<totalP<<","<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;cout<<"which is "<<percent<<"%."<<endl;
    
    //Exit stage right
    return 0;
}


/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 14, 2016, 10:30 PM
     Purpose: Speed of Sound
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   //Declare and initialize variables 
    int   tsrt;    //starting temperature
    int   tstop;   //ending temperature
    float velss;   //velocity       
    //Input data
    cout<<"Enter the starting temperature in Celsius. "<<endl;
    cin>>tsrt;
    cout<<"Enter the ending temperature in Celsius. "<<endl;
    cin>>tstop;            
 
    do 
        {velss=331.3+.61*tsrt; //equation for velocity
        cout<<"At "<<tsrt<<" degrees Celsius, "<<endl;
        cout<<"the velocity of sound is "<<velss<<" m/s."<<endl; //meters per second
        tsrt+=1;            
        cout<<endl;
    }
    while (tstop>=tsrt);  
 
    
    //Exit stage right
    return 0;
}


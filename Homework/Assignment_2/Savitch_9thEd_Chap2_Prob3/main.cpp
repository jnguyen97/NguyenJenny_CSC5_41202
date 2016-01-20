/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 14, 2016, 4:31 AM
     Purpose: Convert MPH to minutes and seconds
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
    int   min; //minutes
    float mph; //miles per hour
    float sec; //seconds
    
    //Input data
    cout<<"Enter amount of miles per hour."<<endl;
    cin>>mph;
    
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    min=1/(mph/60);
    sec=(1/(mph/60)-min)*60; //convert remaining value to seconds
                             //after subtracting min value
    //Output the results
    cout<<"At "<<mph<<" miles per hour,"<<endl;
    cout<<"you are running at "<<min<<" minutes"<<endl;
    cout<<"and "<<sec<<" seconds per mile."<<endl;        
    
    //Exit stage right
    return 0;
}


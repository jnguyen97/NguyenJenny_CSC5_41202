/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 28, 2016, 9:42 AM
     Purpose: Check out IDE
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;
//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float pv=100;   //Present value in dollars $'s
    int iRate=6;    //Interest rate in percent %
    int nComp=12;   //Number of compounding periods in years
    float fv=pv;    //Future value
    
    //Output heading
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<endl<<"Year Savings"<<endl;
    //Calculate and Display a table of results
    for(int year=0;year<=nComp;year++){
        int ifv=(fv+0.005)*PERCENT;     //Shift two places for pennies
        fv=static_cast<float>(ifv)/PERCENT; //Convert back 
        cout<<setw(4)<<year<<setw(8)<<fv<<endl;
        fv*=(1+static_cast<float>(iRate)/PERCENT);     
    }
    
    //The MVC concept separates the view from the model
    //Declare the array and initialize
    
    float balance[nComp+1];
    balance[0]=pv;
 
    //Calculate the array i.e. model
    for(int year=0;year<nComp;year++){
        int ifv=(balance[year]+0.005)*PERCENT;     //Shift two places for pennies
        balance[year]=static_cast<float>(ifv)/PERCENT; //Convert back 
        balance[year+1]=balance[year]*(1+static_cast<float>(iRate)/PERCENT); 
    }
    
    //Display or view of the model
    cout<<endl<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){
        cout<<setw(4)<<year<<setw(8)<<balance[year]<<endl; 
    }
    
    //Exit stage right T^T
    return 0;
}


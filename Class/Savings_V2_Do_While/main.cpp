/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 21, 2016, 11:05 AM
     Purpose: Savings V2
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formating
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Fun look at Savings and rule of 72! "<<endl;
    cout<<endl<<"http://california.municipalbonds.com/bonds/recent"<<endl<<endl;
            
    //Declare and initialize variables 
    float balance=100;                //initial balance $'s
    float intRate=0.05f;              //Interest Rate/Year
    float rule72=0.72f/intRate;       //Rule of 72, Future value = 2*Present value
    float intErnd;                    //Interest Earned
    //Output the Table Heading
    cout<<"The Interest Rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this Interest Principle should double every";
    cout<<rule72<<" Years."<<endl<<endl;
    cout<<"Year Year Balance Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    intErnd=balance*intRate;
    
    //Calculate the savings
    int y=0,year=2016;
    do{
        intErnd=balance*intRate;
        cout<<setw(4)<<y++<<" "<<year<<setw(8)<<balance
                <<setw(8)<<intErnd<<endl;  
         balance*=(1+intRate);
    }while(y<=50);
    
    //Exit stage right
    return 0;
}


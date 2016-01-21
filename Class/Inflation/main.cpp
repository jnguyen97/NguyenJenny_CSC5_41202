/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 21, 2016, 11:45 AM
     Purpose: Inflation
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
    cout<<endl<<"Fun look at Inflation! "<<endl<<endl;
    
    //Declare and initialize variables 
    float price=0.25f;                  //initial price $'s
    float inflate=0.07f;              //Interest Rate/Year
    float rule72=0.72f/inflate;       //Rule of 72, Future value = 2*Present value
    float infYear;                    //Interest Earned
    //Output the Table Heading
    cout<<"The Inflation Rate = "<<inflate*100<<"%"<<endl;
    cout<<"At this inflation rate, prices should double every";
    cout<<rule72<<"Years."<<endl<<endl;
    cout<<"Year Year   Price  Inflation"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Calculate the savings
    for(int y=0,year=2016;y<=50;y++,year++){
        infYear=price*inflate;
        cout<<setw(4)<<y<<" "<<year<<setw(8)<<price
                <<setw(9)<<infYear<<endl;  
         price*=(1+inflate);
    }
    
    //Exit stage right
    return 0;
}


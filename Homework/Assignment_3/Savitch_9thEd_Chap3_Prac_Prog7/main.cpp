/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 21, 2016, 8:00 PM
     Purpose: Find where Fahrenheit equals Celsius
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    
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
    
    //Exit stage right
    return 0;
}
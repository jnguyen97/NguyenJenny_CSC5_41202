/* 
 * File:   main.cpp
 * Author: Jenny Nguyen
 * Created on January 6, 2016, 8:13 AM
 * Purpose: Military Budget
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char CNVPERC=100;//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float milBdgt=600e9f; //Military Budget of 581 Billion Dollars
    float fedBdgt=3.8e12f;//Federal Budget of 3.8 Trillion Dollars
    float percMil;        //Declaration for the calculation percentage 
    
    //Calculate the percentage for the military budget
    percMil=milBdgt/fedBdgt*CNVPERC;
    
    //Output the results
    cout<<"The Military budget = $"<<milBdgt<<endl;
    cout<<"The Federal budget = $"<<fedBdgt<<endl;
    cout<<"The percentage of the Federal Budget attributed to the Military = ";
    cout<<percMil<<"%"<<endl;
    
    //Exit stage right
    return 0;
}
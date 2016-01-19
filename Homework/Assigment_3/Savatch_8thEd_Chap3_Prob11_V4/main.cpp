/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 19, 2016, 10:40 AM
     Purpose: Factorial
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables for etox
    const unsigned char nTerms=13;
    float tol=1e-6f,term=1,etox=1,x;  //e^x
    float nTerm=1; //Counter to determine how many terms
    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
   
    //Calculate e^x
    for(nTerm=1;term>tol;term*=x/nTerm++,etox+=term);
 
        //Output the results
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The number of terms it took to approximate e^"<<x<<"="<<nTerm<<endl;
    cout<<"The approximate value of e^"<<x<<"="<<etox<<endl;
    
    //Exit stage right
    return 0;
}


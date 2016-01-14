/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 13, 2016, 10:46 AM
     Purpose: Calculate Square Root by Babylonian/Newton's Method
     Version 2, Using loops to end calculation
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float n; //Input the value to obtain its square root
    float r,guess;//Intermediate values which asymptotically approach sqrt(n)
    float tol=0.001f;//Accuracy of the result/tolerance
    int   counter=0;//using to see how many loops it takes to get the answer
    //Input data
    cout<<"Input the value to computer the sqrt of?"<<endl;
    cin>>n;
    
    //Approximate the square root
    guess=n/2; //only preform this once to start the process
    
    //Output the initial values
    cout<<"The input value      = "<<n<<endl;
    cout<<"The sqrt ("<<n<<")       = "<<sqrt(n)<<endl;
    
    //Approximate the square root
    do{
        r=n/guess;
        guess=(guess+r)/2;
        counter++;
    }while(abs((r-guess)/guess)*100>tol);//End the loop when close enough
    
    //Output the results
    cout<<"The r      = "<<r<<endl;
    cout<<"The guess  = "<<guess<<endl;
    cout<<"The loop executed "<<counter<<" times."<<endl;
   
    //Exit stage right
    return 0;
}


/* 
 * File:   main.cpp
 * Author: rcc
 * Created on January 12, 2016, 10:17 AM
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
    int score;
    
    //Input data
    cout<<"Enter your score"<<endl;
    cin>>score;
    
    if(score>=101)
        cout<<"Number is too big."<<endl;
    else if (score>=90)
        cout<<"A"<<endl;
    else if (score>=80)
        cout<<"B"<<endl;
    else if (score>=70)
        cout<<"C"<<endl;
    else if (score>=60)
        cout<<"D"<<endl;
    else if (score>=50)
        cout<<"F"<<endl;
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    
    //Exit stage right
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Jenny Nguyen
 * Created on January 13, 2016, 8:43 AM
 * Purpose : find monthly loan payment amount
 */

//System Libraries
 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize variable
    float loan,rate,irate,payment;
    int numPay;
    
    //Input data
    cout<<"Input loan amount."<<endl;
    cout<<"$";cin>>loan;
    cout<<"Input interest rate in percent."<<endl;
    cin>>rate;
    cout<<"Input number of payments."<<endl;
    cin>>numPay;
    
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    irate=(rate*.01)/12;
    payment=((irate*pow(1+irate,numPay)*loan)/(pow(1+irate,numPay)-1));
    
    //Output the results
    cout<<"The monthly payment is $"<<payment<<endl;
    
    //Exit stage right
    return 0;
}


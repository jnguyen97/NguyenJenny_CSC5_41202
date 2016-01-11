/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 11, 2016, 8:58 AM
     Purpose: jackpot taxes
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
     float lumpsum;
     float aftrTax;
     float married;
     float jackpot;
   
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"How much is the jackpot?"<<endl;
    cin>>jackpot;
    lumpsum=jackpot*.62;
    aftrTax=lumpsum*.52;
    married=aftrTax*.5;  
    
    cout<<"The jackpot amount is $"<<jackpot<<endl;
    cout<<"The lump sum is $"<<lumpsum<<endl;
    cout<<"After taxes, you will get $"<<aftrTax<<endl;
    cout<<"After marriage taxes, you will get $"<<married<<endl;
    //Exit stage right
    return 0;
}


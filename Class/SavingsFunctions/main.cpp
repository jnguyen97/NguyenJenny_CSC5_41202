/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 26, 2016, 10:45 AM
     Purpose: Variations on a Savings Theme
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cmath>    //Power/Exponential/Log functions
#include <cstdlib>  //Rand and Srand functions
#include <ctime>    //Time function
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100; //convert (Decimal to Percentage)

//Function prototypes
float save1(float, float, int);      //power
float save2(float, float, int);      //exponential log
float save3(float, float, int);      //for-loops
float save4(float, float, int);      //for-loops Banking with Pennies
float save5(float, float, int);      //recursion
float save6(float, int, float=0.05f);//defaulted save function
float save7(float, float, int);      //for-loops and static variable
void save8(float, float, int, float&);//power
//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    float pv=rand()%9001+1000;  //[1000,10000]  $'s
    float intRate=rand()%11+5;  //[5,15]        %
    char  nComp=rand()%16;        //[0,15]      Years
    
    //Output the random inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value   = $"<<pv<<endl;
    cout<<"The interest rate   = "<<intRate<<"%."<<endl;
    cout<<"The number of years = "<<static_cast<int>(nComp)<<endl;
    
    //Output the results
    cout<<"The Savings Using Power Function               = $"
            <<save1(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings Using Exponential and Log Function = $"
            <<save2(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings Using For Loops                    = $"
            <<save3(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings Using For Loops - Banking Version  = $"
            <<save4(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings Using For Recursion                = $"
            <<save5(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings - Exponential Default Interest     = $"
            <<save6(pv,nComp,intRate/PERCENT)<<endl;
    cout<<"The Savings - Exponential Default Interest  5% = $"
            <<save6(pv,nComp)<<endl;
    cout<<"The Savings Using For Loops and static counter = $"
        <<save7(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings Using For Loops and static counter = $"
        <<save7(pv,intRate/PERCENT,nComp)<<endl;
    float futrVal;
    save8(pv,intRate/PERCENT,nComp,futrVal);
    cout<<"The next function output is a pass by reference."<<endl;
    cout<<"The Savings Using For Loops - Banking Version  = $"
        <<futrVal<<endl;
    //Exit stage right
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************************SAVE8**********************************/
//Inputs
//p->Present Values $'s
//i->Interest Rate %
//n->Number of compounding periods
//Outputs
//FV->Future Value $'s
//Note: Using the for loop function Banking Implementation
//      With a pass by reference variable
void save8(float p, float i, int n, float &fv){
    int ip=p*PERCENT;//Place the value in Pennies
    for(int years=1;years<=n;years++){
        ip*=(1+i);
    }
    fv=static_cast<float>(ip)/PERCENT;   //Returning to $'s
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************************SAVE7**********************************/
//Inputs
//p->Present Values $'s
//i->Interest Rate %
//n->Number of compounding periods
//Outputs
//FV->Future Value $'s
//Note: Using Static Counter
float save7(float p, float i, int n){
    static int nCalls=0;
    for(int years=1;years<=n;years++){
        p*=(1+i);
    }
    nCalls++;
    cout<<"This function Save7 contains a static counter  = "<<nCalls<<endl;
    return p;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************************SAVE6**********************************/
//Inputs
//p->Present Values $'s
//i->Interest Rate %
//n->Number of compounding periods
//Outputs
//FV->Future Value $'s
//Note: Using the power function and defaulting the interest
float save6(float p, int n, float i){
    return p*exp(n*log(1+i));
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************************SAVE5**********************************/
//Inputs
//p->Present Values $'s
//i->Interest Rate %
//n->Number of compounding periods
//Outputs
//FV->Future Value $'s
//Note: Recursion
float save5(float p, float i, int n){
    if(n<=0)return p; //stopping point
    return save5(p,i,n-1)*(1+i);
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************************SAVE4**********************************/
//Inputs
//p->Present Values $'s
//i->Interest Rate %
//n->Number of compounding periods
//Outputs
//FV->Future Value $'s
//Note: Using the for loop function Banking Implementation
float save4(float p, float i, int n){
    int ip=p*PERCENT;//Place the value in Pennies
    for(int years=1;years<=n;years++){
        ip*=(1+i);
    }
    p=static_cast<float>(ip)/PERCENT;   //Returning to $'s
    return p;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************************SAVE3**********************************/
//Inputs
//p->Present Values $'s
//i->Interest Rate %
//n->Number of compounding periods
//Outputs
//FV->Future Value $'s
//Note: Using the for loop function
float save3(float p, float i, int n){
    for(int years=1;years<=n;years++){
        p*=(1+i);
    }
    return p;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************************SAVE2**********************************/
//Inputs
//p->Present Values $'s
//i->Interest Rate %
//n->Number of compounding periods
//Outputs
//FV->Future Value $'s

float save2(float p, float i, int n){
    return p*exp(n*log(1+i));
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************************SAVE1**********************************/
//Inputs
//p->Present Values $'s
//i->Interest Rate %
//n->Number of compounding periods
//Outputs
//FV->Future Value $'s

float save1(float p, float i, int n){
    return p*pow((1+i),n);
}

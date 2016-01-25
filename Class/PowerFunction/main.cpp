/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 25, 2016, 8:36 AM
     Purpose: Power Function Example
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int pow(int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Variables to be used in timing
    //begin/end integer vs double function
    unsigned int begini,endi,begind,endd,loop=100000000; 
    //Declare and initialize variables
    int x;   //base of the problem
    int y;   //exponent of the problem
    int z;   //the result of a^b
    
    //Input data
    cout<<"Input a and b i.e for a^b?"<<endl;
    cin>>x>>y;
            
    //Calculate or map inputs to outputs
    begini=static_cast<unsigned int>(time(0));
    for (int i=0;i<=loop;i++)z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    //Output the results
    cout<<"The Functions are called "<<loop<<" times."<<endl;
    cout<<"Our Function Result "<<x<<"^"<<y<<"="<<z<<endl;
    cout<<"The total time taken = "<<endi-begini<<" seconds."<<endl;
    
    //Compare our function with the cmath library
    double dx=x;    //Copy into a double
    double dy=y;    //Copy into a double 
    double dz=z;    
    
    //Call math library function
    begind=static_cast<unsigned int>(time(0));
    for (int i=0;i<=loop;i++)dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"Library Function Result "<<dx<<"^"<<dy<<"="<<dz<<endl;
    cout<<"The total time taken = "<<endd-begind<<" seconds."<<endl;
    cout<<"Same as z=exp(y*loge(x))-->"<<exp(dy*log(dx))<<endl;
    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                              Power Function                                */
//Inputs
//  a->Integer Base
//  b->Integer Power-Exponent
//Output
//  c->Integer z=a^b
int pow(int a,int b){
    if(b<=0)return 1;
    if(b==1)return a;
    int abd2=pow(a,b/2);  
    if(b%2)return abd2*abd2*a; //If odd
    return abd2*abd2;           //else even
}

/* 
 * File:   main.cpp
 * Author: rcc
 *
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
    char a,b,c,d,e,choice;
    
    //Input data
    cout<<"Enter your score 100 to 0"<<endl;
    cin>>score;
    
    switch(score)
    {       case 100: cout<<"A"<<endl; break;
            case 99: 
            case 98: 
            case 97: 
            case 96:
            case 95: 
            case 94: 
            case 93: 
            case 92:
            case 91:
            case 90:cout<<"A"<<endl; break; 
            case 89: 
            case 88: 
            case 87: 
            case 86:
            case 85: 
            case 84: 
            case 83: 
            case 82:
            case 81:
            case 80:cout<<"B"<<endl; break;
            case 79: 
            case 78: 
            case 77: 
            case 76:
            case 75: 
            case 74: 
            case 73: 
            case 72:
            case 71:
            case 70:cout<<"C"<<endl; break;
            case 69: 
            case 68: 
            case 67: 
            case 66:
            case 65: 
            case 64: 
            case 63: 
            case 62:
            case 61:
            case 60:cout<<"D"<<endl; break;
      
            default: cout<<"F"<<endl;}
    //Calculate or map inputs to outputs
    
    //Output the results
    
    
    //Exit stage right
    return 0;
}
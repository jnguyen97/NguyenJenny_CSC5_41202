/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 21, 2016, 9:24 PM
     Purpose: Prime Numbers
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
    cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob5"<<endl;
    cout<<endl<<"Prime Numbers from 3 - 100"<<endl<<endl;
            
    //declare and initialize variables
    int i;    
    int prime=3; 
    int number=2;
   
    //Output the results
    while (prime<=100){   
        for(int i=2;i<=prime;i++){
            number=i;
            if(number==prime){          
            cout<<prime<<endl;
            }
            else if(prime%number==0){
            i+=prime;  
            }
        }
        prime++;
    } 
    //Exit stage right
    return 0;
}
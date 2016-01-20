/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 14, 2016, 9:30 PM
     Purpose: Inflation
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
    float cost;  //cost of item
    float years; //how many years till item is purchased?
    float rate;  //rate of inflation      
    
    //Input data
    cout<<"How much is the item?"<<endl;
    cout<<"$";cin>>cost;
    cout<<"How many years till that"<<endl;
    cout<<"the item will be purchased?"<<endl;
    cin>>years;
    cout<<"What is the rate of inflation?"<<endl;
    cin>>rate;
    
    do 
        {cost=(cost+cost*(rate/100));
        years=years-1; 
    } while (years>0);
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The item is estimated to cost $"<<cost<<"."<<endl;

    
    //Exit stage right
    return 0;
}


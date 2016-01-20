/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 14, 2016, 8:38 PM
     Purpose: Pay rate
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
    const float PAYRATE = .076; // 7.6% pay increase
    float pSalary;  //previous annual salary
    float nSalary;  //new annual salary
    float retroP;   //retroactive pay due
    float nMonthS;  //new monthly salary
    char ans = 'y'; //if the user wishes to repeat calculation
    cout<<fixed<<setprecision(2)<<showpoint;
    do
        {cout<<"What was your pervious annual salary?"<<endl;
        cout<<"$";cin>>pSalary;
        nSalary=(pSalary*PAYRATE)+pSalary; 
        cout<<"Your new annual salary is $"<<nSalary<<"."<<endl;
        cout<<"Your new monthly salary is $"<<nSalary/12<<"."<<endl;
        retroP=((nSalary/12)*6)-((pSalary/12)*6);
        cout<<"The amount of retroactive pay due is $"<<retroP<<"."<<endl;
        cout<<endl;
        cout<<"Would you like another calculation?"<<endl;
        cout<< "Press y for yes, n for no,"<<endl;
        cout<< "and then press return: "<<endl;
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    
    //Exit stage right
    return 0;
}


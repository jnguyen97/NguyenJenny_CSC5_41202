/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 14, 2016, 8:18 PM
     Purpose: Ounces to Metric Ton
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int TONOZ=35273.92; //conversion rate from a 
                          //metric ton to ounces
//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
//Declare and initialize variables
int   numBox; //number of boxes
float ounces; //package of cereal weight in ounces
float tons;   //package of cereal weight in metric tons
char  ans;    //if the user wishes to repeat 
    
//Input data
do
    {cout<<"What is the weight of package of cereal in ounces?"<<endl;
    cin>>ounces;
                    
    //Calculate or map inputs to outputs
    tons=ounces/TONOZ;
    numBox=TONOZ/ounces;
        
    //Output the results
    cout<<"The package of cereal weighs "<<tons<<" in metric tons."<<endl;
    cout<<"It would take "<<numBox<<" packages to yield 1 metric ton of cereal"<<endl;
    cout<<"Would you like another calculation?"<<endl;
    cout<< "Press y for yes, n for no,"<<endl;
    cout<< "and then press return: "<<endl;
    cin >> ans;
} while (ans == 'y' || ans == 'Y');
    //Exit stage right
    return 0;
}


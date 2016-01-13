 /* Author: Jenny Nguyen
 * Created on January 6, 2016, 10:47 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char cnvQrtr=25; //Cents per quarter
const char cnvDime=10; //Cents per dime
const char cnvNikl=5;  //Cents per nickel
const char cnvPnDl=100;//Conversion from pennies to dollars

//Function prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned char nQrtrs,nNikls,nDimes;//Declare inputs, number of Q,D,N
    unsigned short total;//total
    
    //Calculate or map inputs to outputs
    cout << "How many quarters do you have 0-9."<<endl; 
    cin >> nQrtrs;
    cout << "How many dimes do you have 0-9."<<endl;
    cin >> nDimes;
    cout << "How many nickels do you have 0-9"<<endl;
    cin >> nNikls;
    
    //Calculate the total
    total=(nQrtrs-48)*cnvQrtr+(nDimes-48)*cnvDime+(nNikls-48)*cnvNikl;
    
    //Output the results
    cout<<"Number of Quarters input = "<<nQrtrs<<endl;
    cout<<"Number of Dimes    input = "<<nDimes<<endl;
    cout<<"Number of Nickels  input = "<<nNikls<<endl;
    cout<<"The dollar amount = $"<<1.0f*total/cnvPnDl<<endl;
    
     //Exit stage right 
    
    return 0;
}
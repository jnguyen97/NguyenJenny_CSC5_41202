 /* Author: Jenny Nguyen
 * Created on January 6, 2016, 11:35 AM
 * Purpose: How many does it take?
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char wtBill=1; //Weight in grams
const float cnvLbs=1/453.5f; //Conversion from grams to lbs

//Function prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    unsigned int amtStl;  //Amount to steal
    unsigned short denom; //Bill denomination
    unsigned char wtPers=80; //Weight person can carry
    unsigned char nPerps; //Number of perpetrators
    
    //Calculate or map inputs to outputs
    cout << "How much money would you like to acquire?"<<endl; 
    cin >> amtStl;
    cout << "What is the bill denomination desired?"<<endl;
    cin >> denom;
    
    //Calculate the number of fellow perpetrators
    nPerps=cnvLbs*amtStl*wtBill/denom/wtPers+1;
    
    //Output the results
    cout<<"Amount Desired = $ "<<amtStl<<endl;
    cout<<"Denomination Desired = $"<<denom<<endl;
    cout<<"Number of Individuals required on the job = "
            <<static_cast<int>(nPerps)<<endl;
     //Exit stage right 
    
    return 0;
}
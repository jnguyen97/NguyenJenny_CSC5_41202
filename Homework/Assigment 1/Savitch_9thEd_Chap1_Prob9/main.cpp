/* Author: Jenny
 * Created on January 6, 2016, 3:23 AM
 * Purpose: Savitch 9th Ed Chapter 1 Problem 9
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here

int main() {
    //Declare and initialize variables
    int quarter, dime, nickel, total;
    
    //Calculate or map inputs to outputs
    cout << "Press return after entering a number."<<endl;
    cout << "Enter the number of quarters."<<endl; 
    cin >> quarter;
    cout << "Enter the number of dimes."<<endl;
    cin >> dime;
    cout << "Enter the number of nickels."<<endl;
    cin >> nickel;
    total=(quarter*25)+(dime*10)+(nickel*5);
    //Output the results
    cout << "The total amount is ";
    cout <<total;
    cout <<" in cents."<<endl;
    
     //Exit stage right 
    
    return 0;
}


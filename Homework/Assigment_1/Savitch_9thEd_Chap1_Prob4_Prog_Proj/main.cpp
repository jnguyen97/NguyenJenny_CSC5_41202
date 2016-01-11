/* Author: Jenny
 * Created on January 6, 2016, 3:41 AM
 * Purpose: Savitch 9th Ed Chapter 1 Problem 10
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
    int sec, dist;
    
    //Calculate or map inputs to outputs
    cout << "Press return after entering a number."<<endl;
    cout << "Enter the time in seconds."<<endl; 
    cin >> sec;
    dist=(32*(sec*sec))/2;
     
    //Output the results
    cout << "The total distance that the object will travel is "<<endl;
    cout <<dist;
    cout <<"feet."<<endl;
    
    //Exit stage right
    
    return 0;
}


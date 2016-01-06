/* 
     Author: Jenny Nguyen
     Created on January 5, 2016, 11:03 PM
     Purpose: Savitch 9th Ed Chapter 1 Problem 5
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
    int width, height, total;
    
    //Calculate or map inputs to outputs
    cout << "Press return after entering a number."<<endl;
    cout << "Enter the width of the fence in feet."<<endl;
    cin >> width;
    cout << "Enter the height of the fence in feet."<<endl; 
    cin >> height;
    total = width + width + height + height;
    //Output the results
    cout << "If the width of the fence is ";
    cout << width;
    cout << " feet"<<endl;
    cout << "and the height of it is ";  
    cout << height;
    cout << " feet,"<<endl;
    cout << "the total length of fence you would need is"<<endl;
    cout << total;
    cout << " feet to enclose the entire area."<<endl;
    
    //Exit stage right 
    
    return 0;   
}



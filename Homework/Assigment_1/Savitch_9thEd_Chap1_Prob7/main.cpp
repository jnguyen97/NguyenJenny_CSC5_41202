/* Author: Jenny Nguyen
 * Created on January 6, 2016, 2:10 AM
 * Purpose: Savitch 9th Ed Chapter 1 Problem 7
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
    int number1, number2, sum, product;
    
    //Calculate or map inputs to outputs
    cout << "Press return after entering a number."<<endl;
    cout << "Enter the first number."<<endl;
    cin >> number1;
    cout << "Enter the second number."<<endl;
    cin >> number2;
    sum=number1+number2;
    product=number1*number2;
    
    //Output the results
    cout << "The sum of the two numbers is ";
    cout <<sum<<endl;
    cout << "and their product is ";
    cout <<product;
    cout <<"."<<endl;
    cout << "This is the end of the program."<<endl;
    
    //Exit stage right 

    return 0;
}


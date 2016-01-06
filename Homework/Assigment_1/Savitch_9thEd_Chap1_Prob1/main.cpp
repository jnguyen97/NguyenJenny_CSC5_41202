/* 
 * Author: Jenny Nguyen
 * Created on January 5, 2016, 10:09 PM
 * Savitch 9thEd Chapter 1 Problem 1
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
    int number_of_pods, peas_per_pod, total_peas;
    
    //Calculate or map inputs to outputs
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    
    //Output the results
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";      
    cout << peas_per_pod;  
    cout << " peas in each pod, then\n";  
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
     //Exit stage right 
    
    return 0;
}


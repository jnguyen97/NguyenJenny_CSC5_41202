/* 
     Author: Jenny Nguyen
     Created on January 6, 2016, 1:12AM
     Purpose: Savitch 9th Ed Chapter 1 Problem 6
 */

//System Libraries
#include <iostream> 
//Adding a space before iostream resulted in an 
//error stating that there is no such file or directory.

//Omitting the < before iostream causes an error 
//stating that #include expects "filename" or <filename>. 
//Another error that occurred is that 'cout' and 
//'cin' was not declared in this scope.
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here

int main() {
//Omitting the int from int main() did not cause 
//any errors to occur.

//Misspelling main caused the build to fail.

//Omitting the ( in () caused an error of 
//"expected initializer before ')' token",
//while omitting both () gave an error that stated
//that both 'cout' and 'cin' does not name a type.
    //Declare and initialize variables
    int number_of_pods, peas_per_pod, total_peas;
    //Calculate or map inputs to outputs
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n"; 
    //Misspelling 'cout' as 'cut' gave an error stating
    //that 'cut' was not declared in this scope.
    //Misspelling 'cin' also gave the same results.
    //Omitting the << causes an error stating 
    //"expected ';' before string constant".
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
//Leaving of the } at the end stated an error of
//"expected '}' at the end of input." 



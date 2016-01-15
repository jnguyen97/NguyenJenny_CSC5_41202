/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 14, 2016, 4:28 PM
     Purpose: Mad Lib
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    string iname;   //instructor's first or last name
    string name;    //your name
    string food;    
    string color;
    string adj;     //adjective
    string animal;
    float temp;     //temperature
    //Input data
    cout<<"Welcome to a game of Mad Lib!"<<endl;
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"What is your instructor's name?"<<endl;
    cin>>iname;
    cout<<"Enter a food."<<endl;
    cin>>food;
    cout<<"Enter a number from 100 to 120."<<endl;
    cin>>temp;
    cout<<"Enter a random adjective."<<endl;
    cin>>adj;
    cout<<"Enter a random color."<<endl;
    cin>>color;
    cout<<"Enter an animal."<<endl;
    cin>>animal;
    
    //Output the results
    cout<<endl;
    cout<<"Dear Instructor "<<iname<<","<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<temp<<". Next, my "<<adj<<" pet"<<endl;
    cout<<animal<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late."<<endl<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<name<<endl;
    
    //Exit stage right
    return 0;
}


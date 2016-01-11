/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 11, 2016, 8:58 AM
     Purpose: Display truth table and compare swaps
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool x=true;
    bool y=true;
    int a=2,b=3,temp;
   
    //Create Heading
    cout<<"X  Y !X !Y  X&&Y  x||y  x^y  (x^y)^y  (x^y)^x  !(x&&y)  !x||!y  !(x||y)  !x&&y"<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;

    
    //Second Row
    x=true;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
   
    //Third Row
    x=false;y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   "; 
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    
    //Fourth Row
    x=false;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   "; 
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    cout<<endl;//separation 
    
    //Swap using temp
    cout<<"Swap using temp"<<endl;
    cout<<"Before: a="<<a<<", "<<"b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After : a="<<a<<", "<<"b="<<b<<endl;
    
    cout<<endl;//separation       
     
    //Swap using exclusive or operator        
    cout<<"Swap using exclusive"<<endl;
    cout<<"Before: a="<<a<<", "<<"b="<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After : a="<<a<<", "<<"b="<<b<<endl;
    //Exit stage right
    return 0;
}


/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on January 21, 2016, 8:00 PM
     Purpose: Archimedes' principle : Buoyancy
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants
const float PI = 3.1415927;   //Need Pi to calculate Volume

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob6"<<endl;
    cout<<endl<<"Archimedes' principle : Buoyancy"<<endl;
            
    //declare and initialize variables
    float weight;    // weight of sphere in pounds
    float radius;    // radius of sphere in feet
    float volume;    // volume of sphere
    float buoy;      // buoyancy
    float y = 62.4;  // specific weight of water
   
   //input the weight and radius of the sphere
    cout<<endl<<"Enter the weight of the sphere in pounds."<<endl;
    cin>>weight;
    cout<<endl<<"Enter the radius of the sphere in feet"<<endl;
    cin>>radius;
  
    //calculations for volume 
    volume=(4.0f/3.0f)*PI*(radius*radius*radius);
    
    //calculate buoyant force
    buoy=volume*y;
    
    //output if it will float or sink
    if (buoy>=weight){   
        cout<<endl<<"The sphere will float!"<<endl;
    }else {
        cout<<endl<<"The sphere will sink!"<<endl;
    }
    //Exit stage right
    return 0;
}
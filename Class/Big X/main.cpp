/* 
     File:   main.cpp
     Author: Jenny Nguyen
     Created on February 2, 2016, 8:18 AM
     Purpose: X with numbers
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //Random Function
#include <ctime>    //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants
const int COL=50;
//(^w^)/<3
//Function prototypes
int fillAry1(char [][COL],int);
int fillAry2(char [][COL],int);
void prntAry(char [][COL],int,int);
void allnOne();

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    const int ROW=50;
    char array[ROW][COL];
    
    //Fill the array with random 2 digit numbers
    int row_col=fillAry1(array,ROW);
  
    //Print the array
    prntAry(array,ROW,row_col);
 
    
    //Fill the array with random 2 digit numbers
    allnOne();
    
    //Exit stage right
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                              All in One ;w;
//Inputs
// a->a 2 dimensional array
// ROW->number of rows in the array
// COL->number of columns in the array ;w;
//Outputs
// a->List initialized with random 2 digit numbers
//******************************************************************************
void allnOne(){
    //randomly choose how many rows and columns.
    int row_col=rand()%7+2;//[2,50]
    //Fill the entire table with spaces)
    for (int row=0;row<row_col;row++){
        for(int col=0;col<COL;col++){
            if(row==col){
                char c=(row_col-row)+48;
                cout<<c;
            }else if(row+col==row_col-1){
                char c=(row+1)+48;
                cout<<c;
            }else{ cout<<" ";}
        }
        cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Fill Array 2 
//Inputs
// a->a 2 dimensional array
// ROW->number of rows in the array
// COL->number of columns in the array ;w;
//Outputs
// a->List initialized with random 2 digit numbers
//******************************************************************************
int fillAry2(char a[][COL],int ROW){
    //randomly choose how many rows and columns.
    int row_col=rand()%7+2;//[2,50]
    //Fill the entire table with spaces)
    for (int row=0;row<row_col;row++){
        for(int col=0;col<COL;col++){
            a[row][col]=' ';
            if(row==col)a[row][col]=(row_col-row)+48;
            if(row+col==row_col-1)a[row][col]=(row+1)+48;
        }
    }
    //send back how many cells are occupied 
    return row_col;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Print Array
//Inputs
// a->List
// n->Size of the array
//Outputs
// a->List initialized with random 2 digit numbers
//******************************************************************************
void prntAry(char a[][COL],int ROW, int rc){
    //loop and fill the array with random numbers 
    cout<<endl;
    for (int row=0;row<rc;row++){
        for (int col=0;col<rc;col++){
            cout<<a[row][col];
        }        
        cout<<endl;
    }
    cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Fill Array
//Inputs
// a->a 2 dimensional array
// ROW->number of rows in the array
// COL->number of columns in the array ;w;
//Outputs
// a->List initialized with random 2 digit numbers
//******************************************************************************
int fillAry1(char a[][COL],int ROW){
    //randomly choose how many rows and columns.
    int row_col=rand()%7+2;//[2,50]
    //Fill the entire table with spaces)
    for (int row=0;row<row_col;row++){
        for(int col=0;col<COL;col++){
            a[row][col]=' ';
        }
    }
    //fill the back slash part of x ;^;
    for (int row=0;row<row_col;row++){
        for(int col=0;col<COL;col++){
            if(row==col)a[row][col]=(row_col-row)+48;
        }
    }
    //fill the front slash part of x ;^;
    for (int row=0;row<row_col;row++){
        for(int col=0;col<COL;col++){
            if(row+col==row_col-1)a[row][col]=(row+1)+48;
        }
    }
    //send back how many cells are occupied 
    return row_col;
}
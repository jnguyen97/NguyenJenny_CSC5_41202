
 //    File:   main.cpp
 //    Author: Jenny Nguyen
 //    Created on January 21, 2016, 5:24 PM
 //    Purpose: Horoscopes and Their Elements
 //

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob3"<<endl;
    cout<<endl<<"Horoscopes"<<endl<<endl;
            
    //declare and initialize variables
    int month;   //birth month of user 
    int day;     //birth day of user
    char answer; //question if user wants to repeat
   
    //loop
    do{
        cout<<"Enter the month you were born in.(1-12)"<<endl;
        cin>>month;
        cout<<"Enter the day you were born.(1-31)"<<endl;
        cin>>day;
        if (day>31||month>12){
        cout<<"Please enter a valid day or month"<<endl;
        } 
        else if (month==3&&day>=21||month==4&&day<=19){
            cout<<"You are an Aries."<<endl; //March 21–April 19
            cout<<"Your element is Fire."<<endl;
            cout<<"You are most compatible with other "
                    "Aries, Leo, Sagittarius."<<endl;
            if (day<=22&&day>=19){        
                cout<<"Your birthday is on a cusp."<<endl;
            }else if (month==4&&day>=17){
                cout<<"Your birthday is on a cusp."<<endl;
         }
        }else if (month==4&&day>=20||month==5&&day<=20){
            cout<<"You are a Taurus."<<endl;   //April 20–May 20
            cout<<"Your element is Earth."<<endl;
            cout<<"You are most compatible with other "
                    "Taurus, Virgo, Capricorn."<<endl;
            if (day<=21&&day>=19){        
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==5&&day>=21||month==6&&day<=21){
            cout<<"You are a Gemini."<<endl;  //May 21–June 21 
            cout<<"Your element is Air."<<endl;
            cout<<"You are most compatible with other "
                    "Gemini, Libra, Aquarius."<<endl;
            if (day<=22&&day>=20){        
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==6&&day>=22||month==7&&day<=22){
            cout<<"You are a Cancer."<<endl;  //June 22–July 22
            cout<<"Your element is Water."<<endl;
            cout<<"You are most compatible with other "
                    "Cancer, Scorpio, Pisces."<<endl;
            if (day<=23&&day>=21){        
                cout<<"Your birthday is on a cusp."<<endl;
            }  
        }else if (month==7&&day>=23||month==8&&day<=22){
            cout<<"You are a Leo."<<endl;    //July 23–August 22 
            cout<<"Your element is Fire."<<endl;
            cout<<"You are most compatible with other "
                    "Leo, Aries, Sagittarius."<<endl;
            if (day<=24&&day>=21){        
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==8&&day>=23||month==9&&day<=22){
            cout<<"You are a Virgo."<<endl;    //August 23–September 22
            cout<<"Your element is Earth."<<endl;
            cout<<"You are most compatible with other "
                    "Virgo, Taurus Capricorn."<<endl;
            if (day<=24&&day>=21){        
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==9&&day>=23||month==10&&day<=22){
            cout<<"You are a Libra."<<endl;    //September 23–October 22
            cout<<"Your element is Air."<<endl;
            cout<<"You are most compatible with other "
                    "Libra, Gemini, Aquarius."<<endl;
            if (day<=24&&day>=21){        
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==10&&day>=23||month==11&&day<=21){
            cout<<"You are a Scorpio."<<endl;   //October 23–November 21 
            cout<<"Your element is Water."<<endl;
            cout<<"You are most compatible with other "
                    "Scorpio, Cancer, Pisces."<<endl;
            if (day<=24&&day>=22){        
                cout<<"Your birthday is on a cusp."<<endl;
            }else if (month==11&&day>=19){
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==11&&day>=22||month==12&&day<=21){
            cout<<"You are a Sagittarius."<<endl; //November 22–December 21
            cout<<"Your element is Fire."<<endl;
            cout<<"You are most compatible with other "
                    "Scorpio, Cancer, Pisces."<<endl;
            if (day<=23&&day>=20){        
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==12&&day>=22||month==1&&day<=19){
            cout<<"You are a Capricorn."<<endl;   //December 22–January 19
            cout<<"Your element is Earth."<<endl;
            cout<<"You are most compatible with other "
                    "Capricorn, Taurus, Virgo."<<endl;
            if (day<=23&&day>=20){        
                cout<<"Your birthday is on a cusp."<<endl;
            }else if (month==1&&day>=17){
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==1&&day>=20||month==2&&day<=18){  
            cout<<"You are a Aquarius."<<endl;    //for January 20–February 18
            cout<<"Your element is Air."<<endl;
            cout<<"You are most compatible with other "
                    "Aquarius, Gemini, Libra."<<endl;
            if (day<=21&&day>18){          
                cout<<"Your birthday is on a cusp."<<endl;
            }else if (month==2&&day>=16){
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else if (month==2&&day>=19||month==3&&day<=20){
            cout<<"You are a Pisces."<<endl;      //February 19–March 20
            cout<<"Your element is Water."<<endl;
            cout<<"You are most compatible with other "
                    " Pisces, Scorpio, Cancer."<<endl;
            if (day<=21&&day>=18){        
                cout<<"Your birthday is on a cusp."<<endl;
            }
        }else { 
            cout<<"Please enter a valid day"<<endl;
        }   
        //if the user would like to repeat
        cout<<endl<<"Do you want to check another birthday?"<<endl;
        cout<<"Press Y to check again or any other key to quit."<<endl;
        cin>>answer;
    }while(toupper(answer)=='Y');
    
    //Exit stage right
    return 0;
}
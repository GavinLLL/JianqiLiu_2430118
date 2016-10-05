/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4, 2016, 4:35 PM
 * Purpose: Magic Dates
 */


//System Libraries
#include <iostream>  //Input/out objects
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    unsigned short month,day,year;
    //Input values
    cout<<"Enter a month (in numeric form), a day, and a two-digit year"<<endl;
    cout<<"See if the date is  magic "<<endl;
    cout<<"Enter MM DD YY"<<endl;
    cin>>month>>day>>year;
    //Input validation
    if(year<00||year>99){
        cout<<"Bad Year  -_-#"<<endl;
        return 1;   //Return falure
    }
     if(month<1||month>12){
         cout<<"Bad Month  -_-#"<<endl;
        return 1;
     }
     if(day<1||day>31){
         cout<<"Bad Day  -_-#"<<endl;
        return 1;
     }
    //Process values-> Map inputs to Outputs
    if(month*day==year)
        cout<<"The date is magic  @_@!"<<endl;
    else
        cout<<"The date is not magic  -_-#"<<endl;
    //Display output
    
    //Exit program
    
    return 0;
}
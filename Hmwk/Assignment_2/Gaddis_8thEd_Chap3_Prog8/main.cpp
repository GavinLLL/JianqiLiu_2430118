/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:calculate the calories
 * Created on September 27, 2016, 11:00 PM
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
    unsigned short int cookie;
    unsigned short int CooCal, totcal;
    //Input the number of cookies
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookie;
    //Process values-> Map inputs to Outputs
    CooCal=(300*10)/30;
    totcal=CooCal*cookie;
    //Display output
    cout<<"The total calories is "<<totcal<<endl;
    //Exit program
    
    return 0;
}
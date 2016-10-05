/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4, 2016, 4:35 PM
 * Purpose:
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
    float hig, wei, bmi;
    //Input values
    cout<<"Enter height in inches"<<endl;
    cin>>hig;
    cout<<"Enter weight in lbs"<<endl;
    cin>>wei;
    //Process values-> Map inputs to Outputs
    bmi=wei*703/(hig*hig);
    //determine if a person has a optimal body
    if(bmi>=18.5 && bmi<=25)
        cout<<"You have a optimal weight."<<endl;
    else if(bmi<18.5)
        cout<<"You are underweight."<<endl;
    else
        cout<<"Your are overweight."<<endl;
    //Display output
    
    //Exit program
    
    return 0;
}
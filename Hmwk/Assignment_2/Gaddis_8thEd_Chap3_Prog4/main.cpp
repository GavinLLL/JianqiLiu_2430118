/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose: Calculates the average rainfall
 * Created on September 27, 2016, 4:35 PM
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>   //providing parametric manipulators
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float June, July, August;   //Three months
    float AveRai;               //The average rainfall of three months
    
    //Input values of rainfall in each month
    cout<<"Enter the amount of rain (in inches) that fell each month. "<<endl;
    cout<<"June    "; 
    cin>>June;
    cout<<"July    ";
    cin>>July;
    cout<<"August  ";
    cin>>August;
    
    //Process values-> Map inputs to Outputs
    AveRai=(June+July+August)/3; //calculate the Average rainfall
    //Display output
    cout<<fixed<<setprecision(2);// in fixed-point with two decimal point
    cout<<"The average rainfall for June, July, and August is ";
    cout<<AveRai<<" inches."<<endl;   
    //Exit program
    
    return 0;
}
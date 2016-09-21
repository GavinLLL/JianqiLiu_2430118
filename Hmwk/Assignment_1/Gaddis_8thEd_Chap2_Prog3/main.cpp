

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on September 18, 2016, 3:59 PM
 * purpose:Sale Tax
 */

//System Libraries
#include <iostream>  //Input/out objects
using namespace std; //Name-space used in the system Library
//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of variables
    float stasatax=0.04; //The state sales tax
    float cousatax=0.02; //The county sales tax 
    float totsatax;      //The total sales tax
    float purchase=95;   //The purchase in dollar
   
    //Input values
    
    //Process values-> Map inputs to Outputs
    totsatax=purchase*(stasatax+cousatax);
    //Display output
    cout<<"The total sales tax on a $95 purchase is $"<< totsatax <<"."<<endl;
    
    return 0;
}


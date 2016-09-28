/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose: Celsius to Fahrenheit
 * Created on September 27, 2016, 10:00 PM
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
    
    //F is the Fahrenheit, C is the Celsius temperature
    float F, C;   
    //Input Celsius temperatures
    cout<<"Celsius temperatures is ";
    cin>>C;
    //Process values-> Map inputs to Outputs
    //The formula to convert Celsius to Fahrenheit
    F=9/5.0f*C+32;                       
    //Display output
    cout<<fixed<<setprecision(1)<<endl;
    cout<<"Fahrenheit temperatures is "<<F<<endl;
    //Exit program
    
    return 0;
}
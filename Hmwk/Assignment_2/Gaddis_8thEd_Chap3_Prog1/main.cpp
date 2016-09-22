

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:calculates a car's gas mileage.
 * Created on September 21, 2016, 9:58 AM
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
    short gas;            //Gallons of gas the car can hold
    short mil;            //The miles the car can be driven on a full tank
    short mpg;            //Miles Per Gallon
    //Input values
    cout<<"How many gallons of gas your car can hold?";
    cin>>gas;             //Gallons of gas the car can hold
    cout<<"How long your car can be driven on a full tank?";
    cin>>mil;             //The miles the car can be driven on a full tank
    //Process values-> Map inputs to Outputs
    mpg=mil/gas;
    //Display output
    cout<<"Your car can be driven "<<mpg<<" miles per gallon of gas."<<endl;
    
    //Exit program
    
    return 0;
}


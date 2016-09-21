
/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * purpose: Miles per Gallon
 * Created on September 18, 2016, 4:02 PM
 */

//System Libraries
#include <iostream>  //Input/out objects
using namespace std;//Name-space used in the system Library
//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of variables
    short gas   =15;   //15 gallons of gasoline
    short tramil=375;   //travel 375 miles
    short mpg;         //Miles per Gallon
    //Input values
    
    //Process values-> Map inputs to Outputs
     mpg=tramil/gas;
    //Display output
    cout<<"The MPG of the car is "<<mpg<<" miles."<<endl;
    
    //Exit program
    return 0;
}


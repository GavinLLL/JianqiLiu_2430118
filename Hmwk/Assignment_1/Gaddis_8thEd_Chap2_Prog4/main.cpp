

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on September 18, 2016, 4:00 PM
 * purpose: Display the meal cost,tax amount,tip amount, 
 *          and total bill on the screen.
 */

//System Libraries
#include <iostream>   //Input/out objects
using namespace std;  //Name-space used in the system Library

//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of variables
    float consu  =88.67;    //Consumption of a patron with a $88.67 meal charge
    float tax    =0.0675;   //percentage of tax
    float tip    =0.02;     //percentage of tip
    float taxamt;           //tax amount
    float tipamt;           //tip amount
    float totalb;           //total bill
   
    //Input values
    
    //Process values-> Map inputs to Outputs
    taxamt=tax*consu;
    tipamt=tip*(consu+consu*tax);
    totalb=consu+taxamt+tipamt;   
    //Display output
    cout<<"The meal cost  is $ "<<consu<<"."<<endl;
    cout<<"The tax amount is $ "<<taxamt<<"."<<endl;
    cout<<"The tip amount is $ "<<tipamt<<"."<<endl;
    cout<<"The total bill is $ "<<totalb<<"."<<endl;
    
    //Exit program

    return 0;
}


/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:calculate the minimum amount of insurance
 * Created on September 27, 2016, 10:00 PM
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
    float PerCos=0.8;     //80% percent cost to replacement
    float RepCos, MinIns;
    
    //input values of replacement cost of structure (in USD)
    cout<<"Enter the replacement coast of structure           $";
    cin>>RepCos;
    
    //Process values-> Map inputs to Outputs
    MinIns=RepCos*PerCos;
    //Display output
    cout<<"The minimum amount of insurance you should buy is  $"<<MinIns<<endl;
    
    //Exit program
    
    return 0;
}
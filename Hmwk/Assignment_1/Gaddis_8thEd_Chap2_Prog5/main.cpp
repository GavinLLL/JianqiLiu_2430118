

/* 
 * File:   main.cpp
 * Author: Jianqi liu
 * Created on September 18, 2016, 4:00 PM
 * Purpose: Display the average of Values 
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
    short a=28;   //value of fist number
    short b=32;   //value of second number
    short c=37;   //value of third number
    short d=24;   //value of forth number
    short e=33;   //value of fifth number
    short average;//the sum of the five numbers divide by 5 
    //Input Values
    
    //Process values-> Map inputs to outputs
     average=(a+b+c+d+e)/5;
    //Display output
     cout<<"The average is "<<average<<"."<<endl;
     
    //Exit program
    
    return 0;
}


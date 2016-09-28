/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:find the number of widgets
 * Created on September 27, 2016, 10：57 PM
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
    float wid=12.5;
    float pallet,widsta,number;
    //Input values
    cout<<"How much the pallet weighs by itself?"<<endl;
    cin>>pallet;
    cout<<"What is the weighs of widgets stacked on it?"<<endl;
    cin>>widsta;
    //Process values-> Map inputs to Outputs
    number=(widsta-pallet)/wid;
    //Display output
    cout<<"There are "<<number<<"widgets."<<endl;
    //Exit program
    
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4, 2016, 4:35 PM
 * Purpose:calculate weight
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
    float wei, mass;
    //Input values
    cout<<"Enter the mass in kilograms:"<<endl;
    cin>>mass;
    //Process values-> Map inputs to Outputs
     wei=mass*9.8;
     //determine if the object is too heavy or too light
     if(wei>1000)

        cout<<"The object is too heavy."<<endl;

    else if(wei<10)

        cout<<"The object is too light."<<endl;

    else

        cout<<"The object is good!"<<endl;
    //Display output
    
    //Exit program
    
    return 0;
}
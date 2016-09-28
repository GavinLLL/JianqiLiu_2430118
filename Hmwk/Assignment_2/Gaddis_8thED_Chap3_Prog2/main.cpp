/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose: calculate the amount of income
 * Created on September 21, 2016, 9:58 AM
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>   //Providing parametric manipulators
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float stA=15, stB=12, stC=9; //each class eats cost in $
    float A, B, C;               //number of each seats sold
    float total;                 //amount of income
      
    //input number of each class seats sold
    cout<<"How many tickets of class A were sold?"<<endl;
    cin>>A;
    cout<<"How many tickets of class B were sold?"<<endl;
    cin>>B;
    cout<<"How many tickets of class C were sold?"<<endl;
    cin>>C;
    //Process values-> Map inputs to Outputs
    total=stA*A+stB*B+stC*C;
    
    //Display output
    cout<<fixed<<setprecision(2);   //amount in fixed-point & tow decimal place
    cout<<"The amount of income generated from ticket sales is $"<<total<<endl;
    //Exit program
    
    return 0;
}
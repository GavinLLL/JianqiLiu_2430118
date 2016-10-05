/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4, 2016, 4:35 PM
 * Purpose:Time Calculator
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
    float second, minute, hour, day;
    float stom=60, mtoh=3600, htod=86400;
    //Input values
    cout<<"Enter the number of seconds:"<<endl;
    cin>>second;
    //Process values-> Map inputs to Outputs
    if(second>=stom && second<mtoh){
       minute=second/stom;
       cout<<second<<" seconds are "<<minute<<" minutes."<<endl;
    }else if (second>=mtoh && second<htod){
       hour=second/mtoh;
       cout<<second<<" seconds are "<<hour<<" hours."<<endl;
    }else if (second>=htod){
       day=second/htod;
       cout<<second<<" seconds are "<<day<<" days."<<endl;

    }
    //Display output
    
    //Exit program
    
    return 0;
}
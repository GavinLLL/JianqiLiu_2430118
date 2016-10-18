/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 15, 2016, 4:35 PM
 * Purpose:Sum of Numbers
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
    float number;
    float total;
    //Input values
    cout<<"Please enter the number:";
    cin>>number;
    //Process values-> Map inputs to Outputs
    for(int i=1;i<=number;i++){
        total+=i;
    }
    
    cout<<"The sum from 1 to "<<number<<" is: "<<total<<endl;
    //Display output
    
    //Exit program
    
    return 0;
}
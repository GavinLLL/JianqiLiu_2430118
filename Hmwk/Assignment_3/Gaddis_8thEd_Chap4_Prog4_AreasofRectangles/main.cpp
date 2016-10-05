/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4, 2016, 4:35 PM
 * Purpose:
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
    unsigned short Length1,Length2,Width1,Width2,Area1,Area2;
    //Input values
    cout<<"Enter the Length and width of first rectangle:"<<endl;
    cin>>Length1>>Width1;
    
    cout<<"Enter the Length and width of second rectangle:"<<endl;
    cin>>Length2>>Width2;
    //Process values-> Map inputs to Outputs
    Area1=Length1*Width1;
    Area2=Length2*Width2;
    
    if(Area1==Area2)
        cout<<"The areas are the same."<<endl;
    else if (Area1>Area2)
        cout<<"The first rectangle has the greater area."<<endl;
    else
        cout<<"The second rectangle has the greater area."<<endl;
                
    //Display output
    
    //Exit program
    
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4, 2016, 10:42 AM
 * Purpose: Minimum/Maximum compare numbers
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
    float A,B;
    //Input values
    cout<<"Enter number A:  ";
    cin>>A;
    cout<<"Enter number B： ";
    cin>>B;
            
    //Process values-> Map inputs to Outputs
     if (A==B)
        cout<<"The two numbers have the same value."<<endl;
    else if (A>B)
        cout<<"The number A is larger, and the number B is smaller."<<endl;
    else 
        cout<<"The number B is larger, and the number A is smaller"<<endl;
   
  
     
    
    //Display output
    
    //Exit program
    
    return 0;
}

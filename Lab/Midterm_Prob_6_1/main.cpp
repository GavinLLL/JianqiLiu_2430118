/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on September 27, 2016, 4:35 PM
 * Purpose:
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <cmath>
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes
//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float x,seq=1,term=1;
    int n;
    
    //Input values
    n=20;
    x=0.5f;
    //Process values-> Map inputs to Outputs
    for(int cnt=1,nterms=2;nterms<n;cnt+=2,nterms++){
        term*=-1.0*x*x/cnt/(cnt+1);
        seq+=term;
                
    }
    //Display output
    cout<<"Sequence = "<<seq<<endl;
    cout<<"Cos("<<x<<")="<<cos(x)<<endl;

    //Exit program
    
    return 0;
}
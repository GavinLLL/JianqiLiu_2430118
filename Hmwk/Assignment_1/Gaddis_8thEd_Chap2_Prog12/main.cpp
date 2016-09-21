

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * purpose:Land calculation
 * Created on September 18, 2016, 4:01 PM
 */


//System Libraries
#include <iostream>  //Input/out objects
using namespace std; //Name-space used in the system Library
//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of variables
    int acrLand=43560;  //One acre of land equals 43,560 square feet
    int traLand=391876; //A tract of land 391,876 square feet
    int numAcr;         //Number of acres
    //Input values
    
    //Process values-> Map inputs to Outputs
    numAcr=traLand/acrLand;
    //Display output
    cout<<"A tract of land is "<<numAcr<<" acres."<<endl;
    
    //Exit program
    return 0;
}


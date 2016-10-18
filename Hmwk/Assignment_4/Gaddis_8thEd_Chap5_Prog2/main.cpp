/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 15, 2016, 4:35 PM
 * Purpose:Characters for the ASCII Codes
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
    unsigned short num=127;
    //Input values
    
    //Process values-> Map inputs to Outputs
    for(short i=0; i<=127; i++){
        if(i%16==0){
            cout<<"\n";
        }
        cout<<static_cast<char>(i);
    }
    //Display output
    
    //Exit program
    
    return 0;
}
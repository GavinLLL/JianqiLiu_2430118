
/* 
 * File:     main.cpp
 * Author:   Jianqi Liu
 * purpose:  Calculate the employee's total annual pay
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
    //Declaration of Variables
    float payAmt=2200.0; //payAmount each pay period
    float payPer=26;     //pay periods in a year
    float annPay;        //total annual pay
    //Input values
    
    //Process values-> Map inputs to outputs
    annPay=payAmt*payPer;
    
    //Display output
    cout<<"The employee's total annual pay is "<<annPay<<"."<<endl;
    
    
    //Exit program
    return 0;
}


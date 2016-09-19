
/* 
 * File:   main.cpp
 * Author: Jianqi liu
 * Created on September 19, 2016, 8:41 AM
 * purpose
 */

//System Libraries
#include <iostream>  //Input/out objects
using namespace std; //Name-space used in the system Library

//User Libraries

//Global constants
const int PERCENT=100;//Percentage conversion
const int MONTHS=12;  //Months in a year
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of variables
    char nCmprds=36;//Number of monthly compounding periods
    float intRate=12;//Percentage per year
    float loanAmt=1e4f;//$10,000 Loan
    float monpay;      //Monthly Payment $'s
    float totpaid;     //Total Amount paid $'s
    float intpaid;     //Total Interest paid $'s
    //Input values
    
    //Process values-> Map inputs to Outputs
    intRate/=(PERCENT*MONTHS);
    float temp=pow((1+intRate),nCmprds);
    monPay=intRate*temp*loanAmt/(temp-1);
    totpaid=nCmPrds*monPay;
    inPaid=totpaid-loanAmt;
    //Display output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Using floating point Values gives an error"<<endl;
    cout<<"Loan Amout                 :$"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month      :$"<<setw(8)<<intRate<<endl;
    cout<<"Nuber of months            $"<<static_cast<int>(nCmpards)<<endl;
    cout<<"Monthly payment            $:"<<setw(8)<<intRate<<endl;
    cout<<"Interest Paid            $:"<<setw(8)<<intRate<<endl;  
    cout<<"Total Paid            $:"<<setw(8)<<intRate<<endl;   
    //Exit program
    
      return 0;
 
  
}


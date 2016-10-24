/* 
   File:   main
   Author: Jianqi Liu   
   Created on October 19th, 2016, 10:10 PM
   Purpose:  All the ways to Save
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Power function, Exponential, Log as well
#include <iomanip>    //Formatting Dollar/Cent outputs
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PERCENT=100.0f;

//Function prototypes
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save5(float,float,int);
bool isSave6(float, float,int,float &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float pv,intRate;
    int   nComp;
    
    //Input values
    pv=100.0f;               //$100
    intRate=9/PERCENT;       //8%
    nComp=90;               //9 years
    //nComp=72/intRate/PERCENT+0.5;//By the rule of 72
    
    //Process values -> Map inputs to Outputs then Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value    =$"<<pv<<endl;
    cout<<"Interest Rate    ="<<intRate*PERCENT<<"%/year"<<endl;
    cout<<"Years in Account = "<<nComp<<" years"<<endl;
    cout<<"Future  Value  (Power)      =$"<<save1(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (Exp,Log)    =$"<<save2(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (For-Loop)   =$"<<save3(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (Recursion)  =$"<<save4(pv,intRate,nComp)<<endl;
    cout<<"Future  Value  (Banking)    =$"<<save5(pv,intRate,nComp)<<endl;
    int futVal;
    isSave6(pv,intRate,nComp,futVal);
    //Exit Program
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

bool isSave6(float p,float i, int m)

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save5(float p,float i,int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        int ifv=fv*100;//Modify value for fractional pennies
        fv=ifv/100.0f; //Modify value for fractional pennies
        fv*=(1+i);
    }
    return fv;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save3(float p,float i,int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    return fv;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Savings   ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here -> Description, Range, Units
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************

float save1(float p,float i,int n){
    return p*pow((1+i),n);
}
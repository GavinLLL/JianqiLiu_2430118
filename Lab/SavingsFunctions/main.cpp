/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 *Created on October 19, 2016, 10:12 AM
 * Purpose: All the ways to save
 */

//System Libraries
#include <iostream>  //Input/out objects
#include <cmath>
#include <iomanip>
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes
float savel(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float pv,intRate,PERCENT;
    int   nComp;
    
    //Input values
    pv=100.0f;          //$100
    intRate=8/PERCENT;  //8%
    nComp=9;             //9 years
    //Process values-> Map inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Present Value     =$0"<<pv<<endl;
    cout<<"Interest Rate     ="<<intRate<<"%/years"<<endl;
    cout<<"Years in Account  ="<<nComp<<"years"<<endl;
    cout<<"Future Value (power)     =$"<<savel(pv,intRate,nComp)<<endl;
    cout<<"Future Value (Exp,Log)   =$"<<savel(pv,intRate,nComp)<<endl;
    cout<<"Future Value (For-Loop)  =$"<<savel(pv,intRate,nComp)<<endl;
    cout<<"Future Value (Recursion) =$"<<savel(pv,intRate,nComp)<<endl;
    //Display output
    
    //Exit program
    
    return 0;
}
//Purpose: show rule of 72
//Inputs: Inputs to the function here
// p->Initial balance in $'s
// i->Decimal value for the interest/year
// n->Number of compounding periods, typically by year
// 
float save3(float p,float i, int n){
    float fv=p;
    for(int year=1;year<=n;year++){
    }
}
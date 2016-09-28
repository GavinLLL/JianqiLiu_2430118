/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose: Male and Female Percentages
 * Created on September 27, 2016, 4:35 PM
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>   //Providing the parametric manipulators
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float NumMal, NumFem, TotStu; //Number of Males, Females, and total student
    float PerMal, PerFem;         //Percentage of males and females 
    //Input values
    cout<<"How many male students are in the class?        ";
    cin>>NumMal;                  //Number of Males
    cout<<"How many female students are in the class?      ";
    cin>>NumFem;                  //Number of Females
    //Process values-> Map inputs to Outputs
    TotStu=NumMal+NumFem;          //Total students in the class
    PerMal=(NumMal/TotStu)*100;    //Percentage of males
    PerFem=(NumFem/TotStu)*100;    //Percentage of females
    //Display output
   
    cout<<"The total of students in the class    is:       "<<TotStu<<endl;
    cout<<fixed<<setprecision(1)<<endl;
    cout<<"The percentage of males in the class  is:     "<<PerMal<<"%"<<endl;
    cout<<"The percentage of female in the class is:     "<<PerFem<<"%"<<endl;
    
    //Exit program
    
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:Ingredient Adjuster
 * Created on September 27, 2016, 4:35 PM
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>   //providing paremetric manipulators
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float cs=1.5, cb=1, cf=2.75, tck=48;  // recipe for 48 cookies
    float sugar, butter, flour, cookies;  
    
    //Input the amount of cookies
    cout<<"How many cookies do you want to make?"<<endl;
    cin>>cookies;
    //use the while loop to check the number be positive 
    while(cookies<=0){
    cout<<"error"<<endl;
    cout<<"How many cookies do you want to make?"<<endl;
    cin>>cookies;
    }
    //Process values-> Map inputs to Outputs
    sugar=(cs/tck)*cookies;
    butter=(cb/tck)*cookies;
    flour=(cf/tck)*cookies;
    //Display output
    
    cout<<"To make "<<cookies<<" cookies, you need:"<<endl;
    //formatted in fixed-point notation, with two decimal point
    cout<<fixed<<setprecision(2)<<endl;
    //use if else to correct the grammar
    if(sugar<=1){
    cout<<sugar<<" cup of sugar."<<endl;
    }else{
    cout<<sugar<<" cups of sugar."<<endl;
    }
    if(butter<=1){
    cout<<butter<<" cup of butter."<<endl;
    }else{
    cout<<butter<<" cups of butter."<<endl;
    }
    if(flour<=1){
    cout<<flour<<" cup of flour."<<endl;
    }else{
    cout<<flour<<" cups of flour."<<endl;
    }
    //Exit program
    
    return 0;
}
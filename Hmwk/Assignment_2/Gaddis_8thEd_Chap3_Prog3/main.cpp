/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:calculate the average test score
 * Created on September 27, 2016, 10:15 AM
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>   //Providing parametric manipulators
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float Test1,Test2,Test3,Test4,Test5;  //Five tests
    float AveSco;                         //Average test score
    
    //Input each test scores
    cout<<"Enter the first test score  ";
    cin>>Test1;
    cout<<"Enter the second test score ";
    cin>>Test2;
    cout<<"Enter the third test score  ";
    cin>>Test3;
    cout<<"Enter the fourth test score ";
    cin>>Test4;
    cout<<"Enter the fifth test score  ";
    cin>>Test5;
    //Process values-> Map inputs to Outputs
    AveSco=(Test1+Test2+Test3+Test4+Test5)/5; //calculate the average 
    //Display output
    cout<<fixed<<setprecision(1)<<endl;
    cout<<"The average test score is "<<AveSco<<endl;
    
     
    //Exit program
    
    return 0;
}

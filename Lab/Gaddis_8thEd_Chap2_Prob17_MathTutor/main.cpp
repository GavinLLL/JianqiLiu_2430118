

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 14, 2016, 10:19 AM
 */

#include <iostream>
#include <ctime>       //Seed the random number generator

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
//Declaration of Variables
    unsigned short op1,op2,result,answer;
    //Input values
    op1=rand()%900+100;//3 digit random number
    op2=rand()%900+100;//3 digit random number
    //process values-> map inputs to Outputs
    result=op1+op2;
    
    //display output
    cout<<"solve the following addition problem"<<endl;
    cout<<"  "<<op1<<endl;
    cout<<"+"<<op2<<endl;
    cout<<"-----"<<endl;
    //Ask user for the answer
    cout<<endl<<"What is the answer?"<<endl;
    cin>>answer;
    cout<<endl;
    
    //Determine if correct or not 
    cout<<"The answer is "<<(result==answer?"correct":"Incorrect")<<endl;
    cout<<"The answer was ="<<result<<endl;
    //Exit Program

    return 0;
}


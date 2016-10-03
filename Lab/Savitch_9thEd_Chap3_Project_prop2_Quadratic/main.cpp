/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:Algebra Quadratic Solution
 * Created on October 3rd, 2016, 8:50AM
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <cmath>
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float a,b,c;
    //Input values
    cout<<"Solution to Quadratic ax^2+bx+c=0"<<endl;
    cout<<"Input 3 float data types a b c"<<endl;
    cin>>a>>b>>c;
    //Process values-> Map inputs to Outputs
    float vb4sqrt=b*b-4*a*c;
    if(a==0){
        if(b==0){
            cout<<"This is not an algebraic equation"<<endl;
        }else{
        cout<<"The solution is x = "<<-c/b<<endl;
        }
    }
        else if(vb4sqrt>0){
        cout<<"x =("<<((-b+sqrt(vb4sqrt))/(2*a))<<" , "
                    <<((-b-sqrt(vb4sqrt))/(2*a))<<")"<<endl;
        
    }else{
        cout<<"X = ("<<(-b/(2*a))<<"+"<<(sqrt(-vb4sqrt)/(2*a))<<"i, "
                     <<(-b/(2*a))<<"+"<<(-sqrt(-vb4sqrt)/(2*a))<<"i) "<<endl;
    }
    //Display output
    
    //Exit program
    
    return 0;
}


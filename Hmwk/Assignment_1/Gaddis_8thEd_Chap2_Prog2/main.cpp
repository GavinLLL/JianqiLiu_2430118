

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on September 18, 2016, 3:19 PM
 * Purpose:Sales Prediction
 */

//System Libraries
#include <iostream>  //Iput/out objects
using namespace std; //Name-space used in the system Library

//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of variables
    float PerToSal =0.58;             //percent of total sales
    float ComSal   =8.6;              //company sales this year in millions
    float EastGene;                   //the east coast division will generate
    
    //Input values
    
    //Process values->Map inputs to outputs
    EastGene=PerToSal*ComSal;
    
    //Display output
    cout<<"The East Coast division will generate $"<<EastGene<<" millions,"
        <<endl;
    cout<<"if the company has $8.6 million in sales this year."<<endl;
    
    //Exit program
    return 0;
}


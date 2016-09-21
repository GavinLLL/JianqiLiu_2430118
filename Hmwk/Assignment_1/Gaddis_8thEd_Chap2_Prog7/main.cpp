

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * purpose:calculate the rising ocean levels
 * Created on September 18, 2016, 4:01 PM
 */
//System Libraries
#include <iostream>  //Input/out objects
using namespace std;//Name-space used in the system Library

//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of variables
    float risPYer=1.5;   //Ocean's level rising 1.5 millimeters/year
    float Years5 =5;     //5  years
    float Years7 =7;     //7  Years
    float Years10=10;    //10 Years
    float LeveL5;        //Ocean's level rising in five years
    float LeveL7;        //Ocean's level rising in seven years
    float LeveL10;       //Ocean's level rising in ten years
    //Input values
    
    //Process values-> Map inputs to Outputs
    LeveL5 =risPYer*Years5;
    LeveL7 =risPYer*Years7;
    LeveL10=risPYer*Years10;
    //Display output
    cout<<"The Ocean's Level will rise " <<LeveL5;
    cout<<" millimeters in five years."           <<endl;
    cout<<"The Ocean's Level will rise " <<LeveL7;
    cout<<" millimeters in seven years."          <<endl;
    cout<<"The Ocean's Level will rise " <<LeveL10;
    cout<<" millimeters in ten years."            <<endl;
    
    //Exit program
    return 0;
}


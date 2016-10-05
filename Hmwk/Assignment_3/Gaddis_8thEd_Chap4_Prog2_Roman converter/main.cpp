/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4, 2016, 4:35 PM
 * Purpose:Roman Numeral Converter
 */

//System Libraries
#include <iostream>  //Input/out objects
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    unsigned short Number,Number2;
    //Input values
    cout<<"Type in a number to convert to Roman numeral version "<<endl;
    cout<<"Choose 1 to 10"<<endl;
    cin>>Number;
    //Process values-> Map inputs to Outputs
    switch (Number)
    {
        case 1:cout<<"I"<<endl;break;
        case 2:cout<<"II"<<endl;break;
        case 3:cout<<"III"<<endl;break;
        case 4:cout<<"IV"<<endl;break;
        case 5:cout<<"V"<<endl;break;
        case 6:cout<<"VI"<<endl;break;
        case 7:cout<<"VII"<<endl;break;
        case 8:cout<<"VIII"<<endl;break;
        case 9:cout<<"IX"<<endl;break;
        case 10:cout<<"X"<<endl;break;
        default:cout<<"You did not enter number 1 to 10"<<endl;
        
        
    }   
    cout<<"Type another number from 1 to 10"<<endl;
    cin>>Number2;
     switch (Number2)
    {
        case 1:cout<<"I"<<endl;break;
        case 2:cout<<"II"<<endl;break;
        case 3:cout<<"III"<<endl;break;
        case 4:cout<<"IV"<<endl;break;
        case 5:cout<<"V"<<endl;break;
        case 6:cout<<"VI"<<endl;break;
        case 7:cout<<"VII"<<endl;break;
        case 8:cout<<"VIII"<<endl;break;
        case 9:cout<<"IX"<<endl;break;
        case 10:cout<<"X"<<endl;break;
        default:cout<<"You did not enter number 1 to 10"<<endl;
        
        
    }
    //Display output
    
    //Exit program
    
    return 0;
}



/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4, 2016, 4:35 PM
 * Purpose:The speed of sound
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>   //Provding paramtric manipulator
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    float air=1, water=2,steel=3;
    float choice;
    float distant,total;
                   
    //show point
    cout<<fixed<<showpoint<<setprecision(4);
    //Input values
    cout<<"1. Air"<<endl;
    cout<<"2. Water"<<endl;
    cout<<"3. Steel"<<endl;
    cout<<endl;
    cout<<"Enter 1 for Air,2 for Water or 3 for Steel "<<endl;
    cin>>choice;
    //Process values-> Map inputs to Outputs
    if (choice==air)
    {
        cout<<"Enter the distance a sound wave will travel in the ";
        cout<<"selected medium in (ft)"<<endl;
        cin>>distant;
        //Calculate the amount of time it takes
        total=distant/1100;
        cout<<"The amount of time sound will take in Air would be ";
        cout<<total<<" Seconds"<<endl;
    }
    else if (choice==water)
    {
        cout<<"Enter the distance a sound wave will travel in ";
        cout<<"the selected medium in (ft)"<<endl;
        cin>>distant;
        //Calculate the amount of time it takes
        total=distant/4900;
        cout<<"The amount of time sound will take in Water would be ";
        cout<<total<<" Seconds"<<endl;
    }
    else if (choice==steel)
    {
        cout<<"Enter the distance a sound wave will travel in ";
        cout<<"the selected medium in (ft)"<<endl;
        cin>>distant;
        //Calculate the amount of time it takes
        total=distant/16400;
        cout<<"The amount of time sound will take in Steel would be ";
        cout<<total<<" Seconds"<<endl;
    }
    //Display output
    
    //Exit program
    
    return 0;
}
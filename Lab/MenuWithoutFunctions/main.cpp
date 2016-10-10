/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 10, 2016, 9:32 AM
 * Purpose:Menu Without Functions
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
    int menuItm;  //Choice from menu
    
    //Loop until users exits
    do{
       
   
    //Prompt for problem for user input
    cout<<"1. Type 1  for Problem A"<<endl;
    cout<<"2. Type 2  for Problem B"<<endl;
    cout<<"3. Type 3  for Problem C"<<endl;
    cout<<"4. Type 4  for Problem D"<<endl;
    cout<<"5. Type 5  for Problem E"<<endl;
    cout<<"6. Type 6  for Problem F"<<endl;
    cout<<"7. Type 7  for Problem G"<<endl;
    cout<<"8. Type 8  for Problem H"<<endl;
    cout<<"9. Type 9  for Problem I"<<endl;
    cout<<"10.Type 10 for Problem J"<<endl;
    cin>>menuItm;
    
    //Go to the Problem
    switch(menuItm){
        case1:{
            cout<<"Inside Problem A"<<endl;
            break;
        }
        case2:{
            cout<<"Inside Problem B"<<endl;
            break;
        }
        case3:{
            cout<<"Inside Problem C"<<endl;
            break;
        }
        case4:{
            cout<<"Inside Problem D"<<endl;
            break;
        }
        case5:{
            cout<<"Inside Problem E"<<endl;
            break;
        }
        case6:{
            cout<<"Inside Problem F"<<endl;
            break;
        }
        case7:{
            cout<<"Inside Problem G"<<endl;
            break;
        }
        case8:{
            cout<<"Inside Problem H"<<endl;
            break;
        }
        case9:{
            cout<<"Inside Problem I"<<endl;
            break;
        }
        case10:{
            cout<<"Inside Problem J"<<endl;
            break;
        }//End case
    }//End the switch/case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-while loop
    
    //Exit program
    
    return 0;
}
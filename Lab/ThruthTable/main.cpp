
/* 
  * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:Display 13 columns of the Truth Table
 * Created on September 26, 2016, 9:31 AM
 */


//System Libraries  //Input/out objects
#include <iostream> //Name-space used in system Library 

using namespace std;
//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declaration of variables
   bool x,y; 
   //output the Heading of  the truth table
   cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y "<<endl; 
  
   //input values first row of the truth table
   x=true;
   y=true;
    
    //Display the fist row fo the truth table
     cout<<(x?'T':'F')<<"";
     cout<<(Y?'T':'F')<<"  ";
     cout<<(!x?'T':'F')<<" ";
     cout<<(!Y?'T':'F')<<"   ";
     cout<<(x&&Y?'T':'F')<<" ";
     cout<<endl;
     //Input values for second row of the the truth table
     y=false;
     
     //display the second row of the truth table
     cout<<(x?'T':'F')<<"";
     cout<<(Y?'T':'F')<<"";
     cout<<(!x?'T':'F')<<"";
     cout<<(!Y?'T':'F')<<"";
     cout<<(x&&Y?'T':'F')<<"";
     cout<<endl;
     
    //Exit program
    return 0;
}


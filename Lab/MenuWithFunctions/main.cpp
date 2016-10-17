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
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
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
 case 1:problem1(); break;
 case 2:problem2(); break;
 case 3:problem3(); break;
 case 4:problem4(); break;
 case 5:problem5(); break;
 case 6:problem6(); break;
 case 7:problem7(); break;
 case 8:problem8(); break;
 case 9:problem9(); break;
 case 10:problem10();
 
            
      
      
    }//End the switch/case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-while loop
    
    //Exit program
    
    return 0;
}
void problem1(){
cout<<"Inside Problem A"<<endl;
}
void problem2(){
cout<<"Inside Problem B"<<endl;
}
void problem3(){
cout<<"Inside Problem C"<<endl;
}
void problem4(){
cout<<"Inside Problem D"<<endl;
}
void problem5(){
cout<<"Inside Problem E"<<endl;
}
void problem6(){
cout<<"Inside Problem F"<<endl;
}
void problem7(){
cout<<"Inside Problem G"<<endl;
}
void problem8(){
cout<<"Inside Problem H"<<endl;
}
void problem9(){
cout<<"Inside Problem I"<<endl;
}
void problem10(){
cout<<"Inside Problem J"<<endl;
}
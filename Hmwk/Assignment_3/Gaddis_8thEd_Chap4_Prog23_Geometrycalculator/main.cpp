
/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 4,2016, 4:35 PM
 * Purpose:Geometry Calculator
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>   //providing parametric manipulator
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    int choice;  //Choice of the menu
    float radius,  //Radius of the circle
          length,  //length of the rectangle
          width,   //width of the rectangle
          base,    //base of the triangle
          height,  //height of the triangle
          area;    //area of the circle, rectangle and triangle
    //Input values
    cout<<"1. Calculate the area of a Circle"<<endl;
    cout<<"2. Calculate the area of a Rectangle"<<endl;
    cout<<"3. Calculate the area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl<<endl;
    cout<<"Enter your choice (1-4):"<<endl;
    cin>>choice;
    //Process values-> Map inputs to Outputs
    switch(choice)
    {
        case 1:cout<<"Input the radius of the circle"<<endl;
               cin>>radius;
               area=3.14159*radius*radius;
               cout<<"The area of a circle is "<<area<<endl;break;
        case 2:cout<<"Input the length and width of the rectangle"<<endl;
               cin>>length>>width;
               area=length*width;
               cout<<"The area of a rectangle is "<<area<<endl;break;
        case 3:cout<<"Input the base and the height of the triangle"<<endl;
               cin>>base>>height;
               area=base*height*.5;
               cout<<"The area of a triangle is "<<area<<endl;break;
        case 4:cout<<"Have a nice day :)"<<endl;break;
        
        
        default:cout<<"The valid choices are 1 through 4.Run the ";
                cout<<"program again abd select one of those."<<endl;
    }
    //Display output
    
    //Exit program
    
    return 0;
}
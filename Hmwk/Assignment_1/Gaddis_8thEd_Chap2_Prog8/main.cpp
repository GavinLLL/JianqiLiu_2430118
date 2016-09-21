
/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * purpose:Find the subtotal,sales tax, and the total
 * Created on September 18, 2016, 4:01 PM
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>
using namespace std; //Name-space used in the system Library

//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of variables
    float Pritem1 =15.95;      //Price of item 1 is $15.95
    float Pritem2 =24.95;      //Price of item 2 is $24.95
    float Pritem3 =6.95;       //Price of item 3 is $6.95
    float Pritem4 =12.95;      //Price of item 4 is $12.95
    float Pritem5 =3.95;       //Price of item 5 is $3.95
    float Saltax  =0.07;       //Assume the sales tax is 7%
    float Tax1;                //The tax of item 1
    float Tax2;                //The tax of item 2
    float Tax3;                //The tax of item 3
    float Tax4;                //The tax of item 4
    float Tax5;                //The tax of item 5
    float SubSal;              //The subtotal of the sale
    float AmtTax;              //The amount of sales tax
    float Total;               //The sum of subtotal and amount of tax  
    //Input values
    
    //Process values-> Map inputs to Outputs
    SubSal=Pritem1+Pritem2+Pritem3+Pritem4+Pritem5; //sum of five items
    Tax1=Pritem1*Saltax;                            //The tax of item 1
    Tax2=Pritem2*Saltax;                            //The tax of item 2
    Tax3=Pritem3*Saltax;                            //The tax of item 3
    Tax4=Pritem4*Saltax;                            //The tax of item 4
    Tax5=Pritem5*Saltax;                            //The tax of item 5
    AmtTax=Tax1+Tax2+Tax3+Tax4+Tax5;                //The amount of the tax
    Total=SubSal+AmtTax;
    
    //Display output
    cout<<setprecision(2)<<fixed;
    cout<<"Price of item 1                       $ "<<setw(5)<<Pritem1<<endl;
    cout<<"Price of item 2                       $ "<<setw(5)<<Pritem2<<endl;
    cout<<"Price of item 3                       $ "<<setw(5)<<Pritem3<<endl;
    cout<<"Price of item 4                       $ "<<setw(5)<<Pritem4<<endl;
    cout<<"Price of item 5                       $ "<<setw(5)<<Pritem5<<endl;
    cout<<"Subtotal                              $ "<<setw(5)<<SubSal<<endl;
    cout<<"Tax                                   $ "<<setw(5)<<AmtTax<<endl;
    cout<<"Total                                 $ "<<setw(5)<<Total<<endl;
    //Exit program
    return 0;
}


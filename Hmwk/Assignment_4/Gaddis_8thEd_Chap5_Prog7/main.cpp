/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 *
 * Created on October 15, 2016, 4:35 PM
 */

#include <iostream>
#include <iomanip>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float day;
    float pay=0.01;
    float total;
    
    do{
        cout<<"Please Enter the number of day: ";
        cin>>day;
        
        if(day<=1)
            cout<<"Do not enter the number less then 1!"<<endl;
    }while(day<=1);
    
    
    cout<<"Day              Salary"<<endl;
    cout<<setw(3)<<"1"<<"          "<<setw(6)<<"$"<<0.01<<endl;
    for(int i=2;i<=day;i++){
        pay*=2;
        total+=pay;
        cout<<setw(3)<<i<<"          "<<setw(6)<<"$"<<pay<<endl;
    }
    cout<<"The total of salary is $"<<total<<endl;
    
    return 0;
}


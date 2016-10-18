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


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int year;
    float monthrain;
    float totalrain=0;
    float month;
    float average;
    
    do{
        cout<<"Please enter the year: ";
        cin>>year;
        if(year<1)
            cout<<"Do not enter the number less then 1!"<<endl;
    }while(year<1);
    
    for(int i=1; i<=year;i++){
        for(int j=1;j<=12;j++){
            do{
                cout<<"Enter the rainfall for month "<<j<<endl;
                cin>>monthrain;
                if(monthrain<0)
                    cout<<"do not enter the number less then 0!"<<endl;
            }while(monthrain<0);
            totalrain+=monthrain;
        }
    }
    
    month=year*12;
    average=totalrain/month;
    
    cout<<"There are "<<month<<" months"<<endl;
    cout<<"The total rainfall of this period is "<<totalrain<<endl;
    cout<<"The average rainfall per month is "<<average<<endl;
    
    

    return 0;
}


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
    int start;
    float increase;
    int day;
    
    do{
        cout<<"Enter the starting number of organisms "<<endl;
        cin>>start;
        if(start<2)
            cout<<"Do not enter the number less then 2!"<<endl;
    }while(start<2);
    
    do{
        cout<<"What is the daily increase rate as a percentage? "<<endl;
        cin>>increase;
        if(increase<0)
            cout<<"Do not enter the number less then 0!"<<endl;
    }while(increase<0);
    
    do{
        cout<<"How many days will they multiply?"<<endl;
        cin>>day;
        if(day<1)
            cout<<"Do not enter the number less then 1!"<<endl;
    }while(day<1);
    
    cout<<"Day          Population"<<endl;
    for(int i=1; i<=day; i++){
        start*=(1+(increase/100));
        cout<<setw(3)<<i<<"   "<<setw(15)<<start<<endl;
    }

    return 0;
}


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
 float times, speed, mile;
    
    cout<<"Please Enter the speed of the vehicle: ";
    cin>>speed;
    cout<<"Please Enter the time of traveling: ";
    cin>>times;
    
    cout<<"Hour         Distance Traveled"<<endl;
    cout<<"------------------------------"<<endl;
    for(int i=0;i<=times;i++){
        mile=speed*i;
        cout<<i<<"                    "<<mile<<endl;
    }
    
    return 0;
}


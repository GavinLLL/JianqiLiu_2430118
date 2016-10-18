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
float cpm=3.6;
    float total;
    
    for(int i=1;i<=30;i++){
        total+=cpm;
        if(i==5)
            cout<<"After 5 min, you will burn "<<total<<" calories."<<endl;
        else if(i==10)
            cout<<"After 10 min, you will burn "<<total<<" calories."<<endl;
        else if(i==15)
            cout<<"After 15 min, you will burn "<<total<<" calories."<<endl;
        else if(i==20)
            cout<<"After 20 min, you will burn "<<total<<" calories."<<endl;
        else if(i==25)
            cout<<"After 25 min, you will burn "<<total<<" calories."<<endl;
        else if(i==30)
            cout<<"After 30 min, you will burn "<<total<<" calories."<<endl;
    }
    return 0;
}


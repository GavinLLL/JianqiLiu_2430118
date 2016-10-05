/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on October 5, 2016, 9:24 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char Name;
    cout<<"Enter the password:"<<endl;
    cin>>Name;
    while(Name!=Name){

        cout<<"wrong password"<<endl;
        cout<<"try again"<<endl;
        cin>>Name;
    }
    cout<<"welcome"<<endl;
    
    return 0;
}


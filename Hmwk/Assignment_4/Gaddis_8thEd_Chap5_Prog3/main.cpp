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
    float rise=1.5;
    float total;
    
    for(int i=1;i<=25;i++){
        total+=rise;
        cout<<"After "<<i<<" years the ocean will rise "<<total<<"mm."<<endl;
    }
    return 0;
}


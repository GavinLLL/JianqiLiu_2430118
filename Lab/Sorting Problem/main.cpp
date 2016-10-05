/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 *Created on October 5, 2016, 9:52 AM
 * purpose: Sorting numbers
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b;
    cout<<"Enter two numbers,it will appear in order from small to large. "<<endl;
    cin>>a>>b;
    if(a<=b)
        cout<<a<<" , "<< b<<endl;
    else
        cout<<b<<" , "<< a<<endl;
    
    
    return 0;
}


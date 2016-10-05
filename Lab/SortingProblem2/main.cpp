/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 *
 * Created on October 5, 2016, 10:26 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b,c;
     cout<<"Enter three numbers,it will appear in order from small to large. "<<endl;
     cin>>a>>b>>c;
     if(a<b&&a<c)
         cout<<a<<","<<b<<","<<c<<endl;
     
       
    return 0;
}


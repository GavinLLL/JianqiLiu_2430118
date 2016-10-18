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
    float floor; 
    float room; 
    float occroom;
    float totalocc;
    float nuoccroom;
    float totalunocc;
    float totalroom=0;
    float roPect;
    cout<<"How many floors does the hotel have?"<<endl;
    cin>>floor;
    
    for(unsigned short i=1; i<=floor; i++){
        if(i==13){
            cout<<"There is no rooms on Floor 13."<<endl;
        }
        else{
            cout<<"How many rooms on floor "<<i<<endl;
            cin>>room;
            totalroom+=room;
            cout<<"How many rooms are occupied?"<<endl;
            cin>>occroom;
            totalocc+=occroom;
            nuoccroom=room-occroom;
            totalunocc+=nuoccroom;
        }
    }
    roPect=static_cast<float>(totalocc)/totalroom;
    
    cout<<"The hotel has "<<totalroom<<" rooms."<<endl;
    cout<<"There are "<<totalocc<<" rooms are occupied."<<endl;
    cout<<"The percentage of occupied is "<<roPect*100<<"%."<<endl;

    return 0;
}


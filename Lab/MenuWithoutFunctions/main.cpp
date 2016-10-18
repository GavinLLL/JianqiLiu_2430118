/* 
 * File:   main.cpp
 * Author: Jianqi Liu
 * Created on October 10, 2016, 9:32 AM
 * Purpose:Menu Without Functions
 */


//System Libraries
#include <iostream>  //Input/out objects
#include <iomanip>
using namespace std; //Name-space used in system Library 

//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaration of variables
    int menuItm;  //Choice from menu
    
    //Loop until users exits
    do{
       
   
    //Prompt for problem for user input
    cout<<"1. Type 1  for Problem A"<<endl;
    cout<<"2. Type 2  for Problem B"<<endl;
    cout<<"3. Type 3  for Problem C"<<endl;
    cout<<"4. Type 4  for Problem D"<<endl;
    cout<<"5. Type 5  for Problem E"<<endl;
    cout<<"6. Type 6  for Problem F"<<endl;
    cout<<"7. Type 7  for Problem G"<<endl;
    cout<<"8. Type 8  for Problem H"<<endl;
    cout<<"9. Type 9  for Problem I"<<endl;
    cout<<"10.Type 10 for Problem J"<<endl;
    cout<<"Type 0 to end the program"<<endl;
    cin>>menuItm;
    
    //Go to the Problem
    switch(menuItm){
        case 1:{
            cout<<"Inside Problem A"<<endl;
            //Declaration of variables
            float number;
            float total;
            //Input values
            cout<<"Please enter the number:";
            cin>>number;
            //Process values-> Map inputs to Outputs
            for(int i=1;i<=number;i++){
                total+=i;
            }

            cout<<"The sum from 1 to "<<number<<" is: "<<total<<endl;
            break;
        }
        case 2:{
            cout<<"Inside Problem B"<<endl;
            //Declaration of variables
            unsigned short num=127;
            //Input values

            //Process values-> Map inputs to Outputs
            for(short i=0; i<=127; i++){
                if(i%16==0){
                    cout<<"\n";
                }
                cout<<static_cast<char>(i);
            }
            break;
        }
        case 3:{
            cout<<"Inside Problem C"<<endl;
            float rise=1.5;
            float total;

            for(int i=1;i<=25;i++){
                total+=rise;
                cout<<"After "<<i<<" years the ocean will rise "<<total<<"mm."<<endl;
            }
            return 0;
            break;
        }
        case 4:{
            cout<<"Inside Problem D"<<endl;
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
            break;
        }
        case 5:{
            cout<<"Inside Problem E"<<endl;
            float rise=0.04;
            float fee=2500;

            for(int i=1;i<=6;i++){
                fee=fee*(1+rise);
                cout<<"After "<<i<<" years, the fee will be $"<<fee<<endl;

            }
            break;
        }
        case 6:{
            cout<<"Inside Problem F"<<endl;
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
            break;
        }
        case 7:{
            cout<<"Inside Problem G"<<endl;
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
            break;
        }
        case 8:{
            cout<<"Inside Problem H"<<endl;
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
            break;
        }
        case 9:{
            cout<<"Inside Problem I"<<endl;
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
            break;
        }
        case 10:{
            cout<<"Inside Problem J"<<endl;
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
            break;
        }//End case
    }//End the switch/case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-while loop
    
    //Exit program
    
    return 0;
}
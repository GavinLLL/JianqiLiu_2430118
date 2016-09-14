/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on September 13th, 2016, 11:55 AM
   Purpose:  To calculate when homeowners in Riverside will have
            beach front property
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float CNVMMFT=304.8f;//Conversion milimeters to feet from Google
const float CNVMMM=1000.0f;//Conversion from milimeters to meters

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables with initialization
    float rate=1.5f;//Sea level rise rate in mm/year
    int nYear1=5,nYear2=7,nYear3=10;//Years to calculate rise
    float rise1,rise2,rise3;//Solutions for the 3 years from above
    int nYrBch;//Number of years before your home is beach front property;
    float elevRiv=860.0f;//Elevation of Riverside in feet according to wikipedia

    //Process values -> Map inputs to Outputs
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    
    //Display Output
    cout<<"The rate of seal level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<" mm"<<endl;
    cout<<"At this rate Riverside won't have beach front property for ";
    cout<<nYrBch<<" years"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters"<<endl;

    //Exit Program
    return 0;
}
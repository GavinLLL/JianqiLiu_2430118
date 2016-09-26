
/* 
  * File:   main.cpp
 * Author: Jianqi Liu
 * Purpose:Display 13 columns of the Truth Table
 * Created on September 26, 2016, 9:31 AM
 */


//System Libraries  //Input/out objects
#include <iostream> //Name-space used in system Library 

using namespace std;
//User Libraries

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declaration of variables
   bool x,y; 
   //output the Heading of  the truth table
   cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y "<<endl; 
  
   //input values first row of the truth table
   x = true;
   y = true;
    
    //Display the fist row for the truth table
     cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "    ";
    cout << (x^y^y?'T':'F') << "     ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << endl;
    
     //Input values for second row of the the truth table
     y=false;
     
     //display the second row of the truth table
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "    ";
    cout << (x^y^y?'T':'F') << "     ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << endl;
    
    // Input the values for the third row
    x = false;
    y = true;
    
    // Display third row of the table
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "    ";
    cout << (x^y^y?'T':'F') << "     ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << endl;
    
    // Input the values for the fourth
    y = false;
    
    // Display fourth row of the table
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "    ";
    cout << (x^y^y?'T':'F') << "     ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << endl;
    //Exit program
    return 0;
}


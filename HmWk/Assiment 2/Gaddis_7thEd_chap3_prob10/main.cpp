/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March 18,2015,8:57 PM
 *      Purpose:
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main(){
//declare variables
float c;//celsius
float f;//fahreheit
//input
cout<<"input the celsius temperture you want to convert to fahrenheit"<<endl;
cin>>c;
//caculate
f=(9/3)*c+32;
//output
cout<<" The conversion is "<<showpoint<<fixed<<setprecision(2)<<f<<endl;



    return 0;
}


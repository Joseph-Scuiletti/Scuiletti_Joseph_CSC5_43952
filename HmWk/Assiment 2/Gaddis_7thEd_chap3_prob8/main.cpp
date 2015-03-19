/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on Month Day, Year, Time AM/PM
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
//delare variables
float bilcst,insur;
//input
cout<<"to figure out how much a building insurance cost first input the replacment cost of the building"<<endl;
cin>>bilcst;
cout<<"please wait"<<endl;
//caculate
insur=bilcst*.80;
//output
cout<<"the buildings insurance will cost $"<<showpoint<<fixed<<setprecision(2)<<insur<<endl;
//exit
    return 0;
}


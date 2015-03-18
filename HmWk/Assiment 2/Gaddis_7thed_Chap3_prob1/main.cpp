/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March,15,2015,12:00AM
 *      Purpose:
 */

#include <iostream>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main(){
//variables
float gall,mil,mpg;
//input
cout<<" This will caclulate how many mile per gallon your car has"<<;
cout<<"First, how many gallons does your cars tank have?"<<endl;
cin>>gall;
cout<<" Now, how many miles can your car drive with a full tank of gas?"<<endl;
cin>>mil;
//caculate
mpg=gall*mil;
//output
cout<<"Your car's Miles Per gallon is "<<mpg<<endl;


    return 0;
}


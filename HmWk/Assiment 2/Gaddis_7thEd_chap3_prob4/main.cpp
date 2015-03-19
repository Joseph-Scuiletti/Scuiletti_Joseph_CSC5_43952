/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on Month Day, Year, Time AM/PM
 *      Purpose:
 */

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main(){
//declare variables
float rain1,rain2,rain3,total;
string month1;
string month2;
string month3;
//input
cout<<"input a month"<<endl;
getline(cin,month1);
cout<<"input a second month"<<endl;
getline(cin,month2);
cout<<"input a third month"<<endl;
getline(cin,month3);
cout<<"input the amount of rain(in inches) for "<<month1<<endl;
cin>>rain1;
cout<<"input the amount of rain for "<<month2<<endl;
cin>>rain2;
cout<<"input the amount of rain for "<<month3<<endl;
cin>>rain3;
//caculate
total=rain1+rain2+rain3;
//output
cout<<" the avrage rainfall for "<<month1<<","<<month2<<", and "<<month3<<" is "<<showpoint<<fixed<<setprecision(2)<<total;



    return 0;
}


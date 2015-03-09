/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March 9, 2015, 10:21 AM
 * Purpose:to see how many snickers it takes to survie
 */

#include <iostream>
using namespace std;
//user libaries

//Global Constants

//function prototype
//exection begins here
int main(int argc, char** argv) {
    unsigned short wtlbs,htin,ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale, nCBars;
    cout<<"how many candy bars will it take"<<endl;
    cout<<"to maintain your weight?"<<endl;
    cout<<"Inputs are intergers"<<endl;
    cout<<"input your weight in lbs"<<endl;
    cin>>wtlbs;
    cout<<"Input your height in inches"<<endl;
    cin>>htin;
    cout<<"Input your age in years"<<endl;
    cin>>ageyrs;
    cout<<"are you male or female m/f? one charter input"<<endl;
    cin>>mf;
            //caclulate
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    nCBars=((mf=='m'))?(BMRMale/cBar):(BMRFem/cBar);
    cout<<"your weight = "<<wtlbs<<"(lbs)"<<endl;
    cout<<"your height = "<<htin<<"(inches)"<<endl;
    cout<<"your age = "<<ageyrs<<"(years)"<<endl;
    cout<<"your sex = "<<((mf=='m')?"male":"female")<<endl;
    cout<<"you can eat "<<nCBars<<"candy bars per day"<<endl;
    return 0;
}

